# Iain's fork of ZSA's fork of QMK Firmware!

This keyboard firmware is forked from [ZSA's fork](https://github.com/zsa/qmk_firmware) and designed for me to version control and maintain my specific boards. This includes my ZSA Ergodox EZ, which is the main firmware I will be updating and maintaining, a version of that firmware for ZSA's Moonlander, and the corresponding firmware for my own custom board design, the [Ergobecular](https://github.com/susseratal/ergobecular).  

The reason I'm doing this is partly because of the afforementioned Ergobecular, but also because my Erogodox firmware has ended up getting pretty different from standard over the last few months, and I'm keen to properly maintain that.  

If you're just looking for a precompiled binary of a particular keyboard's firmware, you're looking for [the bin folder](/bin), as that's where I put the compiled versions. 

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported

* [ErgoDox EZ Shine](/keyboards/ergodox_ez/shine)

## Only default keymaps available

* [ErgoDox EZ Default](/keyboards/ergodox_ez)
* [ErgoDox EZ Glow](/keyboards/ergodox_ez/glow)
* [Moonlander Mark I](/keyboards/moonlander)

## Currently Unsupported

* [Ergobecular split](https://github.com/susseratal/ergobecular)
* [Ergobecular plank](https://github.com/susseratal/ergobecular)

## Set up 

To set up the local build enviroment to create the firmware image manually, head to the [Newbs guide from QMK](https://docs.qmk.fm/#/newbs).
And instead of using just `qmk setup`, you will want to run this instead:

```sh
qmk setup zsa/qmk_firmware -b firmware21
```

## Compiling

Compiling is pretty simple. Once you've built the environment, all you've got to do is run "make keyboard:keymap"  
For example:  
```sh
make sofle:erephyx
```

If the keyboard has different variants just add that in like a path:  
```sh
make ergodox_ez/shine:erephyx
```

Last, to flash the keyboard immediately after compiling, just add the microcontroller command after the keymap.  
IMPORTANT! Please remember to check the readme of the keyboard to get the right microcontroller command, otherwise it won't work.  
```sh
make ergodox_ez/shine:erephyx:flash
```

## Layout Standard  

My current standard for laying out the firmware is that each column should be 3 spaces away from the longest line on the previous column. This should make it easier to read for you.  
I'm hoping to overhaul this when I've got the time so that it's even clearer and more readable - my Ergodox keymap especially needs a tidy up  
You are, of course, under no obligation to do the same, but if you make a pull request to merge your own layout into the master branch, I ask that you take a look at my layouts and try to match the formatting as best you can. 

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

# Update Process

1. Check out branch from ZSA's master branch:
    1. `git remote add zsa https://github.com/zsa/qmk_firmware.git`
    2. `git fetch --all`
    3. `git checkout -B branchname zsa/master`
    4. `git push -u zsa branchname`
2. Check for core changes:
    - [https://github.com/qmk/qmk_firmware/commits/master/quantum](https://github.com/qmk/qmk_firmware/commits/master/quantum)
    - [https://github.com/qmk/qmk_firmware/commits/master/tmk_core](https://github.com/qmk/qmk_firmware/commits/master/tmk_core)
    - [https://github.com/qmk/qmk_firmware/commits/master/util](https://github.com/qmk/qmk_firmware/commits/master/util)
    - [https://github.com/qmk/qmk_firmware/commits/master/drivers](https://github.com/qmk/qmk_firmware/commits/master/drivers)
    - [https://github.com/qmk/qmk_firmware/commits/master/lib](https://github.com/qmk/qmk_firmware/commits/master/lib)
    - These folders are the important ones for maintaining the repo and keeping it properly up to date. Most, but not all, changes on this list should be pulled into our repo.
4. `git merge (hash|tag)`
    - `git rm -rf docs users layouts .vscode` to remove the docs and user code that we don't want.
    - To remove all of the keyboard exept the ones we want:
      ```sh
      find ./keyboards -mindepth 1 -maxdepth 1 -type d -not -name ergodox_ez -not -name planck -not -name moonlander -not -name pytest -exec git rm -rf '{}' \;
      find ./keyboards/planck -mindepth 1 -maxdepth 1 -type d -not -name ez -not -name keymaps -exec git rm -rf '{}' \;
      ```
    - To remove all of the keymaps from folder that we don't want:
      ```sh
      find ./keyboards/ -mindepth 3 -maxdepth 3 -type d -not -name default -not -name oryx -not -name webusb -not -name glow -not -name reactive -not -name shine -not -name keymaps -exec git rm -rf '{}' \;
      ```
    - Restore necessary files/folders:
      ```sh
      git checkout HEAD -- keyboards/handwired/pytest
      git checkout HEAD -- layouts
      ```
    - Resolve merge conflicts, and commit.

4. Commit update
   * Include commit info in `[changelog.md](changelog.md)`
5. Open Pull request, and include information about the commit

## Strategy

To keep PRs small and easier to test, they should ideally be 1:1 with commits from QMK Firmware master. They should only group commits if/when it makes sense. Such as multiple commits for a specific feature (split RGB support, for instance)  
If you're clever enough to be making a pull request, you probably want a real branch of QMK, not the one I'm systematically taking apart and learning how it works :)
