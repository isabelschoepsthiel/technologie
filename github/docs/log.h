[00:00:00] Build started
[00:00:00] git clone -q --branch=master https://github.com/SourMesen/Mesen-S.git C:\projects\mesen-s
[00:00:04] git checkout -qf 89199f298a95345a893d814525b6668567a6d490
[00:00:06] mkdir bin
[00:00:06] mkdir "bin\Any CPU"
[00:00:06] mkdir "bin\Any CPU\Release"
[00:00:06] mkdir "bin\Any CPU\Release\Dependencies"
[00:00:06] XCOPY "UI\Dependencies\*" "bin\Any CPU\Release\Dependencies" /s /i
[00:00:06] UI\Dependencies\CheatDb.xml
[00:00:06] UI\Dependencies\Font.24.spritefont
[00:00:06] UI\Dependencies\Font.64.spritefont
[00:00:06] UI\Dependencies\LICENSE.txt
[00:00:06] UI\Dependencies\PixelFont.ttf
[00:00:06] UI\Dependencies\resources.en.xml
[00:00:06] UI\Dependencies\LuaScripts\DrawMode.lua
[00:00:06] UI\Dependencies\LuaScripts\Example.lua
[00:00:06] UI\Dependencies\LuaScripts\Grid.lua
[00:00:06] UI\Dependencies\LuaScripts\NtscSafeArea.lua
[00:00:06] UI\Dependencies\Satellaview\BSX0120-0.bin
[00:00:06] UI\Dependencies\Satellaview\BSX0121-0.bin
[00:00:06] UI\Dependencies\Satellaview\BSX0122-0.bin
[00:00:06] UI\Dependencies\Satellaview\BSX0123-0.bin
[00:00:06] UI\Dependencies\Satellaview\BSX0124-0.bin
[00:00:06] 15 File(s) copied
[00:00:06] echo %APPVEYOR_BUILD_VERSION% > "bin\Any CPU\Release\Dependencies\DevBuild.txt"
[00:00:06] cd bin
[00:00:06] msbuild ..\Mesen-S.sln /t:Build /p:Configuration=Release /p:Platform=x64
[00:00:07] Microsoft (R) Build Engine version 16.9.0+5e4b48a27 for .NET Framework
[00:00:07] Copyright (C) Microsoft Corporation. All rights reserved.
[00:00:07] 
[00:00:07] Building the projects in this solution one at a time. To enable parallel build, please add the "-m" switch.
[00:00:08] Build started 6/7/2021 6:11:20 PM.
[00:00:09] Project "C:\projects\mesen-s\Mesen-S.sln" on node 1 (Build target(s)).
[00:00:09] ValidateSolutionConfiguration:
[00:00:09]   Building solution configuration "Release|x64".
[00:00:09] ValidateProjects:
[00:00:09]   The project "Libretro" is not selected for building in solution configuration "Release|x64".
[00:00:10] Project "C:\projects\mesen-s\Mesen-S.sln" (1) is building "C:\projects\mesen-s\Core\Core.vcxproj.metaproj" (2) on node 1 (default targets).
[00:00:10] Project "C:\projects\mesen-s\Core\Core.vcxproj.metaproj" (2) is building "C:\projects\mesen-s\Utilities\Utilities.vcxproj.metaproj" (3) on node 1 (default targets).
[00:00:10] Project "C:\projects\mesen-s\Utilities\Utilities.vcxproj.metaproj" (3) is building "C:\projects\mesen-s\SevenZip\SevenZip.vcxproj" (4) on node 1 (default targets).
[00:00:10] PrepareForBuild:
[00:00:10]   Creating directory "obj\x64\Release\".
[00:00:10]   Creating directory "C:\projects\mesen-s\\bin\x64\Release\".
[00:00:10]   Creating directory "obj\x64\Release\SevenZip.tlog\".
[00:00:10] InitializeBuildStatus:
[00:00:10]   Creating "obj\x64\Release\SevenZip.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:00:10] VcpkgTripletSelection:
[00:00:10]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:00:10] ClCompile:
[00:00:10]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl /O2 /Oi /GL /D NDEBUG /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\SevenZip.pdb" /Gd /TC /FC /errorReport:queue 7zAlloc.c 7zArcIn.c 7zBuf.c 7zCrc.c 7zCrcOpt.c 7zDec.c 7zFile.c 7zMemBuffer.c 7zStream.c Bcj2.c Bra.c Bra86.c BraIA64.c CpuArch.c Delta.c Lzma2Dec.c LzmaDec.c Ppmd7.c Ppmd7Dec.c Precomp.c
[00:00:10]   7zAlloc.c
[00:00:11]   7zArcIn.c
[00:00:11]   7zBuf.c
[00:00:11]   7zCrc.c
[00:00:11]   7zCrcOpt.c
[00:00:11]   7zDec.c
[00:00:11]   7zFile.c
[00:00:12]   7zMemBuffer.c
[00:00:12]   7zStream.c
[00:00:12]   Bcj2.c
[00:00:12]   Bra.c
[00:00:12]   Bra86.c
[00:00:12]   BraIA64.c
[00:00:12]   CpuArch.c
[00:00:12]   Delta.c
[00:00:12]   Lzma2Dec.c
[00:00:12]   LzmaDec.c
[00:00:12]   Ppmd7.c
[00:00:12]   Ppmd7Dec.c
[00:00:12]   Precomp.c
[00:00:12] Lib:
[00:00:12]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\Lib.exe /OUT:"C:\projects\mesen-s\\bin\x64\Release\SevenZip.lib" /NOLOGO /MACHINE:X64 /LTCG obj\x64\Release\7zAlloc.obj
[00:00:12]   obj\x64\Release\7zArcIn.obj
[00:00:12]   obj\x64\Release\7zBuf.obj
[00:00:12]   obj\x64\Release\7zCrc.obj
[00:00:12]   obj\x64\Release\7zCrcOpt.obj
[00:00:12]   obj\x64\Release\7zDec.obj
[00:00:12]   obj\x64\Release\7zFile.obj
[00:00:12]   obj\x64\Release\7zMemBuffer.obj
[00:00:12]   obj\x64\Release\7zStream.obj
[00:00:12]   obj\x64\Release\Bcj2.obj
[00:00:12]   obj\x64\Release\Bra.obj
[00:00:12]   obj\x64\Release\Bra86.obj
[00:00:12]   obj\x64\Release\BraIA64.obj
[00:00:12]   obj\x64\Release\CpuArch.obj
[00:00:12]   obj\x64\Release\Delta.obj
[00:00:12]   obj\x64\Release\Lzma2Dec.obj
[00:00:12]   obj\x64\Release\LzmaDec.obj
[00:00:12]   obj\x64\Release\Ppmd7.obj
[00:00:12]   obj\x64\Release\Ppmd7Dec.obj
[00:00:12]   obj\x64\Release\Precomp.obj
[00:00:13]   SevenZip.vcxproj -> C:\projects\mesen-s\bin\x64\Release\SevenZip.lib
[00:00:13] AppLocalFromInstalled:
[00:00:13]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\SevenZip.lib" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\SevenZip.tlog\SevenZip.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:00:14] FinalizeBuildStatus:
[00:00:14]   Deleting file "obj\x64\Release\SevenZip.tlog\unsuccessfulbuild".
[00:00:14]   Touching "obj\x64\Release\SevenZip.tlog\SevenZip.lastbuildstate".
[00:00:14] Done Building Project "C:\projects\mesen-s\SevenZip\SevenZip.vcxproj" (default targets).
[00:00:14] Project "C:\projects\mesen-s\Utilities\Utilities.vcxproj.metaproj" (3) is building "C:\projects\mesen-s\Utilities\Utilities.vcxproj" (5) on node 1 (default targets).
[00:00:14] PrepareForBuild:
[00:00:14]   Creating directory "obj\x64\Release\".
[00:00:14]   Creating directory "obj\x64\Release\Utilities.tlog\".
[00:00:14] InitializeBuildStatus:
[00:00:14]   Creating "obj\x64\Release\Utilities.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:00:15] VcpkgTripletSelection:
[00:00:15]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:00:15] ClCompile:
[00:00:15]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl /MP /O2 /Oi /GL /D _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING /D WIN32 /D NDEBUG /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Yc"stdafx.h" /Fp"obj\x64\Release\Utilities.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Utilities.pdb" /Gd /TP /FC /errorReport:queue stdafx.cpp
[00:00:15]   stdafx.cpp
[00:00:15]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl /MP /O2 /Oi /GL /D _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING /D WIN32 /D NDEBUG /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Yu"stdafx.h" /Fp"obj\x64\Release\Utilities.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Utilities.pdb" /Gd /TP /FC /errorReport:queue ArchiveReader.cpp AviRecorder.cpp AviWriter.cpp blip_buf.cpp BpsPatcher.cpp CamstudioCodec.cpp CRC32.cpp Equalizer.cpp FolderUtilities.cpp GifRecorder.cpp HexUtilities.cpp IpsPatcher.cpp md5.cpp miniz.cpp PlatformUtilities.cpp PNGHelper.cpp AutoResetEvent.cpp HermiteResampler.cpp Serializer.cpp sha1.cpp SimpleLock.cpp snes_ntsc.cpp Socket.cpp stb_vorbis.cpp SZReader.cpp Timer.cpp UPnPPortMapper.cpp UpsPatcher.cpp UTF8Util.cpp VirtualFile.cpp ZipReader.cpp ZipWriter.cpp ZmbvCodec.cpp
[00:00:15]   ArchiveReader.cpp
[00:00:15]   AviRecorder.cpp
[00:00:16]   AviWriter.cpp
[00:00:16]   blip_buf.cpp
[00:00:16]   BpsPatcher.cpp
[00:00:16]   CamstudioCodec.cpp
[00:00:16]   CRC32.cpp
[00:00:16]   Equalizer.cpp
[00:00:16]   FolderUtilities.cpp
[00:00:16]   GifRecorder.cpp
[00:00:16]   HexUtilities.cpp
[00:00:16]   IpsPatcher.cpp
[00:00:17]   md5.cpp
[00:00:17]   miniz.cpp
[00:00:17]   PlatformUtilities.cpp
[00:00:17]   PNGHelper.cpp
[00:00:17]   AutoResetEvent.cpp
[00:00:17]   HermiteResampler.cpp
[00:00:17]   Serializer.cpp
[00:00:17]   sha1.cpp
[00:00:17]   SimpleLock.cpp
[00:00:17]   snes_ntsc.cpp
[00:00:17]   Socket.cpp
[00:00:18]   stb_vorbis.cpp
[00:00:18]   SZReader.cpp
[00:00:18]   Timer.cpp
[00:00:18]   UPnPPortMapper.cpp
[00:00:18]   UpsPatcher.cpp
[00:00:18]   UTF8Util.cpp
[00:00:18]   VirtualFile.cpp
[00:00:18]   ZipReader.cpp
[00:00:18]   ZipWriter.cpp
[00:00:19]   ZmbvCodec.cpp
[00:00:19]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl /MP /O2 /Oi /GL /D _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING /D WIN32 /D NDEBUG /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Utilities.pdb" /Gd /TP /FC /errorReport:queue HQX\hq2x.cpp HQX\hq3x.cpp HQX\hq4x.cpp HQX\init.cpp KreedSaiEagle\2xSai.cpp KreedSaiEagle\Super2xSai.cpp KreedSaiEagle\SuperEagle.cpp Scale2x\scale2x.cpp Scale2x\scale3x.cpp Scale2x\scalebit.cpp xBRZ\xbrz.cpp
[00:00:19]   hq2x.cpp
[00:00:19]   hq3x.cpp
[00:00:20]   hq4x.cpp
[00:00:20]   init.cpp
[00:00:21]   2xSai.cpp
[00:00:21]   Super2xSai.cpp
[00:00:22]   SuperEagle.cpp
[00:00:22]   scale2x.cpp
[00:00:22]   scale3x.cpp
[00:00:23]   scalebit.cpp
[00:00:23]   xbrz.cpp
[00:00:24] Lib:
[00:00:24]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\Lib.exe /OUT:"C:\projects\mesen-s\\bin\x64\Release\Utilities.lib" /NOLOGO /MACHINE:X64 /LTCG obj\x64\Release\ArchiveReader.obj
[00:00:24]   obj\x64\Release\AviRecorder.obj
[00:00:24]   obj\x64\Release\AviWriter.obj
[00:00:24]   obj\x64\Release\blip_buf.obj
[00:00:24]   obj\x64\Release\BpsPatcher.obj
[00:00:24]   obj\x64\Release\CamstudioCodec.obj
[00:00:24]   obj\x64\Release\CRC32.obj
[00:00:24]   obj\x64\Release\Equalizer.obj
[00:00:24]   obj\x64\Release\FolderUtilities.obj
[00:00:24]   obj\x64\Release\GifRecorder.obj
[00:00:24]   obj\x64\Release\HexUtilities.obj
[00:00:24]   obj\x64\Release\hq2x.obj
[00:00:24]   obj\x64\Release\hq3x.obj
[00:00:24]   obj\x64\Release\hq4x.obj
[00:00:24]   obj\x64\Release\init.obj
[00:00:24]   obj\x64\Release\IpsPatcher.obj
[00:00:24]   obj\x64\Release\2xSai.obj
[00:00:24]   obj\x64\Release\Super2xSai.obj
[00:00:24]   obj\x64\Release\SuperEagle.obj
[00:00:24]   obj\x64\Release\md5.obj
[00:00:24]   obj\x64\Release\miniz.obj
[00:00:24]   obj\x64\Release\PlatformUtilities.obj
[00:00:24]   obj\x64\Release\PNGHelper.obj
[00:00:24]   obj\x64\Release\AutoResetEvent.obj
[00:00:24]   obj\x64\Release\HermiteResampler.obj
[00:00:24]   obj\x64\Release\scale2x.obj
[00:00:24]   obj\x64\Release\scale3x.obj
[00:00:24]   obj\x64\Release\scalebit.obj
[00:00:24]   obj\x64\Release\Serializer.obj
[00:00:24]   obj\x64\Release\sha1.obj
[00:00:24]   obj\x64\Release\SimpleLock.obj
[00:00:24]   obj\x64\Release\snes_ntsc.obj
[00:00:24]   obj\x64\Release\Socket.obj
[00:00:24]   obj\x64\Release\stb_vorbis.obj
[00:00:24]   obj\x64\Release\stdafx.obj
[00:00:24]   obj\x64\Release\SZReader.obj
[00:00:24]   obj\x64\Release\Timer.obj
[00:00:24]   obj\x64\Release\UPnPPortMapper.obj
[00:00:24]   obj\x64\Release\UpsPatcher.obj
[00:00:24]   obj\x64\Release\UTF8Util.obj
[00:00:24]   obj\x64\Release\VirtualFile.obj
[00:00:24]   obj\x64\Release\xbrz.obj
[00:00:24]   obj\x64\Release\ZipReader.obj
[00:00:24]   obj\x64\Release\ZipWriter.obj
[00:00:24]   obj\x64\Release\ZmbvCodec.obj
[00:00:24]   Utilities.vcxproj -> C:\projects\mesen-s\bin\x64\Release\Utilities.lib
[00:00:24] AppLocalFromInstalled:
[00:00:24]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\Utilities.lib" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\Utilities.tlog\Utilities.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:00:25] FinalizeBuildStatus:
[00:00:25]   Deleting file "obj\x64\Release\Utilities.tlog\unsuccessfulbuild".
[00:00:25]   Touching "obj\x64\Release\Utilities.tlog\Utilities.lastbuildstate".
[00:00:25] Done Building Project "C:\projects\mesen-s\Utilities\Utilities.vcxproj" (default targets).
[00:00:25] Done Building Project "C:\projects\mesen-s\Utilities\Utilities.vcxproj.metaproj" (default targets).
[00:00:25] Project "C:\projects\mesen-s\Core\Core.vcxproj.metaproj" (2) is building "C:\projects\mesen-s\Lua\Lua.vcxproj" (6) on node 1 (default targets).
[00:00:25] PrepareForBuild:
[00:00:25]   Creating directory "obj\x64\Release\".
[00:00:25]   Creating directory "obj\x64\Release\Lua.tlog\".
[00:00:25] InitializeBuildStatus:
[00:00:25]   Creating "obj\x64\Release\Lua.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:00:25] VcpkgTripletSelection:
[00:00:25]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:00:25] ClCompile:
[00:00:25]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl /O2 /Oi /GL /D _CRT_SECURE_NO_WARNINGS /D _WINSOCK_DEPRECATED_NO_WARNINGS /D NDEBUG /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Lua.pdb" /Gd /TC /FC /errorReport:queue auxiliar.c buffer.c compat.c except.c inet.c io.c lapi.c lauxlib.c lbaselib.c lbitlib.c lcode.c lcorolib.c lctype.c ldblib.c ldebug.c ldo.c ldump.c lfunc.c lgc.c linit.c liolib.c llex.c lmathlib.c lmem.c loadlib.c lobject.c lopcodes.c loslib.c lparser.c lstate.c lstring.c lstrlib.c ltable.c ltablib.c ltm.c luasocket.c lundump.c lutf8lib.c lvm.c lzio.c mime.c options.c select.c tcp.c timeout.c udp.c usocket.c wsocket.c
[00:00:25]   auxiliar.c
[00:00:25]   buffer.c
[00:00:25]   compat.c
[00:00:25]   except.c
[00:00:25]   inet.c
[00:00:26]   io.c
[00:00:26]   lapi.c
[00:00:26]   lauxlib.c
[00:00:26]   lbaselib.c
[00:00:26]   lbitlib.c
[00:00:26]   lcode.c
[00:00:26]   lcorolib.c
[00:00:26]   lctype.c
[00:00:26]   ldblib.c
[00:00:26]   ldebug.c
[00:00:26]   ldo.c
[00:00:26]   ldump.c
[00:00:26]   lfunc.c
[00:00:26]   lgc.c
[00:00:26]   linit.c
[00:00:26]   Compiling...
[00:00:26]   liolib.c
[00:00:26]   llex.c
[00:00:26]   lmathlib.c
[00:00:26]   lmem.c
[00:00:26]   loadlib.c
[00:00:27]   lobject.c
[00:00:27]   lopcodes.c
[00:00:27]   loslib.c
[00:00:27]   lparser.c
[00:00:27]   lstate.c
[00:00:27]   lstring.c
[00:00:27]   lstrlib.c
[00:00:27]   ltable.c
[00:00:27]   ltablib.c
[00:00:27]   ltm.c
[00:00:27]   luasocket.c
[00:00:27]   lundump.c
[00:00:27]   lutf8lib.c
[00:00:27]   lvm.c
[00:00:27]   lzio.c
[00:00:27]   Compiling...
[00:00:27]   mime.c
[00:00:27]   options.c
[00:00:28]   select.c
[00:00:28]   tcp.c
[00:00:28]   timeout.c
[00:00:29]   udp.c
[00:00:29]   usocket.c
[00:00:29]   wsocket.c
[00:00:29] Lib:
[00:00:29]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\Lib.exe /OUT:"C:\projects\mesen-s\\bin\x64\Release\Lua.lib" /NOLOGO /MACHINE:X64 /LTCG obj\x64\Release\auxiliar.obj
[00:00:29]   obj\x64\Release\buffer.obj
[00:00:29]   obj\x64\Release\compat.obj
[00:00:29]   obj\x64\Release\except.obj
[00:00:29]   obj\x64\Release\inet.obj
[00:00:29]   obj\x64\Release\io.obj
[00:00:29]   obj\x64\Release\lapi.obj
[00:00:29]   obj\x64\Release\lauxlib.obj
[00:00:29]   obj\x64\Release\lbaselib.obj
[00:00:29]   obj\x64\Release\lbitlib.obj
[00:00:29]   obj\x64\Release\lcode.obj
[00:00:29]   obj\x64\Release\lcorolib.obj
[00:00:29]   obj\x64\Release\lctype.obj
[00:00:29]   obj\x64\Release\ldblib.obj
[00:00:29]   obj\x64\Release\ldebug.obj
[00:00:29]   obj\x64\Release\ldo.obj
[00:00:29]   obj\x64\Release\ldump.obj
[00:00:29]   obj\x64\Release\lfunc.obj
[00:00:29]   obj\x64\Release\lgc.obj
[00:00:29]   obj\x64\Release\linit.obj
[00:00:29]   obj\x64\Release\liolib.obj
[00:00:29]   obj\x64\Release\llex.obj
[00:00:29]   obj\x64\Release\lmathlib.obj
[00:00:29]   obj\x64\Release\lmem.obj
[00:00:29]   obj\x64\Release\loadlib.obj
[00:00:29]   obj\x64\Release\lobject.obj
[00:00:29]   obj\x64\Release\lopcodes.obj
[00:00:29]   obj\x64\Release\loslib.obj
[00:00:29]   obj\x64\Release\lparser.obj
[00:00:29]   obj\x64\Release\lstate.obj
[00:00:29]   obj\x64\Release\lstring.obj
[00:00:29]   obj\x64\Release\lstrlib.obj
[00:00:29]   obj\x64\Release\ltable.obj
[00:00:29]   obj\x64\Release\ltablib.obj
[00:00:29]   obj\x64\Release\ltm.obj
[00:00:29]   obj\x64\Release\luasocket.obj
[00:00:29]   obj\x64\Release\lundump.obj
[00:00:29]   obj\x64\Release\lutf8lib.obj
[00:00:29]   obj\x64\Release\lvm.obj
[00:00:29]   obj\x64\Release\lzio.obj
[00:00:29]   obj\x64\Release\mime.obj
[00:00:29]   obj\x64\Release\options.obj
[00:00:29]   obj\x64\Release\select.obj
[00:00:29]   obj\x64\Release\tcp.obj
[00:00:29]   obj\x64\Release\timeout.obj
[00:00:29]   obj\x64\Release\udp.obj
[00:00:29]   obj\x64\Release\usocket.obj
[00:00:29]   obj\x64\Release\wsocket.obj
[00:00:29]   Lua.vcxproj -> C:\projects\mesen-s\bin\x64\Release\Lua.lib
[00:00:29] AppLocalFromInstalled:
[00:00:29]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\Lua.lib" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\Lua.tlog\Lua.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:00:30] FinalizeBuildStatus:
[00:00:30]   Deleting file "obj\x64\Release\Lua.tlog\unsuccessfulbuild".
[00:00:30]   Touching "obj\x64\Release\Lua.tlog\Lua.lastbuildstate".
[00:00:30] Done Building Project "C:\projects\mesen-s\Lua\Lua.vcxproj" (default targets).
[00:00:30] Project "C:\projects\mesen-s\Core\Core.vcxproj.metaproj" (2) is building "C:\projects\mesen-s\Core\Core.vcxproj" (7) on node 1 (default targets).
[00:00:30] PrepareForBuild:
[00:00:30]   Creating directory "obj\x64\Release\".
[00:00:30]   Creating directory "obj\x64\Release\Core.tlog\".
[00:00:30] InitializeBuildStatus:
[00:00:30]   Creating "obj\x64\Release\Core.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:00:30] VcpkgTripletSelection:
[00:00:30]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:00:30] ClCompile:
[00:00:30]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl- /MP /Ox /Ob2 /Oi /Ot /Oy /GL /D WIN32 /D NDEBUG /D _CONSOLE /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /Gy /fp:precise /Za /Zc:wchar_t /Zc:forScope /Zc:inline /Yc"stdafx.h" /Fp"obj\x64\Release\Core.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Core.pdb" /Gd /TP /FC /errorReport:queue stdafx.cpp
[00:00:30]   stdafx.cpp
[00:00:31]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /sdl- /MP /Ox /Ob2 /Oi /Ot /Oy /GL /D WIN32 /D NDEBUG /D _CONSOLE /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /Gy /fp:precise /Za /Zc:wchar_t /Zc:forScope /Zc:inline /Yu"stdafx.h" /Fp"obj\x64\Release\Core.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Core.pdb" /Gd /TP /FC /errorReport:queue AluMulDiv.cpp Assembler.cpp BaseCartridge.cpp BaseControlDevice.cpp BaseRenderer.cpp BaseSoundManager.cpp BaseVideoFilter.cpp BatteryManager.cpp Breakpoint.cpp BreakpointManager.cpp BsxCart.cpp BsxMemoryPack.cpp BsxSatellaview.cpp BsxStream.cpp CallstackManager.cpp CheatManager.cpp CodeDataLogger.cpp Console.cpp ConsoleLock.cpp ControlManager.cpp Cpu.cpp CpuDebugger.cpp CpuDisUtils.cpp Cx4.cpp Cx4.Instructions.cpp Cx4Debugger.cpp Cx4DisUtils.cpp Debugger.cpp DebugHud.cpp DebugStats.cpp DefaultVideoFilter.cpp Disassembler.cpp DisassemblyInfo.cpp DmaController.cpp Gameboy.cpp GameboyDisUtils.cpp GbApu.cpp GbAssembler.cpp GbCpu.cpp GbDebugger.cpp GbDmaController.cpp GbEventManager.cpp GbMemoryManager.cpp GbNoiseChannel.cpp GbPpu.cpp GbSquareChannel.cpp GbTimer.cpp GbWaveChannel.cpp NecDspDebugger.cpp EmuSettings.cpp EventManager.cpp ExpressionEvaluator.cpp GameClient.cpp GameClientConnection.cpp GameConnection.cpp GameServer.cpp GameServerConnection.cpp Gsu.cpp Gsu.Instructions.cpp GsuDebugger.cpp GsuDisUtils.cpp InputHud.cpp InternalRegisters.cpp KeyManager.cpp LabelManager.cpp LuaApi.cpp LuaCallHelper.cpp LuaScriptingContext.cpp MemoryAccessCounter.cpp MemoryDumper.cpp MemoryManager.cpp MemoryMappings.cpp MesenMovie.cpp MessageManager.cpp MovieManager.cpp MovieRecorder.cpp Msu1.cpp Multitap.cpp NecDsp.cpp NecDspDisUtils.cpp NotificationManager.cpp NtscFilter.cpp Obc1.cpp PcmReader.cpp Ppu.cpp PpuTools.cpp Profiler.cpp RecordedRomTest.cpp RegisterHandlerB.cpp RewindData.cpp RewindManager.cpp Rtc4513.cpp Sa1.cpp Sa1Cpu.cpp SaveStateManager.cpp ScaleFilter.cpp ScriptHost.cpp ScriptingContext.cpp ScriptManager.cpp Sdd1.cpp Sdd1Decomp.cpp Sdd1Mmc.cpp ShortcutKeyHandler.cpp SnesController.cpp SoundMixer.cpp SoundResampler.cpp Spc.cpp Spc.Instructions.cpp Spc7110.cpp Spc7110Decomp.cpp SpcDebugger.cpp SpcDisUtils.cpp SpcHud.cpp SPC_DSP.cpp SPC_Filter.cpp SuperGameboy.cpp TraceLogger.cpp VideoDecoder.cpp VideoRenderer.cpp WaveRecorder.cpp
[00:00:31]   AluMulDiv.cpp
[00:00:31]   Assembler.cpp
[00:00:31]   BaseCartridge.cpp
[00:00:32]   BaseControlDevice.cpp
[00:00:32]   BaseRenderer.cpp
[00:00:32]   BaseSoundManager.cpp
[00:00:32]   BaseVideoFilter.cpp
[00:00:32]   BatteryManager.cpp
[00:00:32]   Breakpoint.cpp
[00:00:32]   BreakpointManager.cpp
[00:00:32]   BsxCart.cpp
[00:00:33]   BsxMemoryPack.cpp
[00:00:33]   BsxSatellaview.cpp
[00:00:33]   BsxStream.cpp
[00:00:33]   CallstackManager.cpp
[00:00:33]   CheatManager.cpp
[00:00:34]   CodeDataLogger.cpp
[00:00:34]   Console.cpp
[00:00:34]   ConsoleLock.cpp
[00:00:34]   ControlManager.cpp
[00:00:35]   Cpu.cpp
[00:00:35]   CpuDebugger.cpp
[00:00:35]   CpuDisUtils.cpp
[00:00:35]   Cx4.cpp
[00:00:36]   Cx4.Instructions.cpp
[00:00:36]   Cx4Debugger.cpp
[00:00:36]   Cx4DisUtils.cpp
[00:00:36]   Debugger.cpp
[00:00:36]   DebugHud.cpp
[00:00:37]   DebugStats.cpp
[00:00:37]   DefaultVideoFilter.cpp
[00:00:37]   Disassembler.cpp
[00:00:37]   DisassemblyInfo.cpp
[00:00:38]   DmaController.cpp
[00:00:38]   Gameboy.cpp
[00:00:38]   GameboyDisUtils.cpp
[00:00:38]   GbApu.cpp
[00:00:38]   GbAssembler.cpp
[00:00:39]   GbCpu.cpp
[00:00:39]   GbDebugger.cpp
[00:00:39]   GbDmaController.cpp
[00:00:39]   GbEventManager.cpp
[00:00:40]   GbMemoryManager.cpp
[00:00:40]   GbNoiseChannel.cpp
[00:00:40]   GbPpu.cpp
[00:00:40]   GbSquareChannel.cpp
[00:00:40]   GbTimer.cpp
[00:00:40]   GbWaveChannel.cpp
[00:00:40]   NecDspDebugger.cpp
[00:00:40]   EmuSettings.cpp
[00:00:41]   EventManager.cpp
[00:00:41]   ExpressionEvaluator.cpp
[00:00:41]   GameClient.cpp
[00:00:42]   GameClientConnection.cpp
[00:00:42]   GameConnection.cpp
[00:00:42]   GameServer.cpp
[00:00:43]   GameServerConnection.cpp
[00:00:43]   Gsu.cpp
[00:00:43]   Gsu.Instructions.cpp
[00:00:43]   GsuDebugger.cpp
[00:00:44]   GsuDisUtils.cpp
[00:00:44]   InputHud.cpp
[00:00:44]   InternalRegisters.cpp
[00:00:44]   KeyManager.cpp
[00:00:44]   LabelManager.cpp
[00:00:45]   LuaApi.cpp
[00:00:45]   LuaCallHelper.cpp
[00:00:45]   LuaScriptingContext.cpp
[00:00:45]   MemoryAccessCounter.cpp
[00:00:45]   MemoryDumper.cpp
[00:00:46]   MemoryManager.cpp
[00:00:46]   MemoryMappings.cpp
[00:00:46]   MesenMovie.cpp
[00:00:46]   MessageManager.cpp
[00:00:46]   MovieManager.cpp
[00:00:47]   MovieRecorder.cpp
[00:00:47]   Msu1.cpp
[00:00:47]   Multitap.cpp
[00:00:47]   NecDsp.cpp
[00:00:47]   NecDspDisUtils.cpp
[00:00:47]   NotificationManager.cpp
[00:00:48]   NtscFilter.cpp
[00:00:48]   Obc1.cpp
[00:00:48]   PcmReader.cpp
[00:00:48]   Ppu.cpp
[00:00:48]   PpuTools.cpp
[00:00:48]   Profiler.cpp
[00:00:49]   RecordedRomTest.cpp
[00:00:49]   RegisterHandlerB.cpp
[00:00:49]   RewindData.cpp
[00:00:49]   RewindManager.cpp
[00:00:49]   Rtc4513.cpp
[00:00:50]   Sa1.cpp
[00:00:50]   Sa1Cpu.cpp
[00:00:50]   SaveStateManager.cpp
[00:00:50]   ScaleFilter.cpp
[00:00:50]   ScriptHost.cpp
[00:00:51]   ScriptingContext.cpp
[00:00:51]   ScriptManager.cpp
[00:00:51]   Sdd1.cpp
[00:00:51]   Sdd1Decomp.cpp
[00:00:51]   Sdd1Mmc.cpp
[00:00:51]   ShortcutKeyHandler.cpp
[00:00:51]   SnesController.cpp
[00:00:52]   SoundMixer.cpp
[00:00:52]   SoundResampler.cpp
[00:00:52]   Spc.cpp
[00:00:52]   Spc.Instructions.cpp
[00:00:53]   Spc7110.cpp
[00:00:53]   Spc7110Decomp.cpp
[00:00:53]   SpcDebugger.cpp
[00:00:53]   SpcDisUtils.cpp
[00:00:53]   SpcHud.cpp
[00:00:54]   SPC_DSP.cpp
[00:00:54]   SPC_Filter.cpp
[00:00:54]   SuperGameboy.cpp
[00:00:54]   TraceLogger.cpp
[00:00:54]   VideoDecoder.cpp
[00:00:55]   VideoRenderer.cpp
[00:00:55]   WaveRecorder.cpp
[00:00:55] Lib:
[00:00:55]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\Lib.exe /OUT:"C:\projects\mesen-s\\bin\x64\Release\Core.lib" /NOLOGO /MACHINE:X64 /LTCG obj\x64\Release\AluMulDiv.obj
[00:00:55]   obj\x64\Release\Assembler.obj
[00:00:55]   obj\x64\Release\BaseCartridge.obj
[00:00:55]   obj\x64\Release\BaseControlDevice.obj
[00:00:55]   obj\x64\Release\BaseRenderer.obj
[00:00:55]   obj\x64\Release\BaseSoundManager.obj
[00:00:55]   obj\x64\Release\BaseVideoFilter.obj
[00:00:55]   obj\x64\Release\BatteryManager.obj
[00:00:55]   obj\x64\Release\Breakpoint.obj
[00:00:55]   obj\x64\Release\BreakpointManager.obj
[00:00:55]   obj\x64\Release\BsxCart.obj
[00:00:55]   obj\x64\Release\BsxMemoryPack.obj
[00:00:55]   obj\x64\Release\BsxSatellaview.obj
[00:00:55]   obj\x64\Release\BsxStream.obj
[00:00:55]   obj\x64\Release\CallstackManager.obj
[00:00:55]   obj\x64\Release\CheatManager.obj
[00:00:55]   obj\x64\Release\CodeDataLogger.obj
[00:00:55]   obj\x64\Release\Console.obj
[00:00:55]   obj\x64\Release\ConsoleLock.obj
[00:00:55]   obj\x64\Release\ControlManager.obj
[00:00:55]   obj\x64\Release\Cpu.obj
[00:00:55]   obj\x64\Release\CpuDebugger.obj
[00:00:55]   obj\x64\Release\CpuDisUtils.obj
[00:00:55]   obj\x64\Release\Cx4.obj
[00:00:55]   obj\x64\Release\Cx4.Instructions.obj
[00:00:55]   obj\x64\Release\Cx4Debugger.obj
[00:00:55]   obj\x64\Release\Cx4DisUtils.obj
[00:00:55]   obj\x64\Release\Debugger.obj
[00:00:55]   obj\x64\Release\DebugHud.obj
[00:00:55]   obj\x64\Release\DebugStats.obj
[00:00:55]   obj\x64\Release\DefaultVideoFilter.obj
[00:00:55]   obj\x64\Release\Disassembler.obj
[00:00:55]   obj\x64\Release\DisassemblyInfo.obj
[00:00:55]   obj\x64\Release\DmaController.obj
[00:00:55]   obj\x64\Release\Gameboy.obj
[00:00:55]   obj\x64\Release\GameboyDisUtils.obj
[00:00:55]   obj\x64\Release\GbApu.obj
[00:00:55]   obj\x64\Release\GbAssembler.obj
[00:00:55]   obj\x64\Release\GbCpu.obj
[00:00:55]   obj\x64\Release\GbDebugger.obj
[00:00:55]   obj\x64\Release\GbDmaController.obj
[00:00:55]   obj\x64\Release\GbEventManager.obj
[00:00:55]   obj\x64\Release\GbMemoryManager.obj
[00:00:55]   obj\x64\Release\GbNoiseChannel.obj
[00:00:55]   obj\x64\Release\GbPpu.obj
[00:00:55]   obj\x64\Release\GbSquareChannel.obj
[00:00:55]   obj\x64\Release\GbTimer.obj
[00:00:55]   obj\x64\Release\GbWaveChannel.obj
[00:00:55]   obj\x64\Release\NecDspDebugger.obj
[00:00:55]   obj\x64\Release\EmuSettings.obj
[00:00:55]   obj\x64\Release\EventManager.obj
[00:00:55]   obj\x64\Release\ExpressionEvaluator.obj
[00:00:55]   obj\x64\Release\GameClient.obj
[00:00:55]   obj\x64\Release\GameClientConnection.obj
[00:00:55]   obj\x64\Release\GameConnection.obj
[00:00:55]   obj\x64\Release\GameServer.obj
[00:00:55]   obj\x64\Release\GameServerConnection.obj
[00:00:55]   obj\x64\Release\Gsu.obj
[00:00:55]   obj\x64\Release\Gsu.Instructions.obj
[00:00:55]   obj\x64\Release\GsuDebugger.obj
[00:00:55]   obj\x64\Release\GsuDisUtils.obj
[00:00:55]   obj\x64\Release\InputHud.obj
[00:00:55]   obj\x64\Release\InternalRegisters.obj
[00:00:55]   obj\x64\Release\KeyManager.obj
[00:00:55]   obj\x64\Release\LabelManager.obj
[00:00:55]   obj\x64\Release\LuaApi.obj
[00:00:55]   obj\x64\Release\LuaCallHelper.obj
[00:00:55]   obj\x64\Release\LuaScriptingContext.obj
[00:00:55]   obj\x64\Release\MemoryAccessCounter.obj
[00:00:55]   obj\x64\Release\MemoryDumper.obj
[00:00:55]   obj\x64\Release\MemoryManager.obj
[00:00:55]   obj\x64\Release\MemoryMappings.obj
[00:00:55]   obj\x64\Release\MesenMovie.obj
[00:00:55]   obj\x64\Release\MessageManager.obj
[00:00:55]   obj\x64\Release\MovieManager.obj
[00:00:55]   obj\x64\Release\MovieRecorder.obj
[00:00:55]   obj\x64\Release\Msu1.obj
[00:00:55]   obj\x64\Release\Multitap.obj
[00:00:55]   obj\x64\Release\NecDsp.obj
[00:00:55]   obj\x64\Release\NecDspDisUtils.obj
[00:00:55]   obj\x64\Release\NotificationManager.obj
[00:00:55]   obj\x64\Release\NtscFilter.obj
[00:00:55]   obj\x64\Release\Obc1.obj
[00:00:55]   obj\x64\Release\PcmReader.obj
[00:00:55]   obj\x64\Release\Ppu.obj
[00:00:55]   obj\x64\Release\PpuTools.obj
[00:00:55]   obj\x64\Release\Profiler.obj
[00:00:55]   obj\x64\Release\RecordedRomTest.obj
[00:00:55]   obj\x64\Release\RegisterHandlerB.obj
[00:00:55]   obj\x64\Release\RewindData.obj
[00:00:55]   obj\x64\Release\RewindManager.obj
[00:00:55]   obj\x64\Release\Rtc4513.obj
[00:00:55]   obj\x64\Release\Sa1.obj
[00:00:55]   obj\x64\Release\Sa1Cpu.obj
[00:00:55]   obj\x64\Release\SaveStateManager.obj
[00:00:55]   obj\x64\Release\ScaleFilter.obj
[00:00:55]   obj\x64\Release\ScriptHost.obj
[00:00:55]   obj\x64\Release\ScriptingContext.obj
[00:00:55]   obj\x64\Release\ScriptManager.obj
[00:00:55]   obj\x64\Release\Sdd1.obj
[00:00:55]   obj\x64\Release\Sdd1Decomp.obj
[00:00:55]   obj\x64\Release\Sdd1Mmc.obj
[00:00:55]   obj\x64\Release\ShortcutKeyHandler.obj
[00:00:55]   obj\x64\Release\SnesController.obj
[00:00:55]   obj\x64\Release\SoundMixer.obj
[00:00:55]   obj\x64\Release\SoundResampler.obj
[00:00:55]   obj\x64\Release\Spc.obj
[00:00:55]   obj\x64\Release\Spc.Instructions.obj
[00:00:55]   obj\x64\Release\Spc7110.obj
[00:00:55]   obj\x64\Release\Spc7110Decomp.obj
[00:00:55]   obj\x64\Release\SpcDebugger.obj
[00:00:55]   obj\x64\Release\SpcDisUtils.obj
[00:00:55]   obj\x64\Release\SpcHud.obj
[00:00:55]   obj\x64\Release\SPC_DSP.obj
[00:00:55]   obj\x64\Release\SPC_Filter.obj
[00:00:55]   obj\x64\Release\stdafx.obj
[00:00:55]   obj\x64\Release\SuperGameboy.obj
[00:00:55]   obj\x64\Release\TraceLogger.obj
[00:00:55]   obj\x64\Release\VideoDecoder.obj
[00:00:55]   obj\x64\Release\VideoRenderer.obj
[00:00:55]   obj\x64\Release\WaveRecorder.obj
[00:00:56]   Core.vcxproj -> C:\projects\mesen-s\bin\x64\Release\Core.lib
[00:00:56] AppLocalFromInstalled:
[00:00:56]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\Core.lib" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\Core.tlog\Core.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:00:57] FinalizeBuildStatus:
[00:00:57]   Deleting file "obj\x64\Release\Core.tlog\unsuccessfulbuild".
[00:00:57]   Touching "obj\x64\Release\Core.tlog\Core.lastbuildstate".
[00:00:57] Done Building Project "C:\projects\mesen-s\Core\Core.vcxproj" (default targets).
[00:00:57] Done Building Project "C:\projects\mesen-s\Core\Core.vcxproj.metaproj" (default targets).
[00:00:57] Project "C:\projects\mesen-s\Mesen-S.sln" (1) is building "C:\projects\mesen-s\UI\UI.csproj.metaproj" (8) on node 1 (default targets).
[00:00:57] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (8) is building "C:\projects\mesen-s\UpdateHelper\UpdateHelper.csproj" (9) on node 1 (default targets).
[00:00:57] PrepareForBuild:
[00:00:57]   Creating directory "obj\x64\Release\".
[00:00:57] GenerateBindingRedirects:
[00:00:57]   No suggested binding redirects from ResolveAssemblyReferences.
[00:00:57] CoreCompile:
[00:00:57]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:x64 /errorreport:prompt /define:TRACE /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Net.Http.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\x64\Release\MesenUpdater.exe /ruleset:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Team Tools\Static Analysis Tools\\Rule Sets\MinimumRecommendedRules.ruleset" /subsystemversion:6.00 /target:winexe /utf8output /win32icon:Icon.ico /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Program.cs Properties\AssemblyInfo.cs "obj\x64\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:00:57]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:00:58] CopyFilesToOutputDirectory:
[00:00:58]   Copying file from "C:\projects\mesen-s\UpdateHelper\obj\x64\Release\MesenUpdater.exe" to "C:\projects\mesen-s\bin\x64\Release\MesenUpdater.exe".
[00:00:58]   UpdateHelper -> C:\projects\mesen-s\bin\x64\Release\MesenUpdater.exe
[00:00:58]   Copying file from "C:\projects\mesen-s\UpdateHelper\obj\x64\Release\MesenUpdater.pdb" to "C:\projects\mesen-s\bin\x64\Release\MesenUpdater.pdb".
[00:00:58] Done Building Project "C:\projects\mesen-s\UpdateHelper\UpdateHelper.csproj" (default targets).
[00:00:58] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (8) is building "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (10) on node 1 (default targets).
[00:00:58] Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (10) is building "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj.metaproj" (11) on node 1 (default targets).
[00:00:58] Project "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj.metaproj" (11) is building "C:\projects\mesen-s\Windows\Windows.vcxproj.metaproj" (12) on node 1 (default targets).
[00:00:58] Project "C:\projects\mesen-s\Windows\Windows.vcxproj.metaproj" (12) is building "C:\projects\mesen-s\Windows\Windows.vcxproj" (13) on node 1 (default targets).
[00:00:58] PrepareForBuild:
[00:00:58]   Creating directory "obj\x64\Release\".
[00:00:58]   Creating directory "obj\x64\Release\Windows.tlog\".
[00:00:58] InitializeBuildStatus:
[00:00:58]   Creating "obj\x64\Release\Windows.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:00:58] VcpkgTripletSelection:
[00:00:58]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:00:58] ClCompile:
[00:00:58]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /MP /O2 /Oi /GL /D WIN32 /D NDEBUG /D _LIB /D _MBCS /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Yc"stdafx.h" /Fp"obj\x64\Release\Windows.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Windows.pdb" /Gd /TP /FC /errorReport:queue stdafx.cpp
[00:00:58]   stdafx.cpp
[00:01:00]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /MP /O2 /Oi /GL /D WIN32 /D NDEBUG /D _LIB /D _MBCS /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Yu"stdafx.h" /Fp"obj\x64\Release\Windows.pch" /Fo"obj\x64\Release\\" /Fd"C:\projects\mesen-s\\bin\x64\Release\Windows.pdb" /Gd /TP /FC /errorReport:queue DirectInputManager.cpp XInputManager.cpp WindowsKeyManager.cpp Renderer.cpp SoundManager.cpp
[00:01:00]   DirectInputManager.cpp
[00:01:00]   XInputManager.cpp
[00:01:01]   WindowsKeyManager.cpp
[00:01:01]   Renderer.cpp
[00:01:01]   C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\um\dinput.h: DIRECTINPUT_VERSION undefined. Defaulting to version 0x0800
[00:01:02]   SoundManager.cpp
[00:01:03] Lib:
[00:01:03]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\Lib.exe /OUT:"C:\projects\mesen-s\\bin\x64\Release\Windows.lib" /NOLOGO /MACHINE:X64 /LTCG obj\x64\Release\DirectInputManager.obj
[00:01:03]   obj\x64\Release\XInputManager.obj
[00:01:03]   obj\x64\Release\WindowsKeyManager.obj
[00:01:03]   obj\x64\Release\Renderer.obj
[00:01:03]   obj\x64\Release\SoundManager.obj
[00:01:03]   obj\x64\Release\stdafx.obj
[00:01:03]   Windows.vcxproj -> C:\projects\mesen-s\bin\x64\Release\Windows.lib
[00:01:03] AppLocalFromInstalled:
[00:01:03]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\Windows.lib" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\Windows.tlog\Windows.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:01:03] FinalizeBuildStatus:
[00:01:03]   Deleting file "obj\x64\Release\Windows.tlog\unsuccessfulbuild".
[00:01:03]   Touching "obj\x64\Release\Windows.tlog\Windows.lastbuildstate".
[00:01:03] Done Building Project "C:\projects\mesen-s\Windows\Windows.vcxproj" (default targets).
[00:01:03] Done Building Project "C:\projects\mesen-s\Windows\Windows.vcxproj.metaproj" (default targets).
[00:01:04] Project "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj.metaproj" (11) is building "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj" (14) on node 1 (default targets).
[00:01:04] PrepareForBuild:
[00:01:04]   Creating directory "obj\x64\Release\".
[00:01:04]   Creating directory "obj\x64\Release\InteropDLL.tlog\".
[00:01:04] InitializeBuildStatus:
[00:01:04]   Creating "obj\x64\Release\InteropDLL.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:01:04] VcpkgTripletSelection:
[00:01:04]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:01:04] ClCompile:
[00:01:04]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /MP /O2 /Oi /GL /D WIN32 /D NDEBUG /D _WINDOWS /D _USRDLL /D INTEROPDLL_EXPORTS /D _WINDLL /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Yc"stdafx.h" /Fp"obj\x64\Release\MesenSCore.pch" /Fo"obj\x64\Release\\" /Fd"obj\x64\Release\vc142.pdb" /Gd /TP /FC /errorReport:queue stdafx.cpp
[00:01:04]   stdafx.cpp
[00:01:04]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /MP /O2 /Oi /GL /D WIN32 /D NDEBUG /D _WINDOWS /D _USRDLL /D INTEROPDLL_EXPORTS /D _WINDLL /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Yu"stdafx.h" /Fp"obj\x64\Release\MesenSCore.pch" /Fo"obj\x64\Release\\" /Fd"obj\x64\Release\vc142.pdb" /Gd /TP /FC /errorReport:queue ConfigApiWrapper.cpp EmuApiWrapper.cpp DebugApiWrapper.cpp InputApiWrapper.cpp NetplayApiWrapper.cpp RecordApiWrapper.cpp TestApiWrapper.cpp
[00:01:04]   ConfigApiWrapper.cpp
[00:01:04]   EmuApiWrapper.cpp
[00:01:05]   DebugApiWrapper.cpp
[00:01:06]   C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\um\dinput.h: DIRECTINPUT_VERSION undefined. Defaulting to version 0x0800
[00:01:06]   InputApiWrapper.cpp
[00:01:07]   NetplayApiWrapper.cpp
[00:01:07]   RecordApiWrapper.cpp
[00:01:08]   TestApiWrapper.cpp
[00:01:09] Link:
[00:01:09]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\link.exe /ERRORREPORT:QUEUE /OUT:"C:\projects\mesen-s\\bin\x64\Release\MesenSCore.dll" /INCREMENTAL:NO /NOLOGO /LIBPATH:"C:\projects\mesen-s\\bin\x64\Release\\" /LIBPATH:"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib" /LIBPATH:"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib\manual-link" dinput8.lib Xinput9_1_0.lib d3d11.lib d3dcompiler.lib dxguid.lib winmm.lib comctl32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib\*.lib" /MANIFEST /MANIFESTUAC:"level='asInvoker' uiAccess='false'" /manifest:embed /DEBUG /PDB:"C:\projects\mesen-s\\bin\x64\Release\MesenSCore.pdb" /SUBSYSTEM:WINDOWS /OPT:REF /OPT:ICF /LTCG:incremental /LTCGOUT:"obj\x64\Release\MesenSCore.iobj" /TLBID:1 /DYNAMICBASE /NXCOMPAT /IMPLIB:"C:\projects\mesen-s\\bin\x64\Release\MesenSCore.lib" /MACHINE:X64 /ignore:4099 /DLL obj\x64\Release\ConfigApiWrapper.obj
[00:01:09]   obj\x64\Release\EmuApiWrapper.obj
[00:01:09]   obj\x64\Release\DebugApiWrapper.obj
[00:01:09]   obj\x64\Release\InputApiWrapper.obj
[00:01:09]   obj\x64\Release\NetplayApiWrapper.obj
[00:01:09]   obj\x64\Release\RecordApiWrapper.obj
[00:01:09]   obj\x64\Release\stdafx.obj
[00:01:09]   obj\x64\Release\TestApiWrapper.obj
[00:01:10]      Creating library C:\projects\mesen-s\\bin\x64\Release\MesenSCore.lib and object C:\projects\mesen-s\\bin\x64\Release\MesenSCore.exp
[00:01:10]   Generating code
[00:01:10]   Previous IPDB not found, fall back to full compilation.
[00:02:16]   All 19019 functions were compiled because no usable IPDB/IOBJ from previous compilation was found.
[00:02:16]   Finished generating code
[00:02:19]   InteropDLL.vcxproj -> C:\projects\mesen-s\bin\x64\Release\MesenSCore.dll
[00:02:19] AppLocalFromInstalled:
[00:02:19]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\MesenSCore.dll" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\InteropDLL.tlog\InteropDLL.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:02:21] FinalizeBuildStatus:
[00:02:21]   Deleting file "obj\x64\Release\InteropDLL.tlog\unsuccessfulbuild".
[00:02:21]   Touching "obj\x64\Release\InteropDLL.tlog\InteropDLL.lastbuildstate".
[00:02:21] Done Building Project "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj" (default targets).
[00:02:21] Done Building Project "C:\projects\mesen-s\InteropDLL\InteropDLL.vcxproj.metaproj" (default targets).
[00:02:21] Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (10) is building "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj" (15) on node 1 (default targets).
[00:02:21] PrepareForBuild:
[00:02:21]   Creating directory "obj\x64\Release\".
[00:02:21] CoreCompile:
[00:02:21]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:x64 /errorreport:prompt /define:TRACE /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\x64\Release\DependencyPacker.exe /ruleset:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Team Tools\Static Analysis Tools\\Rule Sets\MinimumRecommendedRules.ruleset" /subsystemversion:6.00 /target:exe /utf8output /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Program.cs Properties\AssemblyInfo.cs "obj\x64\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:02:21]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:02:21] CopyFilesToOutputDirectory:
[00:02:21]   Copying file from "C:\projects\mesen-s\DependencyPacker\obj\x64\Release\DependencyPacker.exe" to "C:\projects\mesen-s\bin\x64\Release\DependencyPacker.exe".
[00:02:21]   DependencyPacker -> C:\projects\mesen-s\bin\x64\Release\DependencyPacker.exe
[00:02:21]   Copying file from "C:\projects\mesen-s\DependencyPacker\obj\x64\Release\DependencyPacker.pdb" to "C:\projects\mesen-s\bin\x64\Release\DependencyPacker.pdb".
[00:02:21] Done Building Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj" (default targets).
[00:02:21] Done Building Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (default targets).
[00:02:21] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (8) is building "C:\projects\mesen-s\UI\UI.csproj" (16) on node 1 (default targets).
[00:02:21] PrepareForBuild:
[00:02:21]   Creating directory "obj\x64\Release\".
[00:02:21] PreBuildEvent:
[00:02:21]   mkdir "Dependencies"
[00:02:21]   
[00:02:21]   if "PGO Optimize" == "Release" (
[00:02:21]   copy "C:\projects\mesen-s\bin\x64\PGO Profile\MesenSCore.dll" "Dependencies\MesenSCore.x64.dll"
[00:02:21]   )
[00:02:21]   if NOT "PGO Optimize" == "Release" (
[00:02:21]   copy "C:\projects\mesen-s\bin\x64\Release\MesenSCore.dll" "Dependencies\MesenSCore.x64.dll"
[00:02:21]   )
[00:02:21]   copy "MesenUpdater.exe" "Dependencies\MesenUpdater.exe"
[00:02:21]   call DependencyPacker.exe
[00:02:21]   
[00:02:21]           1 file(s) copied.
[00:02:21]           1 file(s) copied.
[00:02:22] CoreResGen:
[00:02:22]   "C:\Program Files (x86)\Microsoft SDKs\Windows\v10.0A\bin\NETFX 4.8 Tools\resgen.exe" /useSourcePath /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Drawing.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /compile Controls\ctrlPathSelection.resx,obj\x64\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources Controls\ctrlRecentGame.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGame.resources Controls\ctrlRecentGames.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGames.resources Controls\MesenNumericUpDown.resx,obj\x64\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources Controls\ctrlHorizontalTrackbar.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources Controls\ctrlLoadingRom.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources Controls\ctrlRiskyOption.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources Controls\ctrlTrackbar.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlTrackbar.resources Controls\ctrlRenderer.resx,obj\x64\Release\Mesen.GUI.Controls.ctrlRenderer.resources Debugger\Breakpoints\ctrlBreakpoints.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources Debugger\Breakpoints\frmBreakpoint.resx,obj\x64\Release\Mesen.GUI.Debugger.frmBreakpoint.resources Debugger\Controls\ctrlCallstack.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources Debugger\Controls\ctrlCx4Status.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources Debugger\Controls\ctrlNecDspStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources Debugger\Controls\ctrlGameboyStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources Debugger\frmDebugLog.resx,obj\x64\Release\Mesen.GUI.Forms.frmDebugLog.resources Debugger\MemoryTools\ctrlMemoryAccessCounters.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources Debugger\Controls\ctrlPpuStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources Debugger\Controls\ctrlGsuStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources Debugger\Controls\ctrlSpcStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources Debugger\Controls\ctrlCpuStatus.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources Debugger\Controls\ctrlDbgShortcuts.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources Debugger\Controls\ctrlDisassemblyView.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources Debugger\EventViewer\ctrlEventViewerFilters.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources Debugger\EventViewer\ctrlEventViewerListView.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources Debugger\frmAssembler.resx,obj\x64\Release\Mesen.GUI.Debugger.frmAssembler.resources Debugger\frmBreakIn.resx,obj\x64\Release\Mesen.GUI.Debugger.frmBreakIn.resources Debugger\frmBreakOn.resx,obj\x64\Release\Mesen.GUI.Debugger.frmBreakOn.resources Debugger\Integration\frmIntegrationSettings.resx,obj\x64\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources Debugger\Labels\ctrlLabelList.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources Debugger\Labels\frmEditLabel.resx,obj\x64\Release\Mesen.GUI.Debugger.frmEditLabel.resources Debugger\MemoryTools\ctrlHexViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources Debugger\Controls\ctrlWatch.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlWatch.resources Debugger\EventViewer\ctrlEventViewerPpuView.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources Debugger\EventViewer\frmEventViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmEventViewer.resources Debugger\frmDbgPreferences.resx,obj\x64\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources Debugger\frmDbgShortcutGetKey.resx,obj\x64\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources Debugger\Controls\ctrlScrollableTextbox.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources Debugger\frmDebugger.resx,obj\x64\Release\Mesen.GUI.Debugger.frmDebugger.resources Debugger\MemoryTools\frmFadeSpeed.resx,obj\x64\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources Debugger\frmGoToLine.resx,obj\x64\Release\Mesen.GUI.Debugger.frmGoToLine.resources Debugger\MemoryTools\frmMemoryTools.resx,obj\x64\Release\Mesen.GUI.Debugger.frmMemoryTools.resources Debugger\MemoryTools\frmMemoryViewerColors.resx,obj\x64\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources Debugger\PpuViewer\ctrlImagePanel.resx,obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources Debugger\PpuViewer\ctrlPropertyList.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources Debugger\PpuViewer\ctrlScanlineCycleSelect.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources Debugger\PpuViewer\ctrlSpriteList.resx,obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources Debugger\PpuViewer\frmPaletteViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources Debugger\PpuViewer\frmSpriteViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources Debugger\PpuViewer\frmRegisterViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources Debugger\PpuViewer\frmTileViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmTileViewer.resources Debugger\PpuViewer\frmTilemapViewer.resx,obj\x64\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources Debugger\frmTraceLogger.resx,obj\x64\Release\Mesen.GUI.Debugger.frmTraceLogger.resources Debugger\HexBox\HexBox.resx,obj\x64\Release\Be.Windows.Forms.HexBox.resources Debugger\Profiler\ctrlProfiler.resx,obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources Debugger\Profiler\frmProfiler.resx,obj\x64\Release\Mesen.GUI.Debugger.frmProfiler.resources Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.resx,obj\x64\Release\FastColoredTextBoxNS.FastColoredTextBox.resources Debugger\Scripts\FastColoredTextBox\FindForm.resx,obj\x64\Release\FastColoredTextBoxNS.FindForm.resources Debugger\Scripts\FastColoredTextBox\GoToForm.resx,obj\x64\Release\FastColoredTextBoxNS.GoToForm.resources Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.resx,obj\x64\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources Debugger\Scripts\FastColoredTextBox\ReplaceForm.resx,obj\x64\Release\FastColoredTextBoxNS.ReplaceForm.resources Debugger\Scripts\frmScript.resx,obj\x64\Release\Mesen.GUI.Debugger.frmScript.resources Debugger\Tooltips\ctrlTooltip.resx,obj\x64\Release\Mesen.GUI.Debugger.ctrlTooltip.resources Forms\BaseConfigForm.resx,obj\x64\Release\Mesen.GUI.Forms.BaseConfigForm.resources Forms\BaseForm.resx,obj\x64\Release\Mesen.GUI.Forms.BaseForm.resources Forms\BaseInputForm.resx,obj\x64\Release\Mesen.GUI.Forms.BaseInputForm.resources Forms\Config\Controllers\BaseInputConfigForm.resx,obj\x64\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources Forms\Config\ctrlEmulatorShortcuts.resx,obj\x64\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources Forms\Config\Controllers\ctrlKeyBindingHint.resx,obj\x64\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources Forms\Config\Controllers\ctrlStandardController.resx,obj\x64\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources Forms\Config\frmAudioConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources Forms\Config\Controllers\frmControllerConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources Forms\Config\frmCopyFiles.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources Forms\Config\frmGameboyConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources Forms\Config\frmInputConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources Forms\Config\frmEmulationConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources Forms\Config\frmGetKey.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmGetKey.resources Forms\Config\frmPreferences.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmPreferences.resources Forms\Config\frmVideoConfig.resx,obj\x64\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources Forms\frmAbout.resx,obj\x64\Release\Mesen.GUI.Forms.frmAbout.resources Forms\frmConfigWizard.resx,obj\x64\Release\Mesen.GUI.Forms.frmConfigWizard.resources Forms\Config\frmRecordMovie.resx,obj\x64\Release\Mesen.GUI.Forms.frmRecordMovie.resources Forms\NetPlay\frmClientConfig.resx,obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources Forms\NetPlay\frmPlayerProfile.resx,obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources Forms\NetPlay\frmServerConfig.resx,obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources Forms\Tools\frmCheat.resx,obj\x64\Release\Mesen.GUI.Forms.frmCheat.resources Forms\Tools\frmCheatDbList.resx,obj\x64\Release\Mesen.GUI.Forms.frmCheatDbList.resources Forms\Tools\frmCheatList.resx,obj\x64\Release\Mesen.GUI.Forms.frmCheatList.resources Forms\Tools\frmLogWindow.resx,obj\x64\Release\Mesen.GUI.Forms.frmLogWindow.resources Forms\frmMain.resx,obj\x64\Release\Mesen.GUI.Forms.frmMain.resources Forms\frmSelectRom.resx,obj\x64\Release\Mesen.GUI.Forms.frmSelectRom.resources Forms\Tools\frmRecordAvi.resx,obj\x64\Release\Mesen.GUI.Forms.frmRecordAvi.resources Updates\frmDownloadProgress.resx,obj\x64\Release\Mesen.GUI.Updates.frmDownloadProgress.resources Updates\frmUpdatePrompt.resx,obj\x64\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources Properties\Resources.resx,obj\x64\Release\Mesen.GUI.Properties.Resources.resources
[00:02:22]   Processing resource file "Controls\ctrlPathSelection.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources".
[00:02:22]   Processing resource file "Controls\ctrlRecentGame.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGame.resources".
[00:02:22]   Processing resource file "Controls\ctrlRecentGames.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGames.resources".
[00:02:22]   Processing resource file "Controls\MesenNumericUpDown.resx" into "obj\x64\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources".
[00:02:22]   Processing resource file "Controls\ctrlHorizontalTrackbar.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources".
[00:02:22]   Processing resource file "Controls\ctrlLoadingRom.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources".
[00:02:22]   Processing resource file "Controls\ctrlRiskyOption.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources".
[00:02:22]   Processing resource file "Controls\ctrlTrackbar.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlTrackbar.resources".
[00:02:22]   Processing resource file "Controls\ctrlRenderer.resx" into "obj\x64\Release\Mesen.GUI.Controls.ctrlRenderer.resources".
[00:02:22]   Processing resource file "Debugger\Breakpoints\ctrlBreakpoints.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources".
[00:02:22]   Processing resource file "Debugger\Breakpoints\frmBreakpoint.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmBreakpoint.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlCallstack.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlCx4Status.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlNecDspStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlGameboyStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources".
[00:02:22]   Processing resource file "Debugger\frmDebugLog.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmDebugLog.resources".
[00:02:22]   Processing resource file "Debugger\MemoryTools\ctrlMemoryAccessCounters.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlPpuStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlGsuStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlSpcStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlCpuStatus.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlDbgShortcuts.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlDisassemblyView.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources".
[00:02:22]   Processing resource file "Debugger\EventViewer\ctrlEventViewerFilters.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources".
[00:02:22]   Processing resource file "Debugger\EventViewer\ctrlEventViewerListView.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources".
[00:02:22]   Processing resource file "Debugger\frmAssembler.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmAssembler.resources".
[00:02:22]   Processing resource file "Debugger\frmBreakIn.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmBreakIn.resources".
[00:02:22]   Processing resource file "Debugger\frmBreakOn.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmBreakOn.resources".
[00:02:22]   Processing resource file "Debugger\Integration\frmIntegrationSettings.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources".
[00:02:22]   Processing resource file "Debugger\Labels\ctrlLabelList.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources".
[00:02:22]   Processing resource file "Debugger\Labels\frmEditLabel.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmEditLabel.resources".
[00:02:22]   Processing resource file "Debugger\MemoryTools\ctrlHexViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlWatch.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlWatch.resources".
[00:02:22]   Processing resource file "Debugger\EventViewer\ctrlEventViewerPpuView.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources".
[00:02:22]   Processing resource file "Debugger\EventViewer\frmEventViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmEventViewer.resources".
[00:02:22]   Processing resource file "Debugger\frmDbgPreferences.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources".
[00:02:22]   Processing resource file "Debugger\frmDbgShortcutGetKey.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources".
[00:02:22]   Processing resource file "Debugger\Controls\ctrlScrollableTextbox.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources".
[00:02:22]   Processing resource file "Debugger\frmDebugger.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmDebugger.resources".
[00:02:22]   Processing resource file "Debugger\MemoryTools\frmFadeSpeed.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources".
[00:02:22]   Processing resource file "Debugger\frmGoToLine.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmGoToLine.resources".
[00:02:22]   Processing resource file "Debugger\MemoryTools\frmMemoryTools.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmMemoryTools.resources".
[00:02:22]   Processing resource file "Debugger\MemoryTools\frmMemoryViewerColors.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\ctrlImagePanel.resx" into "obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\ctrlPropertyList.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\ctrlScanlineCycleSelect.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\ctrlSpriteList.resx" into "obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\frmPaletteViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\frmSpriteViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\frmRegisterViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\frmTileViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmTileViewer.resources".
[00:02:22]   Processing resource file "Debugger\PpuViewer\frmTilemapViewer.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources".
[00:02:22]   Processing resource file "Debugger\frmTraceLogger.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmTraceLogger.resources".
[00:02:22]   Processing resource file "Debugger\HexBox\HexBox.resx" into "obj\x64\Release\Be.Windows.Forms.HexBox.resources".
[00:02:22]   Processing resource file "Debugger\Profiler\ctrlProfiler.resx" into "obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources".
[00:02:22]   Processing resource file "Debugger\Profiler\frmProfiler.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmProfiler.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.resx" into "obj\x64\Release\FastColoredTextBoxNS.FastColoredTextBox.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\FastColoredTextBox\FindForm.resx" into "obj\x64\Release\FastColoredTextBoxNS.FindForm.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\FastColoredTextBox\GoToForm.resx" into "obj\x64\Release\FastColoredTextBoxNS.GoToForm.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.resx" into "obj\x64\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\FastColoredTextBox\ReplaceForm.resx" into "obj\x64\Release\FastColoredTextBoxNS.ReplaceForm.resources".
[00:02:22]   Processing resource file "Debugger\Scripts\frmScript.resx" into "obj\x64\Release\Mesen.GUI.Debugger.frmScript.resources".
[00:02:22]   Processing resource file "Debugger\Tooltips\ctrlTooltip.resx" into "obj\x64\Release\Mesen.GUI.Debugger.ctrlTooltip.resources".
[00:02:22]   Processing resource file "Forms\BaseConfigForm.resx" into "obj\x64\Release\Mesen.GUI.Forms.BaseConfigForm.resources".
[00:02:22]   Processing resource file "Forms\BaseForm.resx" into "obj\x64\Release\Mesen.GUI.Forms.BaseForm.resources".
[00:02:22]   Processing resource file "Forms\BaseInputForm.resx" into "obj\x64\Release\Mesen.GUI.Forms.BaseInputForm.resources".
[00:02:22]   Processing resource file "Forms\Config\Controllers\BaseInputConfigForm.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources".
[00:02:22]   Processing resource file "Forms\Config\ctrlEmulatorShortcuts.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources".
[00:02:22]   Processing resource file "Forms\Config\Controllers\ctrlKeyBindingHint.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources".
[00:02:22]   Processing resource file "Forms\Config\Controllers\ctrlStandardController.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources".
[00:02:22]   Processing resource file "Forms\Config\frmAudioConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources".
[00:02:22]   Processing resource file "Forms\Config\Controllers\frmControllerConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources".
[00:02:22]   Processing resource file "Forms\Config\frmCopyFiles.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources".
[00:02:22]   Processing resource file "Forms\Config\frmGameboyConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources".
[00:02:22]   Processing resource file "Forms\Config\frmInputConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources".
[00:02:22]   Processing resource file "Forms\Config\frmEmulationConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources".
[00:02:22]   Processing resource file "Forms\Config\frmGetKey.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmGetKey.resources".
[00:02:22]   Processing resource file "Forms\Config\frmPreferences.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmPreferences.resources".
[00:02:22]   Processing resource file "Forms\Config\frmVideoConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources".
[00:02:22]   Processing resource file "Forms\frmAbout.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmAbout.resources".
[00:02:22]   Processing resource file "Forms\frmConfigWizard.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmConfigWizard.resources".
[00:02:22]   Processing resource file "Forms\Config\frmRecordMovie.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmRecordMovie.resources".
[00:02:22]   Processing resource file "Forms\NetPlay\frmClientConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources".
[00:02:22]   Processing resource file "Forms\NetPlay\frmPlayerProfile.resx" into "obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources".
[00:02:22]   Processing resource file "Forms\NetPlay\frmServerConfig.resx" into "obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources".
[00:02:22]   Processing resource file "Forms\Tools\frmCheat.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmCheat.resources".
[00:02:22]   Processing resource file "Forms\Tools\frmCheatDbList.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmCheatDbList.resources".
[00:02:22]   Processing resource file "Forms\Tools\frmCheatList.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmCheatList.resources".
[00:02:22]   Processing resource file "Forms\Tools\frmLogWindow.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmLogWindow.resources".
[00:02:22]   Processing resource file "Forms\frmMain.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmMain.resources".
[00:02:22]   Processing resource file "Forms\frmSelectRom.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmSelectRom.resources".
[00:02:22]   Processing resource file "Forms\Tools\frmRecordAvi.resx" into "obj\x64\Release\Mesen.GUI.Forms.frmRecordAvi.resources".
[00:02:22]   Processing resource file "Updates\frmDownloadProgress.resx" into "obj\x64\Release\Mesen.GUI.Updates.frmDownloadProgress.resources".
[00:02:22]   Processing resource file "Updates\frmUpdatePrompt.resx" into "obj\x64\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources".
[00:02:22]   Processing resource file "Properties\Resources.resx" into "obj\x64\Release\Mesen.GUI.Properties.Resources.resources".
[00:02:22] CoreCompile:
[00:02:22]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /unsafe- /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:AnyCPU /errorreport:prompt /define:TRACE /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Drawing.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\x64\Release\Mesen-S.exe /ruleset:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Team Tools\Static Analysis Tools\\Rule Sets\MinimumRecommendedRules.ruleset" /subsystemversion:6.00 /resource:obj\x64\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGame.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlRecentGames.resources /resource:obj\x64\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlTrackbar.resources /resource:obj\x64\Release\Mesen.GUI.Controls.ctrlRenderer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmBreakpoint.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmDebugLog.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmAssembler.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmBreakIn.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmBreakOn.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmEditLabel.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlWatch.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmEventViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmDebugger.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmGoToLine.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmMemoryTools.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmTileViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmTraceLogger.resources /resource:obj\x64\Release\Be.Windows.Forms.HexBox.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmProfiler.resources /resource:obj\x64\Release\FastColoredTextBoxNS.FastColoredTextBox.resources /resource:obj\x64\Release\FastColoredTextBoxNS.FindForm.resources /resource:obj\x64\Release\FastColoredTextBoxNS.GoToForm.resources /resource:obj\x64\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources /resource:obj\x64\Release\FastColoredTextBoxNS.ReplaceForm.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.frmScript.resources /resource:obj\x64\Release\Mesen.GUI.Debugger.ctrlTooltip.resources /resource:obj\x64\Release\Mesen.GUI.Forms.BaseConfigForm.resources /resource:obj\x64\Release\Mesen.GUI.Forms.BaseForm.resources /resource:obj\x64\Release\Mesen.GUI.Forms.BaseInputForm.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmGetKey.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmPreferences.resources /resource:obj\x64\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmAbout.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmConfigWizard.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmRecordMovie.resources /resource:obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources /resource:obj\x64\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmCheat.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmCheatDbList.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmCheatList.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmLogWindow.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmMain.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmSelectRom.resources /resource:obj\x64\Release\Mesen.GUI.Forms.frmRecordAvi.resources /resource:obj\x64\Release\Mesen.GUI.Updates.frmDownloadProgress.resources /resource:obj\x64\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources /resource:obj\x64\Release\Mesen.GUI.Properties.Resources.resources /resource:..\bin\x64\Release\Dependencies.zip,Mesen.GUI.Dependencies.Dependencies.zip /target:winexe /utf8output /win32icon:Resources\Icon.ico /win32manifest:app.manifest /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Config\AudioConfig.cs Config\DbgIntegrationConfig.cs Config\AviRecordConfig.cs Config\BaseConfig.cs Config\ConfigAttributes.cs Config\Configuration.cs Config\ConfigManager.cs Config\CheatCodes.cs Config\GameboyConfig.cs Config\InputConfig.cs Config\FileAssociationHelper.cs Config\CheatWindowConfig.cs Config\MovieRecordConfig.cs Config\PreferencesConfig.cs Config\Shortcuts\EmulatorShortcut.cs Config\Shortcuts\KeyCombination.cs Config\Shortcuts\ShortcutKeyInfo.cs Config\EmulationConfig.cs Config\NetplayConfig.cs Config\VideoConfig.cs Controls\ctrlLinkLabel.cs Controls\ctrlRecentGame.cs Controls\ctrlRecentGame.Designer.cs Controls\ctrlRecentGames.cs Controls\ctrlRecentGames.Designer.cs Debugger\Breakpoints\Breakpoint.cs Debugger\Breakpoints\BreakpointManager.cs Debugger\Breakpoints\ctrlBreakpoints.cs Debugger\Breakpoints\ctrlBreakpoints.Designer.cs Debugger\Breakpoints\frmBreakpoint.cs Debugger\Breakpoints\frmBreakpoint.Designer.cs Debugger\Breakpoints\InteropBreakpoint.cs Debugger\Code\BaseStyleProvider.cs Debugger\Code\CodeHighlighting.cs Debugger\Code\GbDisassemblyManager.cs Debugger\Code\Cx4DisassemblyManager.cs Debugger\Code\GbLineStyleProvider.cs Debugger\Code\Cx4LineStyleProvider.cs Debugger\Code\NecDspLineStyleProvider.cs Debugger\Code\NecDspDisassemblyManager.cs Debugger\Code\Sa1LineStyleProvider.cs Debugger\Code\SymbolCodeDataProvider.cs Debugger\Code\Sa1DisassemblyManager.cs Debugger\Code\GsuDisassemblyManager.cs Debugger\Code\GsuLineStyleProvider.cs Debugger\Code\SpcLineStyleProvider.cs Debugger\Code\CodeDataProvider.cs Debugger\Code\SpcDisassemblyManager.cs Debugger\Code\CpuDisassemblyManager.cs Debugger\Code\CpuLineStyleProvider.cs Debugger\Code\IDisassemblyManager.cs Debugger\Config\DebuggerShortcutsConfig.cs Debugger\Config\DebuggerInfo.cs Debugger\Config\AssemblerConfig.cs Debugger\Config\DebugLogConfig.cs Debugger\Config\ProfilerConfig.cs Debugger\Config\ScriptWindowConfig.cs Debugger\Config\SpriteViewerConfig.cs Debugger\Config\RegisterViewerConfig.cs Debugger\Config\TileViewerConfig.cs Debugger\Config\TilemapViewerConfig.cs Debugger\Controls\ctrlCx4Status.cs Debugger\Controls\ctrlCx4Status.Designer.cs Debugger\Controls\ctrlMemoryMapping.cs Debugger\Controls\ctrlNecDspStatus.cs Debugger\Controls\ctrlNecDspStatus.Designer.cs Debugger\Controls\ctrlMemoryType.cs Debugger\Controls\ctrlGameboyStatus.cs Debugger\Controls\ctrlGameboyStatus.Designer.cs Debugger\frmDebugLog.cs Debugger\frmDebugLog.Designer.cs Debugger\Integration\RgbdsSymbolFile.cs Debugger\Integration\BassLabelFile.cs Debugger\MemoryTools\ctrlMemoryAccessCounters.cs Debugger\MemoryTools\ctrlMemoryAccessCounters.Designer.cs Debugger\Controls\ctrlPanel.cs Debugger\Controls\ctrlPpuStatus.cs Debugger\Controls\ctrlPpuStatus.Designer.cs Debugger\Controls\ctrlGsuStatus.cs Debugger\Controls\ctrlGsuStatus.Designer.cs Debugger\Controls\ctrlSearchResult.cs Debugger\Controls\ctrlSearchResult.Designer.cs Debugger\Controls\ctrlSpcStatus.cs Debugger\Controls\ctrlSpcStatus.Designer.cs Debugger\EventViewer\ctrlEventViewerFilters.cs Debugger\EventViewer\ctrlEventViewerFilters.Designer.cs Debugger\EventViewer\ctrlEventViewerListView.cs Debugger\EventViewer\ctrlEventViewerListView.Designer.cs Debugger\frmAssembler.cs Debugger\frmAssembler.Designer.cs Debugger\frmBreakIn.cs Debugger\frmBreakIn.Designer.cs Debugger\frmBreakOn.cs Debugger\frmBreakOn.Designer.cs Debugger\frmDebuggerColors.cs Debugger\frmDebuggerColors.Designer.cs Debugger\frmGoToAll.cs Debugger\frmGoToAll.Designer.cs Debugger\Integration\DbgImporter.cs Debugger\Integration\frmIntegrationSettings.cs Debugger\Integration\frmIntegrationSettings.Designer.cs Debugger\Integration\ISymbolProvider.cs Debugger\Integration\WlaDxImporter.cs Debugger\Labels\CodeLabel.cs Debugger\Labels\ctrlLabelList.cs Debugger\Labels\ctrlLabelList.Designer.cs Debugger\Labels\frmEditLabel.cs Debugger\Labels\frmEditLabel.Designer.cs Debugger\Labels\LabelManager.cs Debugger\Labels\MslLabelFile.cs Debugger\PpuViewer\ctrlImagePanel.cs Debugger\PpuViewer\ctrlImagePanel.Designer.cs Debugger\PpuViewer\ctrlImageViewer.cs Debugger\PpuViewer\ctrlPropertyList.cs Debugger\PpuViewer\ctrlPropertyList.Designer.cs Debugger\PpuViewer\ctrlSpriteList.cs Debugger\PpuViewer\ctrlSpriteList.Designer.cs Debugger\PpuViewer\frmSpriteViewer.cs Debugger\PpuViewer\frmSpriteViewer.Designer.cs Debugger\PpuViewer\frmRegisterViewer.cs Debugger\PpuViewer\frmRegisterViewer.Designer.cs Debugger\PpuViewer\SpriteInfo.cs Debugger\PpuViewer\WindowRefreshManager.cs Debugger\Profiler\ctrlProfiler.cs Debugger\Profiler\ctrlProfiler.Designer.cs Debugger\Profiler\frmProfiler.cs Debugger\Profiler\frmProfiler.Designer.cs Debugger\Scripts\FastColoredTextBox\AutocompleteItem.cs Debugger\Scripts\FastColoredTextBox\AutocompleteMenu.cs Debugger\Scripts\FastColoredTextBox\Bookmarks.cs Debugger\Scripts\FastColoredTextBox\Char.cs Debugger\Scripts\FastColoredTextBox\CommandManager.cs Debugger\Scripts\FastColoredTextBox\Commands.cs Debugger\Scripts\FastColoredTextBox\DocumentMap.cs Debugger\Scripts\FastColoredTextBox\EncodingDetector.cs Debugger\Scripts\FastColoredTextBox\ExportToHTML.cs Debugger\Scripts\FastColoredTextBox\ExportToRTF.cs Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.cs Debugger\Scripts\FastColoredTextBox\FileTextSource.cs Debugger\Scripts\FastColoredTextBox\FindForm.cs Debugger\Scripts\FastColoredTextBox\FindForm.designer.cs Debugger\Scripts\FastColoredTextBox\GoToForm.cs Debugger\Scripts\FastColoredTextBox\GoToForm.designer.cs Debugger\Scripts\FastColoredTextBox\Hints.cs Debugger\Scripts\FastColoredTextBox\Hotkeys.cs Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.cs Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.designer.cs Debugger\Scripts\FastColoredTextBox\LimitedStack.cs Debugger\Scripts\FastColoredTextBox\Line.cs Debugger\Scripts\FastColoredTextBox\LinesAccessor.cs Debugger\Scripts\FastColoredTextBox\MacrosManager.cs Debugger\Scripts\FastColoredTextBox\MonoUtility.cs Debugger\Scripts\FastColoredTextBox\NativeMethods.cs Debugger\Scripts\FastColoredTextBox\NativeMethodsWrapper.cs Debugger\Scripts\FastColoredTextBox\Place.cs Debugger\Scripts\FastColoredTextBox\PlatformType.cs Debugger\Scripts\FastColoredTextBox\Range.cs Debugger\Scripts\FastColoredTextBox\ReplaceForm.cs Debugger\Scripts\FastColoredTextBox\ReplaceForm.designer.cs Debugger\Scripts\FastColoredTextBox\Ruler.cs Debugger\Scripts\FastColoredTextBox\Ruler.designer.cs Debugger\Scripts\FastColoredTextBox\Style.cs Debugger\Scripts\FastColoredTextBox\SyntaxDescriptor.cs Debugger\Scripts\FastColoredTextBox\SyntaxHighlighter.cs Debugger\Scripts\FastColoredTextBox\TextSource.cs Debugger\Scripts\FastColoredTextBox\TypeDescriptor.cs Debugger\Scripts\FastColoredTextBox\UnfocusablePanel.cs Debugger\Scripts\FastColoredTextBox\VisualMarker.cs Debugger\Scripts\frmScript.cs Debugger\Scripts\frmScript.Designer.cs Debugger\Tooltips\ctrlTooltip.cs Debugger\Tooltips\ctrlTooltip.Designer.cs Debugger\Workspace\DebugWorkspace.cs Debugger\Config\EventViewerConfig.cs Debugger\Config\HexEditorInfo.cs Config\RecentItems.cs Debugger\Config\TraceLoggerInfo.cs Debugger\Config\DebugInfo.cs Controls\BaseControl.cs Controls\ctrlAutoGrowLabel.cs Controls\ctrlHorizontalTrackbar.cs Controls\ctrlHorizontalTrackbar.Designer.cs Controls\ctrlLoadingRom.cs Controls\ctrlLoadingRom.Designer.cs Controls\ctrlMesenContextMenuStrip.cs Controls\ctrlMesenMenuStrip.cs Controls\ctrlMesenPictureBox.cs Controls\ctrlMesenToolStrip.cs Controls\ctrlPathSelection.cs Controls\ctrlPathSelection.Designer.cs Controls\MesenNumericUpDown.cs Controls\ctrlRiskyOption.cs Controls\ctrlRiskyOption.Designer.cs Controls\ctrlSplitContainer.cs Controls\ctrlTrackbar.cs Controls\ctrlTrackbar.Designer.cs Controls\ctrlRenderer.cs Controls\ctrlRenderer.Designer.cs Controls\MyListView.cs Debugger\CodeLineData.cs Debugger\Controls\ComboBoxWithSeparator.cs Debugger\Controls\ctrlCallstack.cs Debugger\Controls\ctrlCallstack.Designer.cs Debugger\Controls\ctrlColorPicker.cs Debugger\Controls\ctrlCpuStatus.cs Debugger\Controls\ctrlCpuStatus.Designer.cs Debugger\Controls\ctrlDbgShortcuts.cs Debugger\Controls\ctrlDbgShortcuts.Designer.cs Debugger\Controls\ctrlDisassemblyView.cs Debugger\Controls\ctrlDisassemblyView.Designer.cs Debugger\MemoryTools\ByteColorProvider.cs Debugger\MemoryTools\ctrlHexViewer.cs Debugger\MemoryTools\ctrlHexViewer.Designer.cs Debugger\Controls\ctrlWatch.cs Debugger\Controls\ctrlWatch.Designer.cs Debugger\EventViewer\ctrlEventViewerPpuView.cs Debugger\EventViewer\ctrlEventViewerPpuView.Designer.cs Debugger\EventViewer\frmEventViewer.cs Debugger\EventViewer\frmEventViewer.Designer.cs Debugger\frmDbgPreferences.cs Debugger\frmDbgPreferences.Designer.cs Debugger\frmDbgShortcutGetKey.cs Debugger\frmDbgShortcutGetKey.Designer.cs Debugger\Controls\ctrlCodeScrollbar.cs Debugger\Controls\ctrlTextbox.cs Debugger\Controls\ctrlTextbox.Designer.cs Debugger\Controls\ctrlScrollableTextbox.cs Debugger\Controls\ctrlScrollableTextbox.Designer.cs Debugger\FontDialogHelper.cs Debugger\frmDebugger.cs Debugger\frmDebugger.Designer.cs Debugger\MemoryTools\frmFadeSpeed.cs Debugger\MemoryTools\frmFadeSpeed.Designer.cs Debugger\frmGoToLine.cs Debugger\frmGoToLine.Designer.cs Debugger\MemoryTools\frmMemoryTools.cs Debugger\MemoryTools\frmMemoryTools.Designer.cs Debugger\GraphicsExtensions.cs Debugger\MemoryTools\frmMemoryViewerColors.cs Debugger\MemoryTools\frmMemoryViewerColors.Designer.cs Debugger\MemoryTools\TblByteCharConverter.cs Debugger\PpuViewer\ctrlPaletteViewer.cs Debugger\PpuViewer\ctrlScanlineCycleSelect.cs Debugger\PpuViewer\ctrlScanlineCycleSelect.Designer.cs Debugger\PpuViewer\frmPaletteViewer.cs Debugger\PpuViewer\frmPaletteViewer.Designer.cs Debugger\PpuViewer\frmTileViewer.cs Debugger\PpuViewer\frmTileViewer.Designer.cs Debugger\PpuViewer\frmTilemapViewer.cs Debugger\PpuViewer\frmTilemapViewer.Designer.cs Debugger\frmTraceLogger.cs Debugger\frmTraceLogger.Designer.cs Debugger\Controls\TextboxHistory.cs Debugger\HexBox\BuiltInContextMenu.cs Debugger\HexBox\ByteCharConverters.cs Debugger\HexBox\ByteCollection.cs Debugger\HexBox\BytePositionInfo.cs Debugger\HexBox\DataBlock.cs Debugger\HexBox\DataMap.cs Debugger\HexBox\DynamicByteProvider.cs Debugger\HexBox\FileDataBlock.cs Debugger\HexBox\FindOptions.cs Debugger\HexBox\HexBox.cs Debugger\HexBox\HexCasing.cs Debugger\HexBox\IByteColorProvider.cs Debugger\HexBox\IByteProvider.cs Debugger\HexBox\MemoryDataBlock.cs Debugger\HexBox\NativeMethods.cs Debugger\HexBox\StaticByteProvider.cs Debugger\HexBox\Util.cs Debugger\MemoryTools\TblLoader.cs Debugger\DebugWindowManager.cs Debugger\WatchManager.cs Debugger\Workspace\DebugWorkspaceManager.cs Emulation\CursorManager.cs Emulation\DisplayManager.cs Emulation\SaveStateManager.cs Forms\BaseConfigForm.Designer.cs Forms\BaseForm.cs Forms\BaseConfigForm.cs Forms\BaseInputForm.cs Forms\Config\Controllers\BaseInputConfigControl.cs Forms\Config\Controllers\BaseInputConfigForm.cs Forms\Config\ctrlEmulatorShortcuts.cs Forms\Config\ctrlEmulatorShortcuts.Designer.cs Forms\Config\Controllers\ctrlKeyBindingHint.cs Forms\Config\Controllers\ctrlKeyBindingHint.Designer.cs Forms\Config\Controllers\ctrlStandardController.cs Forms\Config\Controllers\ctrlStandardController.Designer.cs Forms\Config\frmAudioConfig.cs Forms\Config\frmAudioConfig.Designer.cs Forms\Config\Controllers\frmControllerConfig.cs Forms\Config\Controllers\frmControllerConfig.Designer.cs Forms\Config\frmCopyFiles.cs Forms\Config\frmCopyFiles.Designer.cs Forms\Config\frmGameboyConfig.cs Forms\Config\frmGameboyConfig.Designer.cs Forms\Config\frmInputConfig.cs Forms\Config\frmInputConfig.Designer.cs Forms\Config\frmEmulationConfig.cs Forms\Config\frmEmulationConfig.Designer.cs Forms\Config\frmGetKey.cs Forms\Config\frmGetKey.Designer.cs Forms\Config\frmPreferences.cs Forms\Config\frmPreferences.Designer.cs Forms\Config\frmVideoConfig.cs Forms\Config\frmVideoConfig.Designer.cs Forms\Config\KeyPresets.cs Forms\EntityBinder.cs Forms\frmAbout.cs Forms\frmAbout.Designer.cs Forms\frmConfigWizard.cs Forms\frmConfigWizard.Designer.cs Forms\frmFullscreenRenderer.cs Forms\Config\frmRecordMovie.cs Forms\Config\frmRecordMovie.Designer.cs Forms\MonoThemeHelper.cs Forms\MonoToolStripHelper.cs Forms\NetPlay\frmClientConfig.cs Forms\NetPlay\frmClientConfig.Designer.cs Forms\NetPlay\frmPlayerProfile.cs Forms\NetPlay\frmPlayerProfile.Designer.cs Forms\NetPlay\frmServerConfig.cs Forms\NetPlay\frmServerConfig.Designer.cs Forms\Tools\CheatDatabase.cs Forms\Tools\frmCheat.cs Forms\Tools\frmCheat.Designer.cs Forms\Tools\frmCheatDbList.cs Forms\Tools\frmCheatDbList.Designer.cs Forms\Tools\frmCheatList.cs Forms\Tools\frmCheatList.Designer.cs Forms\Tools\frmLogWindow.cs Forms\Tools\frmLogWindow.Designer.cs Forms\frmMain.cs Forms\frmMain.Designer.cs Forms\frmSelectRom.cs Forms\frmSelectRom.Designer.cs Forms\Tools\frmRecordAvi.cs Forms\Tools\frmRecordAvi.Designer.cs Interop\DebugState.cs Interop\NetplayApi.cs Interop\RecordApi.cs Interop\TestApi.cs Updates\frmDownloadProgress.cs Updates\frmDownloadProgress.Designer.cs Updates\frmUpdatePrompt.cs Updates\frmUpdatePrompt.Designer.cs Forms\MesenMsgBox.cs Forms\OpenSaveFileDialogExtensions.cs Forms\ResourceHelper.cs Forms\ResourcePath.cs Emulation\ShortcutHandler.cs Interop\DebugApi.cs Interop\ConfigApi.cs Interop\InputApi.cs Interop\EmuApi.cs Interop\NotificationListener.cs Interop\Utf8Marshaler.cs Program.cs Properties\AssemblyInfo.cs ResourceExtractor.cs Emulation\EmuRunner.cs RuntimeChecker.cs SingleInstance.cs Utilities\ArchiveHelper.cs Utilities\FirmwareHelper.cs Utilities\CommandLineHelper.cs Utilities\FolderHelper.cs Utilities\HexConverter.cs Utilities\ImageExtensions.cs Utilities\InBackgroundHelper.cs Utilities\Md5Helper.cs Updates\UpdateHelper.cs Utilities\NetPlayHelper.cs Utilities\RandomGameHelper.cs Utilities\RomTestHelper.cs Utilities\XmlColor.cs Properties\Resources.Designer.cs Properties\Settings.Designer.cs "obj\x64\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:02:22]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:02:27] _CopyOutOfDateSourceItemsToOutputDirectoryAlways:
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\resources.en.xml" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\resources.en.xml".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LICENSE.txt" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\LICENSE.txt".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\CheatDb.xml" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\CheatDb.xml".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\PixelFont.ttf" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\PixelFont.ttf".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\Satellaview".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\Satellaview".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0123-0.bin" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Satellaview\BSX0123-0.bin".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\Satellaview".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0124-0.bin" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Satellaview\BSX0124-0.bin".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0122-0.bin" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Satellaview\BSX0122-0.bin".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0120-0.bin" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Satellaview\BSX0120-0.bin".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0121-0.bin" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Satellaview\BSX0121-0.bin".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\LuaScripts".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\LuaScripts".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\LuaScripts".
[00:02:27]   Creating directory "..\bin\x64\Release\Dependencies\LuaScripts".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\NtscSafeArea.lua" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\LuaScripts\NtscSafeArea.lua".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\Example.lua" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\LuaScripts\Example.lua".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Font.24.spritefont" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Font.24.spritefont".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Font.64.spritefont" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\Font.64.spritefont".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\DrawMode.lua" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\LuaScripts\DrawMode.lua".
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\Grid.lua" to "C:\projects\mesen-s\bin\x64\Release\Dependencies\LuaScripts\Grid.lua".
[00:02:27] CopyFilesToOutputDirectory:
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\obj\x64\Release\Mesen-S.exe" to "C:\projects\mesen-s\bin\x64\Release\Mesen-S.exe".
[00:02:27]   UI -> C:\projects\mesen-s\bin\x64\Release\Mesen-S.exe
[00:02:27]   Copying file from "C:\projects\mesen-s\UI\obj\x64\Release\Mesen-S.pdb" to "C:\projects\mesen-s\bin\x64\Release\Mesen-S.pdb".
[00:02:27] Done Building Project "C:\projects\mesen-s\UI\UI.csproj" (default targets).
[00:02:27] Done Building Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (default targets).
[00:02:27] Project "C:\projects\mesen-s\Mesen-S.sln" (1) is building "C:\projects\mesen-s\PGOHelper\PGOHelper.vcxproj.metaproj" (17) on node 1 (default targets).
[00:02:27] Project "C:\projects\mesen-s\PGOHelper\PGOHelper.vcxproj.metaproj" (17) is building "C:\projects\mesen-s\PGOHelper\PGOHelper.vcxproj" (18) on node 1 (default targets).
[00:02:27] PrepareForBuild:
[00:02:27]   Creating directory "obj\x64\Release\".
[00:02:27]   Creating directory "obj\x64\Release\PGOHelper.tlog\".
[00:02:27] InitializeBuildStatus:
[00:02:27]   Creating "obj\x64\Release\PGOHelper.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
[00:02:27] VcpkgTripletSelection:
[00:02:27]   Using triplet "x64-windows" from "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\"
[00:02:27] ClCompile:
[00:02:27]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\CL.exe /c /I"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\include" /Zi /nologo /W3 /WX- /diagnostics:column /MP /O2 /Oi /GL /D WIN32 /D NDEBUG /D _CONSOLE /D _LIB /D _UNICODE /D UNICODE /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /std:c++17 /Fo"obj\x64\Release\\" /Fd"obj\x64\Release\vc142.pdb" /Gd /TP /FC /errorReport:queue PGOHelper.cpp
[00:02:27]   PGOHelper.cpp
[00:02:28] Link:
[00:02:28]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\HostX86\x64\link.exe /ERRORREPORT:QUEUE /OUT:"C:\projects\mesen-s\\bin\x64\Release\PGOHelper.exe" /INCREMENTAL:NO /NOLOGO /LIBPATH:"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib" /LIBPATH:"C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib\manual-link" kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\lib\*.lib" /MANIFEST /MANIFESTUAC:"level='asInvoker' uiAccess='false'" /manifest:embed /DEBUG /PDB:"C:\projects\mesen-s\\bin\x64\Release\PGOHelper.pdb" /SUBSYSTEM:CONSOLE /OPT:REF /OPT:ICF /LTCG:incremental /LTCGOUT:"obj\x64\Release\PGOHelper.iobj" /TLBID:1 /DYNAMICBASE /NXCOMPAT /IMPLIB:"C:\projects\mesen-s\\bin\x64\Release\PGOHelper.lib" /MACHINE:X64 obj\x64\Release\PGOHelper.obj
[00:02:28]   "C:\projects\mesen-s\bin\x64\Release\MesenSCore.lib"
[00:02:28]   Generating code
[00:02:28]   Previous IPDB not found, fall back to full compilation.
[00:02:29]   All 653 functions were compiled because no usable IPDB/IOBJ from previous compilation was found.
[00:02:29]   Finished generating code
[00:02:29]   PGOHelper.vcxproj -> C:\projects\mesen-s\bin\x64\Release\PGOHelper.exe
[00:02:29] AppLocalFromInstalled:
[00:02:29]   pwsh.exe -ExecutionPolicy Bypass -noprofile -File "C:\Tools\vcpkg\scripts\buildsystems\msbuild\applocal.ps1" "C:\projects\mesen-s\bin\x64\Release\PGOHelper.exe" "C:\Tools\vcpkg\scripts\buildsystems\msbuild\..\..\..\installed\x64-windows\bin" "obj\x64\Release\PGOHelper.tlog\PGOHelper.write.1u.tlog" "obj\x64\Release\vcpkg.applocal.log"
[00:02:30] FinalizeBuildStatus:
[00:02:30]   Deleting file "obj\x64\Release\PGOHelper.tlog\unsuccessfulbuild".
[00:02:30]   Touching "obj\x64\Release\PGOHelper.tlog\PGOHelper.lastbuildstate".
[00:02:30] Done Building Project "C:\projects\mesen-s\PGOHelper\PGOHelper.vcxproj" (default targets).
[00:02:30] Done Building Project "C:\projects\mesen-s\PGOHelper\PGOHelper.vcxproj.metaproj" (default targets).
[00:02:30] Done Building Project "C:\projects\mesen-s\Mesen-S.sln" (Build target(s)).
[00:02:30] 
[00:02:30] Build succeeded.
[00:02:30]     0 Warning(s)
[00:02:30]     0 Error(s)
[00:02:30] 
[00:02:30] Time Elapsed 00:02:22.12
[00:02:30] copy "x64\Release\MesenSCore.dll" "Any CPU\Release\Dependencies\MesenSCore.x64.dll"
[00:02:30]         1 file(s) copied.
[00:02:30] msbuild ..\Mesen-S.sln /t:Build /p:Configuration=Release /p:Platform="Any CPU" /property:DefineConstants="HIDETESTMENU;AUTOBUILD"
[00:02:31] Microsoft (R) Build Engine version 16.9.0+5e4b48a27 for .NET Framework
[00:02:31] Copyright (C) Microsoft Corporation. All rights reserved.
[00:02:31] 
[00:02:31] Building the projects in this solution one at a time. To enable parallel build, please add the "-m" switch.
[00:02:32] Build started 6/7/2021 6:13:44 PM.
[00:02:33] Project "C:\projects\mesen-s\Mesen-S.sln" on node 1 (Build target(s)).
[00:02:33] ValidateSolutionConfiguration:
[00:02:33]   Building solution configuration "Release|Any CPU".
[00:02:33] ValidateProjects:
[00:02:33]   The project "Core" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "Utilities" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "Windows" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "InteropDLL" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "PGOHelper" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "SevenZip" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "Lua" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33]   The project "Libretro" is not selected for building in solution configuration "Release|Any CPU".
[00:02:33] Project "C:\projects\mesen-s\Mesen-S.sln" (1) is building "C:\projects\mesen-s\UI\UI.csproj.metaproj" (2) on node 1 (default targets).
[00:02:33] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (2) is building "C:\projects\mesen-s\UpdateHelper\UpdateHelper.csproj" (3) on node 1 (default targets).
[00:02:33] PrepareForBuild:
[00:02:33]   Creating directory "obj\Release\".
[00:02:33] GenerateBindingRedirects:
[00:02:33]   No suggested binding redirects from ResolveAssemblyReferences.
[00:02:33] CoreCompile:
[00:02:33]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:AnyCPU /errorreport:prompt /warn:4 /define:HIDETESTMENU;AUTOBUILD /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Net.Http.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\Release\MesenUpdater.exe /subsystemversion:6.00 /target:winexe /utf8output /win32icon:Icon.ico /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Program.cs Properties\AssemblyInfo.cs "obj\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:02:33]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:02:34] CopyFilesToOutputDirectory:
[00:02:34]   Copying file from "C:\projects\mesen-s\UpdateHelper\obj\Release\MesenUpdater.exe" to "C:\projects\mesen-s\bin\Any CPU\Release\MesenUpdater.exe".
[00:02:34]   UpdateHelper -> C:\projects\mesen-s\bin\Any CPU\Release\MesenUpdater.exe
[00:02:34]   Copying file from "C:\projects\mesen-s\UpdateHelper\obj\Release\MesenUpdater.pdb" to "C:\projects\mesen-s\bin\Any CPU\Release\MesenUpdater.pdb".
[00:02:34] Done Building Project "C:\projects\mesen-s\UpdateHelper\UpdateHelper.csproj" (default targets).
[00:02:34] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (2) is building "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (4) on node 1 (default targets).
[00:02:34] Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (4) is building "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj" (5) on node 1 (default targets).
[00:02:34] PrepareForBuild:
[00:02:34]   Creating directory "obj\Release\".
[00:02:34] CoreCompile:
[00:02:34]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:AnyCPU /errorreport:prompt /warn:4 /define:HIDETESTMENU;AUTOBUILD /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\Release\DependencyPacker.exe /subsystemversion:6.00 /target:exe /utf8output /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Program.cs Properties\AssemblyInfo.cs "obj\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:02:34]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:02:34] CopyFilesToOutputDirectory:
[00:02:34]   Copying file from "C:\projects\mesen-s\DependencyPacker\obj\Release\DependencyPacker.exe" to "C:\projects\mesen-s\bin\Any CPU\Release\DependencyPacker.exe".
[00:02:34]   DependencyPacker -> C:\projects\mesen-s\bin\Any CPU\Release\DependencyPacker.exe
[00:02:34]   Copying file from "C:\projects\mesen-s\DependencyPacker\obj\Release\DependencyPacker.pdb" to "C:\projects\mesen-s\bin\Any CPU\Release\DependencyPacker.pdb".
[00:02:34] Done Building Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj" (default targets).
[00:02:34] Done Building Project "C:\projects\mesen-s\DependencyPacker\DependencyPacker.csproj.metaproj" (default targets).
[00:02:34] Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (2) is building "C:\projects\mesen-s\UI\UI.csproj" (6) on node 1 (default targets).
[00:02:34] PrepareForBuild:
[00:02:34]   Creating directory "obj\Release\".
[00:02:34] PreBuildEvent:
[00:02:34]   mkdir "Dependencies"
[00:02:34]   
[00:02:34]   if "PGO Optimize" == "Release" (
[00:02:34]   copy "C:\projects\mesen-s\bin\x64\PGO Profile\MesenSCore.dll" "Dependencies\MesenSCore.x64.dll"
[00:02:34]   )
[00:02:34]   if NOT "PGO Optimize" == "Release" (
[00:02:34]   copy "C:\projects\mesen-s\bin\x64\Release\MesenSCore.dll" "Dependencies\MesenSCore.x64.dll"
[00:02:34]   )
[00:02:34]   copy "MesenUpdater.exe" "Dependencies\MesenUpdater.exe"
[00:02:34]   call DependencyPacker.exe
[00:02:34]   
[00:02:34]   A subdirectory or file Dependencies already exists.
[00:02:34]           1 file(s) copied.
[00:02:34]           1 file(s) copied.
[00:02:34] CoreResGen:
[00:02:34]   "C:\Program Files (x86)\Microsoft SDKs\Windows\v10.0A\bin\NETFX 4.8 Tools\resgen.exe" /useSourcePath /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Drawing.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /r:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /compile Controls\ctrlPathSelection.resx,obj\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources Controls\ctrlRecentGame.resx,obj\Release\Mesen.GUI.Controls.ctrlRecentGame.resources Controls\ctrlRecentGames.resx,obj\Release\Mesen.GUI.Controls.ctrlRecentGames.resources Controls\MesenNumericUpDown.resx,obj\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources Controls\ctrlHorizontalTrackbar.resx,obj\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources Controls\ctrlLoadingRom.resx,obj\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources Controls\ctrlRiskyOption.resx,obj\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources Controls\ctrlTrackbar.resx,obj\Release\Mesen.GUI.Controls.ctrlTrackbar.resources Controls\ctrlRenderer.resx,obj\Release\Mesen.GUI.Controls.ctrlRenderer.resources Debugger\Breakpoints\ctrlBreakpoints.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources Debugger\Breakpoints\frmBreakpoint.resx,obj\Release\Mesen.GUI.Debugger.frmBreakpoint.resources Debugger\Controls\ctrlCallstack.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources Debugger\Controls\ctrlCx4Status.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources Debugger\Controls\ctrlNecDspStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources Debugger\Controls\ctrlGameboyStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources Debugger\frmDebugLog.resx,obj\Release\Mesen.GUI.Forms.frmDebugLog.resources Debugger\MemoryTools\ctrlMemoryAccessCounters.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources Debugger\Controls\ctrlPpuStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources Debugger\Controls\ctrlGsuStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources Debugger\Controls\ctrlSpcStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources Debugger\Controls\ctrlCpuStatus.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources Debugger\Controls\ctrlDbgShortcuts.resx,obj\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources Debugger\Controls\ctrlDisassemblyView.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources Debugger\EventViewer\ctrlEventViewerFilters.resx,obj\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources Debugger\EventViewer\ctrlEventViewerListView.resx,obj\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources Debugger\frmAssembler.resx,obj\Release\Mesen.GUI.Debugger.frmAssembler.resources Debugger\frmBreakIn.resx,obj\Release\Mesen.GUI.Debugger.frmBreakIn.resources Debugger\frmBreakOn.resx,obj\Release\Mesen.GUI.Debugger.frmBreakOn.resources Debugger\Integration\frmIntegrationSettings.resx,obj\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources Debugger\Labels\ctrlLabelList.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources Debugger\Labels\frmEditLabel.resx,obj\Release\Mesen.GUI.Debugger.frmEditLabel.resources Debugger\MemoryTools\ctrlHexViewer.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources Debugger\Controls\ctrlWatch.resx,obj\Release\Mesen.GUI.Debugger.ctrlWatch.resources Debugger\EventViewer\ctrlEventViewerPpuView.resx,obj\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources Debugger\EventViewer\frmEventViewer.resx,obj\Release\Mesen.GUI.Debugger.frmEventViewer.resources Debugger\frmDbgPreferences.resx,obj\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources Debugger\frmDbgShortcutGetKey.resx,obj\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources Debugger\Controls\ctrlScrollableTextbox.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources Debugger\frmDebugger.resx,obj\Release\Mesen.GUI.Debugger.frmDebugger.resources Debugger\MemoryTools\frmFadeSpeed.resx,obj\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources Debugger\frmGoToLine.resx,obj\Release\Mesen.GUI.Debugger.frmGoToLine.resources Debugger\MemoryTools\frmMemoryTools.resx,obj\Release\Mesen.GUI.Debugger.frmMemoryTools.resources Debugger\MemoryTools\frmMemoryViewerColors.resx,obj\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources Debugger\PpuViewer\ctrlImagePanel.resx,obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources Debugger\PpuViewer\ctrlPropertyList.resx,obj\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources Debugger\PpuViewer\ctrlScanlineCycleSelect.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources Debugger\PpuViewer\ctrlSpriteList.resx,obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources Debugger\PpuViewer\frmPaletteViewer.resx,obj\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources Debugger\PpuViewer\frmSpriteViewer.resx,obj\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources Debugger\PpuViewer\frmRegisterViewer.resx,obj\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources Debugger\PpuViewer\frmTileViewer.resx,obj\Release\Mesen.GUI.Debugger.frmTileViewer.resources Debugger\PpuViewer\frmTilemapViewer.resx,obj\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources Debugger\frmTraceLogger.resx,obj\Release\Mesen.GUI.Debugger.frmTraceLogger.resources Debugger\HexBox\HexBox.resx,obj\Release\Be.Windows.Forms.HexBox.resources Debugger\Profiler\ctrlProfiler.resx,obj\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources Debugger\Profiler\frmProfiler.resx,obj\Release\Mesen.GUI.Debugger.frmProfiler.resources Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.resx,obj\Release\FastColoredTextBoxNS.FastColoredTextBox.resources Debugger\Scripts\FastColoredTextBox\FindForm.resx,obj\Release\FastColoredTextBoxNS.FindForm.resources Debugger\Scripts\FastColoredTextBox\GoToForm.resx,obj\Release\FastColoredTextBoxNS.GoToForm.resources Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.resx,obj\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources Debugger\Scripts\FastColoredTextBox\ReplaceForm.resx,obj\Release\FastColoredTextBoxNS.ReplaceForm.resources Debugger\Scripts\frmScript.resx,obj\Release\Mesen.GUI.Debugger.frmScript.resources Debugger\Tooltips\ctrlTooltip.resx,obj\Release\Mesen.GUI.Debugger.ctrlTooltip.resources Forms\BaseConfigForm.resx,obj\Release\Mesen.GUI.Forms.BaseConfigForm.resources Forms\BaseForm.resx,obj\Release\Mesen.GUI.Forms.BaseForm.resources Forms\BaseInputForm.resx,obj\Release\Mesen.GUI.Forms.BaseInputForm.resources Forms\Config\Controllers\BaseInputConfigForm.resx,obj\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources Forms\Config\ctrlEmulatorShortcuts.resx,obj\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources Forms\Config\Controllers\ctrlKeyBindingHint.resx,obj\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources Forms\Config\Controllers\ctrlStandardController.resx,obj\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources Forms\Config\frmAudioConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources Forms\Config\Controllers\frmControllerConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources Forms\Config\frmCopyFiles.resx,obj\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources Forms\Config\frmGameboyConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources Forms\Config\frmInputConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources Forms\Config\frmEmulationConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources Forms\Config\frmGetKey.resx,obj\Release\Mesen.GUI.Forms.Config.frmGetKey.resources Forms\Config\frmPreferences.resx,obj\Release\Mesen.GUI.Forms.Config.frmPreferences.resources Forms\Config\frmVideoConfig.resx,obj\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources Forms\frmAbout.resx,obj\Release\Mesen.GUI.Forms.frmAbout.resources Forms\frmConfigWizard.resx,obj\Release\Mesen.GUI.Forms.frmConfigWizard.resources Forms\Config\frmRecordMovie.resx,obj\Release\Mesen.GUI.Forms.frmRecordMovie.resources Forms\NetPlay\frmClientConfig.resx,obj\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources Forms\NetPlay\frmPlayerProfile.resx,obj\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources Forms\NetPlay\frmServerConfig.resx,obj\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources Forms\Tools\frmCheat.resx,obj\Release\Mesen.GUI.Forms.frmCheat.resources Forms\Tools\frmCheatDbList.resx,obj\Release\Mesen.GUI.Forms.frmCheatDbList.resources Forms\Tools\frmCheatList.resx,obj\Release\Mesen.GUI.Forms.frmCheatList.resources Forms\Tools\frmLogWindow.resx,obj\Release\Mesen.GUI.Forms.frmLogWindow.resources Forms\frmMain.resx,obj\Release\Mesen.GUI.Forms.frmMain.resources Forms\frmSelectRom.resx,obj\Release\Mesen.GUI.Forms.frmSelectRom.resources Forms\Tools\frmRecordAvi.resx,obj\Release\Mesen.GUI.Forms.frmRecordAvi.resources Updates\frmDownloadProgress.resx,obj\Release\Mesen.GUI.Updates.frmDownloadProgress.resources Updates\frmUpdatePrompt.resx,obj\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources Properties\Resources.resx,obj\Release\Mesen.GUI.Properties.Resources.resources
[00:02:34]   Processing resource file "Controls\ctrlPathSelection.resx" into "obj\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources".
[00:02:34]   Processing resource file "Controls\ctrlRecentGame.resx" into "obj\Release\Mesen.GUI.Controls.ctrlRecentGame.resources".
[00:02:34]   Processing resource file "Controls\ctrlRecentGames.resx" into "obj\Release\Mesen.GUI.Controls.ctrlRecentGames.resources".
[00:02:34]   Processing resource file "Controls\MesenNumericUpDown.resx" into "obj\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources".
[00:02:34]   Processing resource file "Controls\ctrlHorizontalTrackbar.resx" into "obj\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources".
[00:02:34]   Processing resource file "Controls\ctrlLoadingRom.resx" into "obj\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources".
[00:02:34]   Processing resource file "Controls\ctrlRiskyOption.resx" into "obj\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources".
[00:02:34]   Processing resource file "Controls\ctrlTrackbar.resx" into "obj\Release\Mesen.GUI.Controls.ctrlTrackbar.resources".
[00:02:34]   Processing resource file "Controls\ctrlRenderer.resx" into "obj\Release\Mesen.GUI.Controls.ctrlRenderer.resources".
[00:02:34]   Processing resource file "Debugger\Breakpoints\ctrlBreakpoints.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources".
[00:02:34]   Processing resource file "Debugger\Breakpoints\frmBreakpoint.resx" into "obj\Release\Mesen.GUI.Debugger.frmBreakpoint.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlCallstack.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlCx4Status.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlNecDspStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlGameboyStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources".
[00:02:34]   Processing resource file "Debugger\frmDebugLog.resx" into "obj\Release\Mesen.GUI.Forms.frmDebugLog.resources".
[00:02:34]   Processing resource file "Debugger\MemoryTools\ctrlMemoryAccessCounters.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlPpuStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlGsuStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlSpcStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlCpuStatus.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlDbgShortcuts.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlDisassemblyView.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources".
[00:02:34]   Processing resource file "Debugger\EventViewer\ctrlEventViewerFilters.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources".
[00:02:34]   Processing resource file "Debugger\EventViewer\ctrlEventViewerListView.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources".
[00:02:34]   Processing resource file "Debugger\frmAssembler.resx" into "obj\Release\Mesen.GUI.Debugger.frmAssembler.resources".
[00:02:34]   Processing resource file "Debugger\frmBreakIn.resx" into "obj\Release\Mesen.GUI.Debugger.frmBreakIn.resources".
[00:02:34]   Processing resource file "Debugger\frmBreakOn.resx" into "obj\Release\Mesen.GUI.Debugger.frmBreakOn.resources".
[00:02:34]   Processing resource file "Debugger\Integration\frmIntegrationSettings.resx" into "obj\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources".
[00:02:34]   Processing resource file "Debugger\Labels\ctrlLabelList.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources".
[00:02:34]   Processing resource file "Debugger\Labels\frmEditLabel.resx" into "obj\Release\Mesen.GUI.Debugger.frmEditLabel.resources".
[00:02:34]   Processing resource file "Debugger\MemoryTools\ctrlHexViewer.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources".
[00:02:34]   Processing resource file "Debugger\Controls\ctrlWatch.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlWatch.resources".
[00:02:34]   Processing resource file "Debugger\EventViewer\ctrlEventViewerPpuView.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources".
[00:02:35]   Processing resource file "Debugger\EventViewer\frmEventViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmEventViewer.resources".
[00:02:35]   Processing resource file "Debugger\frmDbgPreferences.resx" into "obj\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources".
[00:02:35]   Processing resource file "Debugger\frmDbgShortcutGetKey.resx" into "obj\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources".
[00:02:35]   Processing resource file "Debugger\Controls\ctrlScrollableTextbox.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources".
[00:02:35]   Processing resource file "Debugger\frmDebugger.resx" into "obj\Release\Mesen.GUI.Debugger.frmDebugger.resources".
[00:02:35]   Processing resource file "Debugger\MemoryTools\frmFadeSpeed.resx" into "obj\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources".
[00:02:35]   Processing resource file "Debugger\frmGoToLine.resx" into "obj\Release\Mesen.GUI.Debugger.frmGoToLine.resources".
[00:02:35]   Processing resource file "Debugger\MemoryTools\frmMemoryTools.resx" into "obj\Release\Mesen.GUI.Debugger.frmMemoryTools.resources".
[00:02:35]   Processing resource file "Debugger\MemoryTools\frmMemoryViewerColors.resx" into "obj\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\ctrlImagePanel.resx" into "obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\ctrlPropertyList.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\ctrlScanlineCycleSelect.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\ctrlSpriteList.resx" into "obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\frmPaletteViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\frmSpriteViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\frmRegisterViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\frmTileViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmTileViewer.resources".
[00:02:35]   Processing resource file "Debugger\PpuViewer\frmTilemapViewer.resx" into "obj\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources".
[00:02:35]   Processing resource file "Debugger\frmTraceLogger.resx" into "obj\Release\Mesen.GUI.Debugger.frmTraceLogger.resources".
[00:02:35]   Processing resource file "Debugger\HexBox\HexBox.resx" into "obj\Release\Be.Windows.Forms.HexBox.resources".
[00:02:35]   Processing resource file "Debugger\Profiler\ctrlProfiler.resx" into "obj\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources".
[00:02:35]   Processing resource file "Debugger\Profiler\frmProfiler.resx" into "obj\Release\Mesen.GUI.Debugger.frmProfiler.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.resx" into "obj\Release\FastColoredTextBoxNS.FastColoredTextBox.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\FastColoredTextBox\FindForm.resx" into "obj\Release\FastColoredTextBoxNS.FindForm.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\FastColoredTextBox\GoToForm.resx" into "obj\Release\FastColoredTextBoxNS.GoToForm.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.resx" into "obj\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\FastColoredTextBox\ReplaceForm.resx" into "obj\Release\FastColoredTextBoxNS.ReplaceForm.resources".
[00:02:35]   Processing resource file "Debugger\Scripts\frmScript.resx" into "obj\Release\Mesen.GUI.Debugger.frmScript.resources".
[00:02:35]   Processing resource file "Debugger\Tooltips\ctrlTooltip.resx" into "obj\Release\Mesen.GUI.Debugger.ctrlTooltip.resources".
[00:02:35]   Processing resource file "Forms\BaseConfigForm.resx" into "obj\Release\Mesen.GUI.Forms.BaseConfigForm.resources".
[00:02:35]   Processing resource file "Forms\BaseForm.resx" into "obj\Release\Mesen.GUI.Forms.BaseForm.resources".
[00:02:35]   Processing resource file "Forms\BaseInputForm.resx" into "obj\Release\Mesen.GUI.Forms.BaseInputForm.resources".
[00:02:35]   Processing resource file "Forms\Config\Controllers\BaseInputConfigForm.resx" into "obj\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources".
[00:02:35]   Processing resource file "Forms\Config\ctrlEmulatorShortcuts.resx" into "obj\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources".
[00:02:35]   Processing resource file "Forms\Config\Controllers\ctrlKeyBindingHint.resx" into "obj\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources".
[00:02:35]   Processing resource file "Forms\Config\Controllers\ctrlStandardController.resx" into "obj\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources".
[00:02:35]   Processing resource file "Forms\Config\frmAudioConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources".
[00:02:35]   Processing resource file "Forms\Config\Controllers\frmControllerConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources".
[00:02:35]   Processing resource file "Forms\Config\frmCopyFiles.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources".
[00:02:35]   Processing resource file "Forms\Config\frmGameboyConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources".
[00:02:35]   Processing resource file "Forms\Config\frmInputConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources".
[00:02:35]   Processing resource file "Forms\Config\frmEmulationConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources".
[00:02:35]   Processing resource file "Forms\Config\frmGetKey.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmGetKey.resources".
[00:02:35]   Processing resource file "Forms\Config\frmPreferences.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmPreferences.resources".
[00:02:35]   Processing resource file "Forms\Config\frmVideoConfig.resx" into "obj\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources".
[00:02:35]   Processing resource file "Forms\frmAbout.resx" into "obj\Release\Mesen.GUI.Forms.frmAbout.resources".
[00:02:35]   Processing resource file "Forms\frmConfigWizard.resx" into "obj\Release\Mesen.GUI.Forms.frmConfigWizard.resources".
[00:02:35]   Processing resource file "Forms\Config\frmRecordMovie.resx" into "obj\Release\Mesen.GUI.Forms.frmRecordMovie.resources".
[00:02:35]   Processing resource file "Forms\NetPlay\frmClientConfig.resx" into "obj\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources".
[00:02:35]   Processing resource file "Forms\NetPlay\frmPlayerProfile.resx" into "obj\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources".
[00:02:35]   Processing resource file "Forms\NetPlay\frmServerConfig.resx" into "obj\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources".
[00:02:35]   Processing resource file "Forms\Tools\frmCheat.resx" into "obj\Release\Mesen.GUI.Forms.frmCheat.resources".
[00:02:35]   Processing resource file "Forms\Tools\frmCheatDbList.resx" into "obj\Release\Mesen.GUI.Forms.frmCheatDbList.resources".
[00:02:35]   Processing resource file "Forms\Tools\frmCheatList.resx" into "obj\Release\Mesen.GUI.Forms.frmCheatList.resources".
[00:02:35]   Processing resource file "Forms\Tools\frmLogWindow.resx" into "obj\Release\Mesen.GUI.Forms.frmLogWindow.resources".
[00:02:35]   Processing resource file "Forms\frmMain.resx" into "obj\Release\Mesen.GUI.Forms.frmMain.resources".
[00:02:35]   Processing resource file "Forms\frmSelectRom.resx" into "obj\Release\Mesen.GUI.Forms.frmSelectRom.resources".
[00:02:35]   Processing resource file "Forms\Tools\frmRecordAvi.resx" into "obj\Release\Mesen.GUI.Forms.frmRecordAvi.resources".
[00:02:35]   Processing resource file "Updates\frmDownloadProgress.resx" into "obj\Release\Mesen.GUI.Updates.frmDownloadProgress.resources".
[00:02:35]   Processing resource file "Updates\frmUpdatePrompt.resx" into "obj\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources".
[00:02:35]   Processing resource file "Properties\Resources.resx" into "obj\Release\Mesen.GUI.Properties.Resources.resources".
[00:02:35] CoreCompile:
[00:02:35]   C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\csc.exe /noconfig /nowarn:1701,1702 /fullpaths /nostdlib+ /platform:AnyCPU /errorreport:prompt /define:HIDETESTMENU;AUTOBUILD /highentropyva+ /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\Microsoft.CSharp.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\mscorlib.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Core.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.DataSetExtensions.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Data.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Drawing.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.IO.Compression.FileSystem.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Windows.Forms.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.dll" /reference:"C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETFramework\v4.5\System.Xml.Linq.dll" /debug:pdbonly /filealign:512 /optimize+ /out:obj\Release\Mesen-S.exe /ruleset:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Team Tools\Static Analysis Tools\\Rule Sets\MinimumRecommendedRules.ruleset" /subsystemversion:6.00 /resource:obj\Release\Mesen.GUI.Forms.Config.ctrlPathSelection.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlRecentGame.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlRecentGames.resources /resource:obj\Release\Mesen.GUI.Controls.MesenNumericUpDown.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlHorizontalTrackbar.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlLoadingRom.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlRiskyOption.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlTrackbar.resources /resource:obj\Release\Mesen.GUI.Controls.ctrlRenderer.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlBreakpoints.resources /resource:obj\Release\Mesen.GUI.Debugger.frmBreakpoint.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlCallstack.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlCx4Status.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlNecDspStatus.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlGameboyStatus.resources /resource:obj\Release\Mesen.GUI.Forms.frmDebugLog.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlMemoryAccessCounters.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlPpuStatus.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlGsuStatus.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlSpcStatus.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlCpuStatus.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlDbgShortcuts.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlDisassemblyView.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlEventViewerFilters.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlEventViewerListView.resources /resource:obj\Release\Mesen.GUI.Debugger.frmAssembler.resources /resource:obj\Release\Mesen.GUI.Debugger.frmBreakIn.resources /resource:obj\Release\Mesen.GUI.Debugger.frmBreakOn.resources /resource:obj\Release\Mesen.GUI.Debugger.frmIntegrationSettings.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlLabelList.resources /resource:obj\Release\Mesen.GUI.Debugger.frmEditLabel.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlHexViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlWatch.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlEventViewerPpuView.resources /resource:obj\Release\Mesen.GUI.Debugger.frmEventViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmDbgPreferences.resources /resource:obj\Release\Mesen.GUI.Debugger.frmDbgShortcutGetKey.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlScrollableTextbox.resources /resource:obj\Release\Mesen.GUI.Debugger.frmDebugger.resources /resource:obj\Release\Mesen.GUI.Debugger.frmFadeSpeed.resources /resource:obj\Release\Mesen.GUI.Debugger.frmGoToLine.resources /resource:obj\Release\Mesen.GUI.Debugger.frmMemoryTools.resources /resource:obj\Release\Mesen.GUI.Debugger.frmMemoryToolsColors.resources /resource:obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlImagePanel.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlPropertyList.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlScanlineCycleSelect.resources /resource:obj\Release\Mesen.GUI.Debugger.PpuViewer.ctrlSpriteList.resources /resource:obj\Release\Mesen.GUI.Debugger.frmPaletteViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmSpriteViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmRegisterViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmTileViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmTilemapViewer.resources /resource:obj\Release\Mesen.GUI.Debugger.frmTraceLogger.resources /resource:obj\Release\Be.Windows.Forms.HexBox.resources /resource:obj\Release\Mesen.GUI.Debugger.Controls.ctrlProfiler.resources /resource:obj\Release\Mesen.GUI.Debugger.frmProfiler.resources /resource:obj\Release\FastColoredTextBoxNS.FastColoredTextBox.resources /resource:obj\Release\FastColoredTextBoxNS.FindForm.resources /resource:obj\Release\FastColoredTextBoxNS.GoToForm.resources /resource:obj\Release\FastColoredTextBoxNS.HotkeysEditorForm.resources /resource:obj\Release\FastColoredTextBoxNS.ReplaceForm.resources /resource:obj\Release\Mesen.GUI.Debugger.frmScript.resources /resource:obj\Release\Mesen.GUI.Debugger.ctrlTooltip.resources /resource:obj\Release\Mesen.GUI.Forms.BaseConfigForm.resources /resource:obj\Release\Mesen.GUI.Forms.BaseForm.resources /resource:obj\Release\Mesen.GUI.Forms.BaseInputForm.resources /resource:obj\Release\Mesen.GUI.Forms.Config.BaseInputConfigForm.resources /resource:obj\Release\Mesen.GUI.Forms.Config.ctrlEmulatorShortcuts.resources /resource:obj\Release\Mesen.GUI.Forms.Config.ctrlKeyBindingHint.resources /resource:obj\Release\Mesen.GUI.Forms.Config.ctrlStandardController.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmAudioConfig.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmControllerConfig.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmCopyFiles.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmGameboyConfig.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmInputConfig.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmEmulationConfig.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmGetKey.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmPreferences.resources /resource:obj\Release\Mesen.GUI.Forms.Config.frmVideoConfig.resources /resource:obj\Release\Mesen.GUI.Forms.frmAbout.resources /resource:obj\Release\Mesen.GUI.Forms.frmConfigWizard.resources /resource:obj\Release\Mesen.GUI.Forms.frmRecordMovie.resources /resource:obj\Release\Mesen.GUI.Forms.NetPlay.frmClientConfig.resources /resource:obj\Release\Mesen.GUI.Forms.NetPlay.frmPlayerProfile.resources /resource:obj\Release\Mesen.GUI.Forms.NetPlay.frmServerConfig.resources /resource:obj\Release\Mesen.GUI.Forms.frmCheat.resources /resource:obj\Release\Mesen.GUI.Forms.frmCheatDbList.resources /resource:obj\Release\Mesen.GUI.Forms.frmCheatList.resources /resource:obj\Release\Mesen.GUI.Forms.frmLogWindow.resources /resource:obj\Release\Mesen.GUI.Forms.frmMain.resources /resource:obj\Release\Mesen.GUI.Forms.frmSelectRom.resources /resource:obj\Release\Mesen.GUI.Forms.frmRecordAvi.resources /resource:obj\Release\Mesen.GUI.Updates.frmDownloadProgress.resources /resource:obj\Release\Mesen.GUI.Updates.frmUpdatePrompt.resources /resource:obj\Release\Mesen.GUI.Properties.Resources.resources /resource:"..\bin\Any CPU\Release\Dependencies.zip",Mesen.GUI.Dependencies.Dependencies.zip /target:winexe /utf8output /win32icon:Resources\Icon.ico /win32manifest:app.manifest /langversion:7.3 /analyzerconfig:C:\projects\mesen-s\.editorconfig Config\AudioConfig.cs Config\DbgIntegrationConfig.cs Config\AviRecordConfig.cs Config\BaseConfig.cs Config\ConfigAttributes.cs Config\Configuration.cs Config\ConfigManager.cs Config\CheatCodes.cs Config\GameboyConfig.cs Config\InputConfig.cs Config\FileAssociationHelper.cs Config\CheatWindowConfig.cs Config\MovieRecordConfig.cs Config\PreferencesConfig.cs Config\Shortcuts\EmulatorShortcut.cs Config\Shortcuts\KeyCombination.cs Config\Shortcuts\ShortcutKeyInfo.cs Config\EmulationConfig.cs Config\NetplayConfig.cs Config\VideoConfig.cs Controls\ctrlLinkLabel.cs Controls\ctrlRecentGame.cs Controls\ctrlRecentGame.Designer.cs Controls\ctrlRecentGames.cs Controls\ctrlRecentGames.Designer.cs Debugger\Breakpoints\Breakpoint.cs Debugger\Breakpoints\BreakpointManager.cs Debugger\Breakpoints\ctrlBreakpoints.cs Debugger\Breakpoints\ctrlBreakpoints.Designer.cs Debugger\Breakpoints\frmBreakpoint.cs Debugger\Breakpoints\frmBreakpoint.Designer.cs Debugger\Breakpoints\InteropBreakpoint.cs Debugger\Code\BaseStyleProvider.cs Debugger\Code\CodeHighlighting.cs Debugger\Code\GbDisassemblyManager.cs Debugger\Code\Cx4DisassemblyManager.cs Debugger\Code\GbLineStyleProvider.cs Debugger\Code\Cx4LineStyleProvider.cs Debugger\Code\NecDspLineStyleProvider.cs Debugger\Code\NecDspDisassemblyManager.cs Debugger\Code\Sa1LineStyleProvider.cs Debugger\Code\SymbolCodeDataProvider.cs Debugger\Code\Sa1DisassemblyManager.cs Debugger\Code\GsuDisassemblyManager.cs Debugger\Code\GsuLineStyleProvider.cs Debugger\Code\SpcLineStyleProvider.cs Debugger\Code\CodeDataProvider.cs Debugger\Code\SpcDisassemblyManager.cs Debugger\Code\CpuDisassemblyManager.cs Debugger\Code\CpuLineStyleProvider.cs Debugger\Code\IDisassemblyManager.cs Debugger\Config\DebuggerShortcutsConfig.cs Debugger\Config\DebuggerInfo.cs Debugger\Config\AssemblerConfig.cs Debugger\Config\DebugLogConfig.cs Debugger\Config\ProfilerConfig.cs Debugger\Config\ScriptWindowConfig.cs Debugger\Config\SpriteViewerConfig.cs Debugger\Config\RegisterViewerConfig.cs Debugger\Config\TileViewerConfig.cs Debugger\Config\TilemapViewerConfig.cs Debugger\Controls\ctrlCx4Status.cs Debugger\Controls\ctrlCx4Status.Designer.cs Debugger\Controls\ctrlMemoryMapping.cs Debugger\Controls\ctrlNecDspStatus.cs Debugger\Controls\ctrlNecDspStatus.Designer.cs Debugger\Controls\ctrlMemoryType.cs Debugger\Controls\ctrlGameboyStatus.cs Debugger\Controls\ctrlGameboyStatus.Designer.cs Debugger\frmDebugLog.cs Debugger\frmDebugLog.Designer.cs Debugger\Integration\RgbdsSymbolFile.cs Debugger\Integration\BassLabelFile.cs Debugger\MemoryTools\ctrlMemoryAccessCounters.cs Debugger\MemoryTools\ctrlMemoryAccessCounters.Designer.cs Debugger\Controls\ctrlPanel.cs Debugger\Controls\ctrlPpuStatus.cs Debugger\Controls\ctrlPpuStatus.Designer.cs Debugger\Controls\ctrlGsuStatus.cs Debugger\Controls\ctrlGsuStatus.Designer.cs Debugger\Controls\ctrlSearchResult.cs Debugger\Controls\ctrlSearchResult.Designer.cs Debugger\Controls\ctrlSpcStatus.cs Debugger\Controls\ctrlSpcStatus.Designer.cs Debugger\EventViewer\ctrlEventViewerFilters.cs Debugger\EventViewer\ctrlEventViewerFilters.Designer.cs Debugger\EventViewer\ctrlEventViewerListView.cs Debugger\EventViewer\ctrlEventViewerListView.Designer.cs Debugger\frmAssembler.cs Debugger\frmAssembler.Designer.cs Debugger\frmBreakIn.cs Debugger\frmBreakIn.Designer.cs Debugger\frmBreakOn.cs Debugger\frmBreakOn.Designer.cs Debugger\frmDebuggerColors.cs Debugger\frmDebuggerColors.Designer.cs Debugger\frmGoToAll.cs Debugger\frmGoToAll.Designer.cs Debugger\Integration\DbgImporter.cs Debugger\Integration\frmIntegrationSettings.cs Debugger\Integration\frmIntegrationSettings.Designer.cs Debugger\Integration\ISymbolProvider.cs Debugger\Integration\WlaDxImporter.cs Debugger\Labels\CodeLabel.cs Debugger\Labels\ctrlLabelList.cs Debugger\Labels\ctrlLabelList.Designer.cs Debugger\Labels\frmEditLabel.cs Debugger\Labels\frmEditLabel.Designer.cs Debugger\Labels\LabelManager.cs Debugger\Labels\MslLabelFile.cs Debugger\PpuViewer\ctrlImagePanel.cs Debugger\PpuViewer\ctrlImagePanel.Designer.cs Debugger\PpuViewer\ctrlImageViewer.cs Debugger\PpuViewer\ctrlPropertyList.cs Debugger\PpuViewer\ctrlPropertyList.Designer.cs Debugger\PpuViewer\ctrlSpriteList.cs Debugger\PpuViewer\ctrlSpriteList.Designer.cs Debugger\PpuViewer\frmSpriteViewer.cs Debugger\PpuViewer\frmSpriteViewer.Designer.cs Debugger\PpuViewer\frmRegisterViewer.cs Debugger\PpuViewer\frmRegisterViewer.Designer.cs Debugger\PpuViewer\SpriteInfo.cs Debugger\PpuViewer\WindowRefreshManager.cs Debugger\Profiler\ctrlProfiler.cs Debugger\Profiler\ctrlProfiler.Designer.cs Debugger\Profiler\frmProfiler.cs Debugger\Profiler\frmProfiler.Designer.cs Debugger\Scripts\FastColoredTextBox\AutocompleteItem.cs Debugger\Scripts\FastColoredTextBox\AutocompleteMenu.cs Debugger\Scripts\FastColoredTextBox\Bookmarks.cs Debugger\Scripts\FastColoredTextBox\Char.cs Debugger\Scripts\FastColoredTextBox\CommandManager.cs Debugger\Scripts\FastColoredTextBox\Commands.cs Debugger\Scripts\FastColoredTextBox\DocumentMap.cs Debugger\Scripts\FastColoredTextBox\EncodingDetector.cs Debugger\Scripts\FastColoredTextBox\ExportToHTML.cs Debugger\Scripts\FastColoredTextBox\ExportToRTF.cs Debugger\Scripts\FastColoredTextBox\FastColoredTextBox.cs Debugger\Scripts\FastColoredTextBox\FileTextSource.cs Debugger\Scripts\FastColoredTextBox\FindForm.cs Debugger\Scripts\FastColoredTextBox\FindForm.designer.cs Debugger\Scripts\FastColoredTextBox\GoToForm.cs Debugger\Scripts\FastColoredTextBox\GoToForm.designer.cs Debugger\Scripts\FastColoredTextBox\Hints.cs Debugger\Scripts\FastColoredTextBox\Hotkeys.cs Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.cs Debugger\Scripts\FastColoredTextBox\HotkeysEditorForm.designer.cs Debugger\Scripts\FastColoredTextBox\LimitedStack.cs Debugger\Scripts\FastColoredTextBox\Line.cs Debugger\Scripts\FastColoredTextBox\LinesAccessor.cs Debugger\Scripts\FastColoredTextBox\MacrosManager.cs Debugger\Scripts\FastColoredTextBox\MonoUtility.cs Debugger\Scripts\FastColoredTextBox\NativeMethods.cs Debugger\Scripts\FastColoredTextBox\NativeMethodsWrapper.cs Debugger\Scripts\FastColoredTextBox\Place.cs Debugger\Scripts\FastColoredTextBox\PlatformType.cs Debugger\Scripts\FastColoredTextBox\Range.cs Debugger\Scripts\FastColoredTextBox\ReplaceForm.cs Debugger\Scripts\FastColoredTextBox\ReplaceForm.designer.cs Debugger\Scripts\FastColoredTextBox\Ruler.cs Debugger\Scripts\FastColoredTextBox\Ruler.designer.cs Debugger\Scripts\FastColoredTextBox\Style.cs Debugger\Scripts\FastColoredTextBox\SyntaxDescriptor.cs Debugger\Scripts\FastColoredTextBox\SyntaxHighlighter.cs Debugger\Scripts\FastColoredTextBox\TextSource.cs Debugger\Scripts\FastColoredTextBox\TypeDescriptor.cs Debugger\Scripts\FastColoredTextBox\UnfocusablePanel.cs Debugger\Scripts\FastColoredTextBox\VisualMarker.cs Debugger\Scripts\frmScript.cs Debugger\Scripts\frmScript.Designer.cs Debugger\Tooltips\ctrlTooltip.cs Debugger\Tooltips\ctrlTooltip.Designer.cs Debugger\Workspace\DebugWorkspace.cs Debugger\Config\EventViewerConfig.cs Debugger\Config\HexEditorInfo.cs Config\RecentItems.cs Debugger\Config\TraceLoggerInfo.cs Debugger\Config\DebugInfo.cs Controls\BaseControl.cs Controls\ctrlAutoGrowLabel.cs Controls\ctrlHorizontalTrackbar.cs Controls\ctrlHorizontalTrackbar.Designer.cs Controls\ctrlLoadingRom.cs Controls\ctrlLoadingRom.Designer.cs Controls\ctrlMesenContextMenuStrip.cs Controls\ctrlMesenMenuStrip.cs Controls\ctrlMesenPictureBox.cs Controls\ctrlMesenToolStrip.cs Controls\ctrlPathSelection.cs Controls\ctrlPathSelection.Designer.cs Controls\MesenNumericUpDown.cs Controls\ctrlRiskyOption.cs Controls\ctrlRiskyOption.Designer.cs Controls\ctrlSplitContainer.cs Controls\ctrlTrackbar.cs Controls\ctrlTrackbar.Designer.cs Controls\ctrlRenderer.cs Controls\ctrlRenderer.Designer.cs Controls\MyListView.cs Debugger\CodeLineData.cs Debugger\Controls\ComboBoxWithSeparator.cs Debugger\Controls\ctrlCallstack.cs Debugger\Controls\ctrlCallstack.Designer.cs Debugger\Controls\ctrlColorPicker.cs Debugger\Controls\ctrlCpuStatus.cs Debugger\Controls\ctrlCpuStatus.Designer.cs Debugger\Controls\ctrlDbgShortcuts.cs Debugger\Controls\ctrlDbgShortcuts.Designer.cs Debugger\Controls\ctrlDisassemblyView.cs Debugger\Controls\ctrlDisassemblyView.Designer.cs Debugger\MemoryTools\ByteColorProvider.cs Debugger\MemoryTools\ctrlHexViewer.cs Debugger\MemoryTools\ctrlHexViewer.Designer.cs Debugger\Controls\ctrlWatch.cs Debugger\Controls\ctrlWatch.Designer.cs Debugger\EventViewer\ctrlEventViewerPpuView.cs Debugger\EventViewer\ctrlEventViewerPpuView.Designer.cs Debugger\EventViewer\frmEventViewer.cs Debugger\EventViewer\frmEventViewer.Designer.cs Debugger\frmDbgPreferences.cs Debugger\frmDbgPreferences.Designer.cs Debugger\frmDbgShortcutGetKey.cs Debugger\frmDbgShortcutGetKey.Designer.cs Debugger\Controls\ctrlCodeScrollbar.cs Debugger\Controls\ctrlTextbox.cs Debugger\Controls\ctrlTextbox.Designer.cs Debugger\Controls\ctrlScrollableTextbox.cs Debugger\Controls\ctrlScrollableTextbox.Designer.cs Debugger\FontDialogHelper.cs Debugger\frmDebugger.cs Debugger\frmDebugger.Designer.cs Debugger\MemoryTools\frmFadeSpeed.cs Debugger\MemoryTools\frmFadeSpeed.Designer.cs Debugger\frmGoToLine.cs Debugger\frmGoToLine.Designer.cs Debugger\MemoryTools\frmMemoryTools.cs Debugger\MemoryTools\frmMemoryTools.Designer.cs Debugger\GraphicsExtensions.cs Debugger\MemoryTools\frmMemoryViewerColors.cs Debugger\MemoryTools\frmMemoryViewerColors.Designer.cs Debugger\MemoryTools\TblByteCharConverter.cs Debugger\PpuViewer\ctrlPaletteViewer.cs Debugger\PpuViewer\ctrlScanlineCycleSelect.cs Debugger\PpuViewer\ctrlScanlineCycleSelect.Designer.cs Debugger\PpuViewer\frmPaletteViewer.cs Debugger\PpuViewer\frmPaletteViewer.Designer.cs Debugger\PpuViewer\frmTileViewer.cs Debugger\PpuViewer\frmTileViewer.Designer.cs Debugger\PpuViewer\frmTilemapViewer.cs Debugger\PpuViewer\frmTilemapViewer.Designer.cs Debugger\frmTraceLogger.cs Debugger\frmTraceLogger.Designer.cs Debugger\Controls\TextboxHistory.cs Debugger\HexBox\BuiltInContextMenu.cs Debugger\HexBox\ByteCharConverters.cs Debugger\HexBox\ByteCollection.cs Debugger\HexBox\BytePositionInfo.cs Debugger\HexBox\DataBlock.cs Debugger\HexBox\DataMap.cs Debugger\HexBox\DynamicByteProvider.cs Debugger\HexBox\FileDataBlock.cs Debugger\HexBox\FindOptions.cs Debugger\HexBox\HexBox.cs Debugger\HexBox\HexCasing.cs Debugger\HexBox\IByteColorProvider.cs Debugger\HexBox\IByteProvider.cs Debugger\HexBox\MemoryDataBlock.cs Debugger\HexBox\NativeMethods.cs Debugger\HexBox\StaticByteProvider.cs Debugger\HexBox\Util.cs Debugger\MemoryTools\TblLoader.cs Debugger\DebugWindowManager.cs Debugger\WatchManager.cs Debugger\Workspace\DebugWorkspaceManager.cs Emulation\CursorManager.cs Emulation\DisplayManager.cs Emulation\SaveStateManager.cs Forms\BaseConfigForm.Designer.cs Forms\BaseForm.cs Forms\BaseConfigForm.cs Forms\BaseInputForm.cs Forms\Config\Controllers\BaseInputConfigControl.cs Forms\Config\Controllers\BaseInputConfigForm.cs Forms\Config\ctrlEmulatorShortcuts.cs Forms\Config\ctrlEmulatorShortcuts.Designer.cs Forms\Config\Controllers\ctrlKeyBindingHint.cs Forms\Config\Controllers\ctrlKeyBindingHint.Designer.cs Forms\Config\Controllers\ctrlStandardController.cs Forms\Config\Controllers\ctrlStandardController.Designer.cs Forms\Config\frmAudioConfig.cs Forms\Config\frmAudioConfig.Designer.cs Forms\Config\Controllers\frmControllerConfig.cs Forms\Config\Controllers\frmControllerConfig.Designer.cs Forms\Config\frmCopyFiles.cs Forms\Config\frmCopyFiles.Designer.cs Forms\Config\frmGameboyConfig.cs Forms\Config\frmGameboyConfig.Designer.cs Forms\Config\frmInputConfig.cs Forms\Config\frmInputConfig.Designer.cs Forms\Config\frmEmulationConfig.cs Forms\Config\frmEmulationConfig.Designer.cs Forms\Config\frmGetKey.cs Forms\Config\frmGetKey.Designer.cs Forms\Config\frmPreferences.cs Forms\Config\frmPreferences.Designer.cs Forms\Config\frmVideoConfig.cs Forms\Config\frmVideoConfig.Designer.cs Forms\Config\KeyPresets.cs Forms\EntityBinder.cs Forms\frmAbout.cs Forms\frmAbout.Designer.cs Forms\frmConfigWizard.cs Forms\frmConfigWizard.Designer.cs Forms\frmFullscreenRenderer.cs Forms\Config\frmRecordMovie.cs Forms\Config\frmRecordMovie.Designer.cs Forms\MonoThemeHelper.cs Forms\MonoToolStripHelper.cs Forms\NetPlay\frmClientConfig.cs Forms\NetPlay\frmClientConfig.Designer.cs Forms\NetPlay\frmPlayerProfile.cs Forms\NetPlay\frmPlayerProfile.Designer.cs Forms\NetPlay\frmServerConfig.cs Forms\NetPlay\frmServerConfig.Designer.cs Forms\Tools\CheatDatabase.cs Forms\Tools\frmCheat.cs Forms\Tools\frmCheat.Designer.cs Forms\Tools\frmCheatDbList.cs Forms\Tools\frmCheatDbList.Designer.cs Forms\Tools\frmCheatList.cs Forms\Tools\frmCheatList.Designer.cs Forms\Tools\frmLogWindow.cs Forms\Tools\frmLogWindow.Designer.cs Forms\frmMain.cs Forms\frmMain.Designer.cs Forms\frmSelectRom.cs Forms\frmSelectRom.Designer.cs Forms\Tools\frmRecordAvi.cs Forms\Tools\frmRecordAvi.Designer.cs Interop\DebugState.cs Interop\NetplayApi.cs Interop\RecordApi.cs Interop\TestApi.cs Updates\frmDownloadProgress.cs Updates\frmDownloadProgress.Designer.cs Updates\frmUpdatePrompt.cs Updates\frmUpdatePrompt.Designer.cs Forms\MesenMsgBox.cs Forms\OpenSaveFileDialogExtensions.cs Forms\ResourceHelper.cs Forms\ResourcePath.cs Emulation\ShortcutHandler.cs Interop\DebugApi.cs Interop\ConfigApi.cs Interop\InputApi.cs Interop\EmuApi.cs Interop\NotificationListener.cs Interop\Utf8Marshaler.cs Program.cs Properties\AssemblyInfo.cs ResourceExtractor.cs Emulation\EmuRunner.cs RuntimeChecker.cs SingleInstance.cs Utilities\ArchiveHelper.cs Utilities\FirmwareHelper.cs Utilities\CommandLineHelper.cs Utilities\FolderHelper.cs Utilities\HexConverter.cs Utilities\ImageExtensions.cs Utilities\InBackgroundHelper.cs Utilities\Md5Helper.cs Updates\UpdateHelper.cs Utilities\NetPlayHelper.cs Utilities\RandomGameHelper.cs Utilities\RomTestHelper.cs Utilities\XmlColor.cs Properties\Resources.Designer.cs Properties\Settings.Designer.cs "obj\Release\.NETFramework,Version=v4.5.AssemblyAttributes.cs"
[00:02:35]   Using shared compilation with compiler from directory: C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn
[00:02:38] _CopyOutOfDateSourceItemsToOutputDirectoryAlways:
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\CheatDb.xml" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\CheatDb.xml".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\PixelFont.ttf" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\PixelFont.ttf".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\resources.en.xml" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\resources.en.xml".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LICENSE.txt" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\LICENSE.txt".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0120-0.bin" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Satellaview\BSX0120-0.bin".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0121-0.bin" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Satellaview\BSX0121-0.bin".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0122-0.bin" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Satellaview\BSX0122-0.bin".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0123-0.bin" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Satellaview\BSX0123-0.bin".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Satellaview\BSX0124-0.bin" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Satellaview\BSX0124-0.bin".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\DrawMode.lua" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\LuaScripts\DrawMode.lua".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\Example.lua" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\LuaScripts\Example.lua".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\Grid.lua" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\LuaScripts\Grid.lua".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\LuaScripts\NtscSafeArea.lua" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\LuaScripts\NtscSafeArea.lua".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Font.24.spritefont" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Font.24.spritefont".
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\Dependencies\Font.64.spritefont" to "C:\projects\mesen-s\bin\Any CPU\Release\Dependencies\Font.64.spritefont".
[00:02:38] CopyFilesToOutputDirectory:
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\obj\Release\Mesen-S.exe" to "C:\projects\mesen-s\bin\Any CPU\Release\Mesen-S.exe".
[00:02:38]   UI -> C:\projects\mesen-s\bin\Any CPU\Release\Mesen-S.exe
[00:02:38]   Copying file from "C:\projects\mesen-s\UI\obj\Release\Mesen-S.pdb" to "C:\projects\mesen-s\bin\Any CPU\Release\Mesen-S.pdb".
[00:02:38] Done Building Project "C:\projects\mesen-s\UI\UI.csproj" (default targets).
[00:02:38] Done Building Project "C:\projects\mesen-s\UI\UI.csproj.metaproj" (default targets).
[00:02:38] Done Building Project "C:\projects\mesen-s\Mesen-S.sln" (Build target(s)).
[00:02:38] 
[00:02:38] Build succeeded.
[00:02:38]     0 Warning(s)
[00:02:38]     0 Error(s)
[00:02:38] 
[00:02:38] Time Elapsed 00:00:06.69
[00:02:38] copy "Any CPU\Release\Mesen-S.exe" ..\Mesen-S-%APPVEYOR_BUILD_VERSION%.exe
[00:02:39]         1 file(s) copied.
[00:02:39] Discovering tests...OK
[00:02:39] Collecting artifacts...
[00:02:39] Found artifact 'Mesen-S-DevWin-0.4.0.67.exe' matching 'Mesen-S*.exe' path
[00:02:39] Uploading artifacts...
[00:02:39] 
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...2%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...10%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...20%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...30%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...40%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...50%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...60%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...70%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...80%
[00:02:40] [1/1] Mesen-S-DevWin-0.4.0.67.exe (3,318,272 bytes)...100%
[00:02:40] Build success
