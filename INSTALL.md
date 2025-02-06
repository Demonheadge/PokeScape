<!-- TOC -->

- [Instructions](#instructions)
  - [Windows](#windows)
  - [Linux](#linux)
  - [macOS](#macos)
  - [Building](#building)
    - [Building with debug info](#building-with-debug-info)
    - [Other toolchains](#other-toolchains)
    - [agbcc](#agbcc)
  - [Useful additional tools](#useful-additional-tools)

<!-- TOC -->

# Instructions

These instructions explain how to set up the tools required to build `pokescape`, which assembles the
source files into a ROM (`pokescape.gba`).

If you run into trouble, ask for help on Discord or IRC (see [README.md](README.md)).

## Windows

See [pokeemerald-expansion's docs for Windows here](https://github.com/rh-hideout/pokeemerald-expansion/tree/master/docs/install/windows)

## Linux

See [pokeemerald-expansion's docs for Linux here](https://github.com/rh-hideout/pokeemerald-expansion/tree/master/docs/install/linux)

## macOS

Few notes on installing packages on macOS:

- `pkg-config` may already be installed after installing Homebrew, check with `which pkg-config`.
- You do not need `devkitpro` for the `arm-none-eabi` package, `brew` can do this for you.
  This `brew` install should be all that you need to run to build `PokeScape` locally:
  - ```shell
    brew install --cask gcc-arm-embedded && brew install libpng
    ```

See [pokeemerald-expansion's docs for macOS here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/docs/install/mac/MAC_OS.md)
if `make all` still throws errors after the above `brew` command.

## Building

After cloning this repo, you will also need to clone the `poryscript` repository and run the installation steps to place the `poryscript` executable in the `tools` folder:

Assuming the directory where you clone the `PokeScape` and `poryscript` repositories are in `~/Documents`:

1. Clone and build `poryscript`:

   ```shell
   git clone https://github.com/huderlem/poryscript.git
   cd poryscript  # e.g. ~/Documents/poryscript
   go build
   ```

2. Install `poryscript` into `PokeScape` `tools/` directory:

   ```shell
   ./install.sh ../PokeScape
   ```

3. Change directory to `PokeScape` repository and update the permissions for the `poryscript` executable to be runnable:

   ```shell
   cd ../PokeScape
   chmod -R 777 tools/poryscript
   ```

4. Build the `pokescape.elf`, `pokescape.gba`, and `pokescape.map` files:

   ```shell
   make all
   ```

### Building with debug info

To build `pokescape.elf` with debug symbols under a modern toolchain:

```shell
make DINFO=1
```

### Other toolchains

See [pokeemerald-expansion's docs for other toolchains](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/INSTALL.md#other-toolchains)

### agbcc

<details>
    <summary><i>Deprecated; installing agbcc is optional since 1.7.0</i>.</summary>

Install `agbcc` into `pokescape`. The commands to run depend on certain conditions.
**You should only follow one of the listed instructions**:

1. If `agbcc` has not been built before in the folder where you chose to store `pokescape`, run the
   following commands to build and install it into `pokescape`:

   ```shell
   git clone https://github.com/pret/agbcc
   cd agbcc
   ./build.sh
   ./install.sh ../pokescape
   ```

2. Otherwise, if `agbcc` has been built before (e.g. if the git clone above fails), but was last built on a different
   terminal than the one currently used (only relevant to Windows, e.g. switching from msys2 to WSL1), then run the
   following commands to build and install it into `pokescape`:

   ```shell
   cd agbcc
   git clean -fX
   ./build.sh
   ./install.sh ../pokescape
   ```

3. Otherwise, if `agbcc` has been built before on the same terminal, run the following commands to install `agbcc` into
   `pokescape`:

   ```shell
   cd agbcc
   ./install.sh ../pokescape
   ```

   > If building agbcc or pokescape results in an error, try deleting the agbcc folder and re-installing agbcc as if
   > it has not been built before.

Once `agbcc` is installed, change directory back to the base directory where `pokescape` is stored:

```shell
cd ../PokeScape
```

Compile:

```shell
make all
```

</details>

## Useful additional tools

- [porymap](https://github.com/huderlem/porymap) for viewing and editing maps
- [poryscript](https://github.com/huderlem/poryscript) for scripting ([VS Code extension](https://marketplace.visualstudio.com/items?itemName=karathan.poryscript))
- [Tilemap Studio](https://github.com/Rangi42/tilemap-studio) for viewing and editing tilemaps
