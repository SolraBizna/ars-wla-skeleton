This is a bare-bones skeleton of an ARS game written in 65C02 assembly. It is in the public domain; feel free to modify and redistribute it as you please.

You will require a recent build of WLA-DX and the GNU version of Make. (If you're on any platform except BSD and you have a `make` command, it's probably the GNU version.) If you're on Windows, you will need something like Cygwin or WSL.

To use, either download a release from the Releases tab of the GitHub page, or do:

```sh
git clone --depth 1 --recursive https://github.com/SolraBizna/ars-wla-skeleton your-project-name
rm -rf your-project-name/.git
```

Either way, you end up with your very own project complete with build system. Simply run `make` to assemble and link your very own ARS game. All files with a `.65c` extension in the `src` directory will be automatically included in the build.

To change the name from "My ARS Game": rename the etars directory, edit line ten of the makefile to reflect the new directory name, and edit the title in `manifest.bml`.

Good luck, have fun!
