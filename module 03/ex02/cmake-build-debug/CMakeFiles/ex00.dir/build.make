# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/divinepet/Desktop/cpp_module_03/ex02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex00.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex00.dir/flags.make

CMakeFiles/ex00.dir/main.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex00.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/main.cpp.o -c /Users/divinepet/Desktop/cpp_module_03/ex02/main.cpp

CMakeFiles/ex00.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/divinepet/Desktop/cpp_module_03/ex02/main.cpp > CMakeFiles/ex00.dir/main.cpp.i

CMakeFiles/ex00.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/divinepet/Desktop/cpp_module_03/ex02/main.cpp -o CMakeFiles/ex00.dir/main.cpp.s

CMakeFiles/ex00.dir/ClapTrap.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/ClapTrap.cpp.o: ../ClapTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex00.dir/ClapTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/ClapTrap.cpp.o -c /Users/divinepet/Desktop/cpp_module_03/ex02/ClapTrap.cpp

CMakeFiles/ex00.dir/ClapTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/ClapTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/divinepet/Desktop/cpp_module_03/ex02/ClapTrap.cpp > CMakeFiles/ex00.dir/ClapTrap.cpp.i

CMakeFiles/ex00.dir/ClapTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/ClapTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/divinepet/Desktop/cpp_module_03/ex02/ClapTrap.cpp -o CMakeFiles/ex00.dir/ClapTrap.cpp.s

CMakeFiles/ex00.dir/ScavTrap.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/ScavTrap.cpp.o: ../ScavTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex00.dir/ScavTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/ScavTrap.cpp.o -c /Users/divinepet/Desktop/cpp_module_03/ex02/ScavTrap.cpp

CMakeFiles/ex00.dir/ScavTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/ScavTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/divinepet/Desktop/cpp_module_03/ex02/ScavTrap.cpp > CMakeFiles/ex00.dir/ScavTrap.cpp.i

CMakeFiles/ex00.dir/ScavTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/ScavTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/divinepet/Desktop/cpp_module_03/ex02/ScavTrap.cpp -o CMakeFiles/ex00.dir/ScavTrap.cpp.s

CMakeFiles/ex00.dir/FragTrap.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/FragTrap.cpp.o: ../FragTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex00.dir/FragTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/FragTrap.cpp.o -c /Users/divinepet/Desktop/cpp_module_03/ex02/FragTrap.cpp

CMakeFiles/ex00.dir/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/FragTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/divinepet/Desktop/cpp_module_03/ex02/FragTrap.cpp > CMakeFiles/ex00.dir/FragTrap.cpp.i

CMakeFiles/ex00.dir/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/FragTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/divinepet/Desktop/cpp_module_03/ex02/FragTrap.cpp -o CMakeFiles/ex00.dir/FragTrap.cpp.s

# Object files for target ex00
ex00_OBJECTS = \
"CMakeFiles/ex00.dir/main.cpp.o" \
"CMakeFiles/ex00.dir/ClapTrap.cpp.o" \
"CMakeFiles/ex00.dir/ScavTrap.cpp.o" \
"CMakeFiles/ex00.dir/FragTrap.cpp.o"

# External object files for target ex00
ex00_EXTERNAL_OBJECTS =

ex00: CMakeFiles/ex00.dir/main.cpp.o
ex00: CMakeFiles/ex00.dir/ClapTrap.cpp.o
ex00: CMakeFiles/ex00.dir/ScavTrap.cpp.o
ex00: CMakeFiles/ex00.dir/FragTrap.cpp.o
ex00: CMakeFiles/ex00.dir/build.make
ex00: CMakeFiles/ex00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ex00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex00.dir/build: ex00
.PHONY : CMakeFiles/ex00.dir/build

CMakeFiles/ex00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex00.dir/clean

CMakeFiles/ex00.dir/depend:
	cd /Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/divinepet/Desktop/cpp_module_03/ex02 /Users/divinepet/Desktop/cpp_module_03/ex02 /Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug /Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug /Users/divinepet/Desktop/cpp_module_03/ex02/cmake-build-debug/CMakeFiles/ex00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex00.dir/depend
