# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eman/projects/budget-tracking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eman/projects/budget-tracking/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/budget-tracking.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/budget-tracking.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/budget-tracking.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/budget-tracking.dir/flags.make

budget-tracking_autogen/timestamp: /usr/bin/moc
budget-tracking_autogen/timestamp: /usr/bin/uic
budget-tracking_autogen/timestamp: CMakeFiles/budget-tracking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target budget-tracking"
	/usr/bin/cmake -E cmake_autogen /home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles/budget-tracking_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/eman/projects/budget-tracking/build/Desktop-Debug/budget-tracking_autogen/timestamp

CMakeFiles/budget-tracking.dir/codegen:
.PHONY : CMakeFiles/budget-tracking.dir/codegen

CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o: CMakeFiles/budget-tracking.dir/flags.make
CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o: budget-tracking_autogen/mocs_compilation.cpp
CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o: CMakeFiles/budget-tracking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o -MF CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o -c /home/eman/projects/budget-tracking/build/Desktop-Debug/budget-tracking_autogen/mocs_compilation.cpp

CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eman/projects/budget-tracking/build/Desktop-Debug/budget-tracking_autogen/mocs_compilation.cpp > CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.i

CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eman/projects/budget-tracking/build/Desktop-Debug/budget-tracking_autogen/mocs_compilation.cpp -o CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.s

CMakeFiles/budget-tracking.dir/main.cpp.o: CMakeFiles/budget-tracking.dir/flags.make
CMakeFiles/budget-tracking.dir/main.cpp.o: /home/eman/projects/budget-tracking/main.cpp
CMakeFiles/budget-tracking.dir/main.cpp.o: CMakeFiles/budget-tracking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/budget-tracking.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/budget-tracking.dir/main.cpp.o -MF CMakeFiles/budget-tracking.dir/main.cpp.o.d -o CMakeFiles/budget-tracking.dir/main.cpp.o -c /home/eman/projects/budget-tracking/main.cpp

CMakeFiles/budget-tracking.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/budget-tracking.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eman/projects/budget-tracking/main.cpp > CMakeFiles/budget-tracking.dir/main.cpp.i

CMakeFiles/budget-tracking.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/budget-tracking.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eman/projects/budget-tracking/main.cpp -o CMakeFiles/budget-tracking.dir/main.cpp.s

CMakeFiles/budget-tracking.dir/mainwindow.cpp.o: CMakeFiles/budget-tracking.dir/flags.make
CMakeFiles/budget-tracking.dir/mainwindow.cpp.o: /home/eman/projects/budget-tracking/mainwindow.cpp
CMakeFiles/budget-tracking.dir/mainwindow.cpp.o: CMakeFiles/budget-tracking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/budget-tracking.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/budget-tracking.dir/mainwindow.cpp.o -MF CMakeFiles/budget-tracking.dir/mainwindow.cpp.o.d -o CMakeFiles/budget-tracking.dir/mainwindow.cpp.o -c /home/eman/projects/budget-tracking/mainwindow.cpp

CMakeFiles/budget-tracking.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/budget-tracking.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eman/projects/budget-tracking/mainwindow.cpp > CMakeFiles/budget-tracking.dir/mainwindow.cpp.i

CMakeFiles/budget-tracking.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/budget-tracking.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eman/projects/budget-tracking/mainwindow.cpp -o CMakeFiles/budget-tracking.dir/mainwindow.cpp.s

CMakeFiles/budget-tracking.dir/classes/account.cpp.o: CMakeFiles/budget-tracking.dir/flags.make
CMakeFiles/budget-tracking.dir/classes/account.cpp.o: /home/eman/projects/budget-tracking/classes/account.cpp
CMakeFiles/budget-tracking.dir/classes/account.cpp.o: CMakeFiles/budget-tracking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/budget-tracking.dir/classes/account.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/budget-tracking.dir/classes/account.cpp.o -MF CMakeFiles/budget-tracking.dir/classes/account.cpp.o.d -o CMakeFiles/budget-tracking.dir/classes/account.cpp.o -c /home/eman/projects/budget-tracking/classes/account.cpp

CMakeFiles/budget-tracking.dir/classes/account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/budget-tracking.dir/classes/account.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eman/projects/budget-tracking/classes/account.cpp > CMakeFiles/budget-tracking.dir/classes/account.cpp.i

CMakeFiles/budget-tracking.dir/classes/account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/budget-tracking.dir/classes/account.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eman/projects/budget-tracking/classes/account.cpp -o CMakeFiles/budget-tracking.dir/classes/account.cpp.s

# Object files for target budget-tracking
budget__tracking_OBJECTS = \
"CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/budget-tracking.dir/main.cpp.o" \
"CMakeFiles/budget-tracking.dir/mainwindow.cpp.o" \
"CMakeFiles/budget-tracking.dir/classes/account.cpp.o"

# External object files for target budget-tracking
budget__tracking_EXTERNAL_OBJECTS =

budget-tracking: CMakeFiles/budget-tracking.dir/budget-tracking_autogen/mocs_compilation.cpp.o
budget-tracking: CMakeFiles/budget-tracking.dir/main.cpp.o
budget-tracking: CMakeFiles/budget-tracking.dir/mainwindow.cpp.o
budget-tracking: CMakeFiles/budget-tracking.dir/classes/account.cpp.o
budget-tracking: CMakeFiles/budget-tracking.dir/build.make
budget-tracking: CMakeFiles/budget-tracking.dir/compiler_depend.ts
budget-tracking: /usr/lib/libQt5Widgets.so.5.15.16
budget-tracking: /usr/lib/libQt5Gui.so.5.15.16
budget-tracking: /usr/lib/libQt5Core.so.5.15.16
budget-tracking: CMakeFiles/budget-tracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable budget-tracking"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/budget-tracking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/budget-tracking.dir/build: budget-tracking
.PHONY : CMakeFiles/budget-tracking.dir/build

CMakeFiles/budget-tracking.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/budget-tracking.dir/cmake_clean.cmake
.PHONY : CMakeFiles/budget-tracking.dir/clean

CMakeFiles/budget-tracking.dir/depend: budget-tracking_autogen/timestamp
	cd /home/eman/projects/budget-tracking/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eman/projects/budget-tracking /home/eman/projects/budget-tracking /home/eman/projects/budget-tracking/build/Desktop-Debug /home/eman/projects/budget-tracking/build/Desktop-Debug /home/eman/projects/budget-tracking/build/Desktop-Debug/CMakeFiles/budget-tracking.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/budget-tracking.dir/depend
