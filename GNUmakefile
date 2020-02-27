all: bin/rom.rom

bin/rom.rom: $(patsubst src/%.65c,obj/%.o,$(wildcard src/*.65c))
	@echo "Linking ROM..."
	@mkdir -p bin
	@echo [objects] > obj/rom.link
	@for f in $^; do echo $$f >> obj/rom.link; done
	@wlalink -v -r -S -d obj/rom.link $@
# Change this line if you rename the etars directory
	@cp $@ "MyARSGame.etars/rom.rom"

obj/%.o: src/%.65c $(wildcard include/*.inc)
	@echo "Assembling $<..."
	@mkdir -p obj
	@wla-65c02 -o $@ $<

clean:
	rm -rf obj bin

.PHONY: all clean
.SECONDARY: # keep secondary files
MAKEFLAGS += --no-builtin-rules # out! out, vile built-in rules!
