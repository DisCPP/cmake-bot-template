# CMake DisC++ Bot Template
This is a template github repository for creating a simple DisC++ ping bot using CMake.
This branch is a template for the development DisC++ branch. Switch to the [master branch](https://github.com/DisCPP/cmake-bot-template/tree/master) to view a template for DisC++ master branch.

## Compiling
### Windows:
1. Clone this repository.
    * Note: You can also create a GitHub repository using this template and instead clone that; if you do, skip step `i-ii`.
    1. `git clone https://github.com/DisCPP/cmake-bot-template.git`
    2. `cd cmake-bot-template`
    3. `git checkout development`
    4. `git submodule update --init --recursive`
2. You need to install openssl from a source of your choosing. I recommend Chocolatey, but you can also use Vcpkg.
    * Chocolatey:
        1. Follow the [guide on Chocolatey's website](https://chocolatey.org/install) to install Chocolatey.
        2. Open a cmd window **in administrator** and run `choco install openssl`.
        3. Open the project in the IDE of your choice and have fun!
    * Vcpkg
        1. Install [vcpkg](https://github.com/microsoft/vcpkg) onto the root of your C drive.
        2. Install dependencies by running command: `vcpkg install openssl --triplet x64-windows`.
        3. Then run `vcpkg integrate install`.
            * Should get an output similar to: `"-DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake"`.
            * Save the directory that was given (Ex. `C:/vcpkg/scripts/buildsystems/vcpkg.cmake`).
        4. Open the CMake project in Visual Studio.
            * **If you're using another IDE, you need to find out how you set the `CMAKE_TOOLCHAIN_FILE` CMake flag. After you do that, make sure your running a x64 compiler and then you can skip the rest of the steps.**
            * On the welcome screen under the create a project or open project buttons, click `Continue without code`
            * Open the CMakeLists.txt by `File > Open > Cmake`
            * Browse to where you cloned the repository and double click on CMakeLists.txt file.
        5. Go into CMake settings and set the CMake toolchain to the directory you saved above.
            * Click on Project > CMake Settings
            * Scroll to the CMake toolchain file text box and enter the directory you saved.
        6. While inside CMake settings, make sure your compiling in x64-Debug.
            * Scroll to Toolset and set it to a x64 compiler of your choosing (ex: msvc_x64)
            * Only use MSVC on Windows!

### Linux:
1. Clone this repository.
    * Note: You can also create a GitHub repository using this template and instead clone that; if you do, skip step `i-ii`.
    1. `git clone https://github.com/DisCPP/cmake-bot-template.git`
    2. `cd cmake-bot-template`
    3. `git checkout development`
    4. `git submodule update --init --recursive`
2. You need to install openssl via a package manager.
    * Ubuntu/Debian: `sudo apt install openssl -y`
3. Open the project in the IDE of your choice and have fun!