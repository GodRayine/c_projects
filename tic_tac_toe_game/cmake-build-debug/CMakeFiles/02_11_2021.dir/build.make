# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\02_11_2021.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\02_11_2021.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\02_11_2021.dir\flags.make

CMakeFiles\02_11_2021.dir\main.cpp.obj: CMakeFiles\02_11_2021.dir\flags.make
CMakeFiles\02_11_2021.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/02_11_2021.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\02_11_2021.dir\main.cpp.obj /FdCMakeFiles\02_11_2021.dir\ /FS -c C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\main.cpp
<<

CMakeFiles\02_11_2021.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/02_11_2021.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\02_11_2021.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\main.cpp
<<

CMakeFiles\02_11_2021.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/02_11_2021.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\02_11_2021.dir\main.cpp.s /c C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\main.cpp
<<

# Object files for target 02_11_2021
02_11_2021_OBJECTS = \
"CMakeFiles\02_11_2021.dir\main.cpp.obj"

# External object files for target 02_11_2021
02_11_2021_EXTERNAL_OBJECTS =

02_11_2021.exe: CMakeFiles\02_11_2021.dir\main.cpp.obj
02_11_2021.exe: CMakeFiles\02_11_2021.dir\build.make
02_11_2021.exe: CMakeFiles\02_11_2021.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 02_11_2021.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\02_11_2021.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\02_11_2021.dir\objects1.rsp @<<
 /out:02_11_2021.exe /implib:02_11_2021.lib /pdb:C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug\02_11_2021.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\02_11_2021.dir\build: 02_11_2021.exe
.PHONY : CMakeFiles\02_11_2021.dir\build

CMakeFiles\02_11_2021.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\02_11_2021.dir\cmake_clean.cmake
.PHONY : CMakeFiles\02_11_2021.dir\clean

CMakeFiles\02_11_2021.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug C:\Users\nub99\Desktop\c_projects\tic_tac_toe_game\cmake-build-debug\CMakeFiles\02_11_2021.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\02_11_2021.dir\depend

