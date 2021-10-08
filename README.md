# CMake DisC++ Bot Template
This is a template github repository for creating a simple DisC++ ping bot using CMake.
The master branch is a template for the master DisC++ branch. Switch to the [development branch](https://github.com/DisCPP/cmake-bot-template/tree/development) to view a template for DisC++ development branch.

## State
DisCPP has been discontinued. Due to Discord's lack of communication and out-of-touch attitude towards library developers, this library is no longer being maintained. Recommended alternative is [DPP](https://github.com/brainboxdotcc/DPP).

## Compiling
### Windows:
1. Install [vcpkg](https://github.com/microsoft/vcpkg) onto the root of your C drive.
2. Install dependencies by running command: `vcpkg install rapidjson cpr openssl --triplet x64-windows`.
3. Then run `vcpkg integrate install`.
    * Should get an output similar to: `"-DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake"`.
    * Save the directory that was given (Ex. `C:/vcpkg/scripts/buildsystems/vcpkg.cmake`).
4. Clone this repository.
    * `git clone https://github.com/DisCPP/cmake-bot-template.git`
    * `cd cmake-bot-template`
    * `git submodule update --init --recursive`
5. Open the CMake project in Visual Studio.
    * **If you're using another IDE, you need to find out how you set the `CMAKE_TOOLCHAIN_FILE` CMake flag. After you do that, make sure your running a x64 compiler and then you can skip the rest of the steps.**
    * On the welcome screen under the create a project or open project buttons, click `Continue without code`
    * Open the CMakeLists.txt by `File > Open > Cmake`
    * Browse to where you cloned the repository and double click on CMakeLists.txt file.
6. Go into CMake settings and set the CMake toolchain to the directory you saved above.
    * Click on Project > CMake Settings
    * Scroll to the CMake toolchain file text box and enter the directory you saved.
7. While inside CMake settings, make sure your compiling in x64-Debug.
    * Scroll to Toolset and set it to a x64 compiler of your choosing (ex: msvc_x64)
    * Only use MSVC on Windows!

### Linux:
1. Install [vcpkg](https://github.com/microsoft/vcpkg) at `~/`
2. Install dependencies by running command: `./vcpkg install rapidjson cpr openssl --triplet x64-linux`.
3. Then run `vcpkg integrate install`.
    * You should get an output similar to: `"-DCMAKE_TOOLCHAIN_FILE=~/vcpkg/scripts/buildsystems/vcpkg.cmake"`.
    * Save the file path that was given (Ex. `~/vcpkg/scripts/buildsystems/vcpkg.cmake`).
4. Clone this repository.
    * `git clone https://github.com/DisCPP/cmake-bot-template.git`
    * `cd cmake-bot-template`
    * `git submodule update --init --recursive`
5. In your IDE yo need to set your CMake toolchain. If you cant, you'll have to set the CMake flag `CMAKE_TOOLCHAIN_FILE` example: `-DCMAKE_TOOLCHAIN_FILE=~/vcpkg/scripts/buildsystems/vcpkg.cmake`
