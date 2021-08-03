
.PHONY: check
check:
	@which qmk 2>/dev/null || (echo "QMK is not installed." && exit 1)

.PHONY: generate
generate: check
	@echo "Generating keymap from json..."
	@qmk json2c ./configurator/iris-code.json > src/keymap.c
	@echo "Keymap generated!"

.PHONY: install
install: generate
	@echo "Installing layout..."
	@mkdir -p ~/qmk_firmware/keyboards/keebio/iris/keymaps/liamg
	@ln -sf `pwd`/src/* ~/qmk_firmware/keyboards/keebio/iris/keymaps/liamg
	@echo "Layout installed!"

.PHONY: configure
configure: check
	@echo "Configuring qmk..."
	@qmk config user.keymap=liamg
	@qmk config user.keyboard=keebio/iris/rev4
	@echo "QMK configured."

.PHONY: clone
clone:
	@[[ -d "$$HOME/qmk_firmware" ]] || (git clone https://github.com/qmk/qmk_firmware.git $$HOME/qmk_firmware && pushd $$HOME/qmk_firmware && make git-submodule && popd)

.PHONY: flash
flash: clone check install configure
	@echo "Starting flash..."
	@qmk flash
	@echo "Done!"
