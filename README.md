# Building Essentia's Python extension on Windows 

Python.org Windows binaries are compiled against an MS Visual C++ (MSVC) runtime, which version differs with different Python versions. Essentia's Python extension should be built with MSVC too because the MinGW C++ library builds won't be compatible with MSVC.

In this guide we use a VirtualBox Windows machine. The instructions are for a x64 build, but they can be modified together with the scripts accordingly.

## Preparing build environment
- Download Dev Virtual Machine: https://developer.microsoft.com/en-us/windows/downloads/virtual-machines
- Remove Visual Studio 2017 Community as we won't use it
- Install Build Tools for Visual Studio 2017: https://www.visualstudio.com/downloads/#build-tools-for-visual-studio-2017
- Make sure VC++ v140 toolset is installed: Visual Studio Build Tools 2017 preferences --> check "VC++ 2015.3 v140 toolset for desktop (x86,x64)"
- Make sure Win10 SDK is also installed
- Install Python 3 x64, add path to python.exe to %PATH% variable
- Patch ``distutils/msvc9compiler.py`` and ``distutils/msvccompiler.py`` (they are inside ``C:\Users\User\AppData\Local\Programs\Python\Python36\lib\distutils\`` folder): add a line ``import setuptools``
- Force upgrade of the setuptools package: python -m pip install -U pip setuptools
- Install pkg-config-lite (https://sourceforge.net/projects/pkgconfiglite/files/) to ``C:\workspace`` and add this path to %PATH% variable


## Building Essentia
- Download pre-built dependencies (http://essentia.upf.edu/documentation/downloads/packaging/win/) and unpack them into the ```packaging\win32_3rdparty``` folder.
- Open "x64 Native Tools Command Prompt for VS 2017"
- Configure Essentia: ``python waf configure --with-python --msvc_targets="x64"``
- Compile and install: 
```
python waf
python waf install
```

By default waf script will install: 
- library binary and headers to ``C:\Users\User\AppData\Local\Temp\include\essentia\`` and ``C:\Users\User\AppData\Local\Temp\lib\``
- Python extension to ``C:\Users\User\AppData\Local\Programs\Python\Python36\Lib\site-packages\essentia``

You can specify your own path to install using the ``--prefix`` flag (see ``python waf --help`` for help). In the case of import error in python due to missing DLLs, use Dependency Walker to find out missing dependencies.


## Prebuilt library

essentia.lib 750MB
https://drive.google.com/file/d/1qtwMW-D94za2lG65r5KcWhW-XTCPBrhl/view?usp=sharing
