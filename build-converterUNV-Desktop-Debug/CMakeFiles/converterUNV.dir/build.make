# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/converterUNV.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/converterUNV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/converterUNV.dir/flags.make

CMakeFiles/converterUNV.dir/FileConverter.cpp.o: CMakeFiles/converterUNV.dir/flags.make
CMakeFiles/converterUNV.dir/FileConverter.cpp.o: /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/FileConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/converterUNV.dir/FileConverter.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/converterUNV.dir/FileConverter.cpp.o -c /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/FileConverter.cpp

CMakeFiles/converterUNV.dir/FileConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/converterUNV.dir/FileConverter.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/FileConverter.cpp > CMakeFiles/converterUNV.dir/FileConverter.cpp.i

CMakeFiles/converterUNV.dir/FileConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/converterUNV.dir/FileConverter.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/FileConverter.cpp -o CMakeFiles/converterUNV.dir/FileConverter.cpp.s

CMakeFiles/converterUNV.dir/FileConverter.cpp.o.requires:

.PHONY : CMakeFiles/converterUNV.dir/FileConverter.cpp.o.requires

CMakeFiles/converterUNV.dir/FileConverter.cpp.o.provides: CMakeFiles/converterUNV.dir/FileConverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/converterUNV.dir/build.make CMakeFiles/converterUNV.dir/FileConverter.cpp.o.provides.build
.PHONY : CMakeFiles/converterUNV.dir/FileConverter.cpp.o.provides

CMakeFiles/converterUNV.dir/FileConverter.cpp.o.provides.build: CMakeFiles/converterUNV.dir/FileConverter.cpp.o


CMakeFiles/converterUNV.dir/main.cpp.o: CMakeFiles/converterUNV.dir/flags.make
CMakeFiles/converterUNV.dir/main.cpp.o: /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/converterUNV.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/converterUNV.dir/main.cpp.o -c /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/main.cpp

CMakeFiles/converterUNV.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/converterUNV.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/main.cpp > CMakeFiles/converterUNV.dir/main.cpp.i

CMakeFiles/converterUNV.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/converterUNV.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV/main.cpp -o CMakeFiles/converterUNV.dir/main.cpp.s

CMakeFiles/converterUNV.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/converterUNV.dir/main.cpp.o.requires

CMakeFiles/converterUNV.dir/main.cpp.o.provides: CMakeFiles/converterUNV.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/converterUNV.dir/build.make CMakeFiles/converterUNV.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/converterUNV.dir/main.cpp.o.provides

CMakeFiles/converterUNV.dir/main.cpp.o.provides.build: CMakeFiles/converterUNV.dir/main.cpp.o


# Object files for target converterUNV
converterUNV_OBJECTS = \
"CMakeFiles/converterUNV.dir/FileConverter.cpp.o" \
"CMakeFiles/converterUNV.dir/main.cpp.o"

# External object files for target converterUNV
converterUNV_EXTERNAL_OBJECTS =

converterUNV: CMakeFiles/converterUNV.dir/FileConverter.cpp.o
converterUNV: CMakeFiles/converterUNV.dir/main.cpp.o
converterUNV: CMakeFiles/converterUNV.dir/build.make
converterUNV: CMakeFiles/converterUNV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable converterUNV"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/converterUNV.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/converterUNV.dir/build: converterUNV

.PHONY : CMakeFiles/converterUNV.dir/build

CMakeFiles/converterUNV.dir/requires: CMakeFiles/converterUNV.dir/FileConverter.cpp.o.requires
CMakeFiles/converterUNV.dir/requires: CMakeFiles/converterUNV.dir/main.cpp.o.requires

.PHONY : CMakeFiles/converterUNV.dir/requires

CMakeFiles/converterUNV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/converterUNV.dir/cmake_clean.cmake
.PHONY : CMakeFiles/converterUNV.dir/clean

CMakeFiles/converterUNV.dir/depend:
	cd /home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV /home/v.korchagova/Документы/BMSTU/RKDG2D/converterUNV /home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug /home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug /home/v.korchagova/Документы/BMSTU/RKDG2D/build-converterUNV-Desktop-Debug/CMakeFiles/converterUNV.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/converterUNV.dir/depend

