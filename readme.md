# Iain's fork of QMK Firmware
This repo is actually forked from [ZSA's fork of QMK](https://github.com/zsa/qmk_firmware) because when I first started out compiling my own firmware, it was on ZSA's Ergodox EZ. I have since merged some layouts from the core QMK repo in order to add compatibility for the Boardwalk style of keyboard. I did it this way because the core QMK fork is so full of different keyboard layouts that instead of forking that repo and going through the work to remerge everything, I've chosen to just update this repo as I need.

## Supported Keyboards

* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Moonlander Mark I](/keyboards/moonlander)
* [Boardwalk](/keyboards/boardwalk)

## Building

To set up the local build enviroment to create the firmware image manually, head to the [Newbs guide from QMK](https://docs.qmk.fm/#/newbs).
And instead of using just `qmk setup`, you will want to run this instead:

```sh
qmk setup zsa/qmk_firmware -b firmware22
```

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
      find ./keyboards/planck -mindepth 1 -maxdepth 1 -type d -not -name ez -not -name base -not -name keymaps -exec git rm -rf '{}' \;
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
