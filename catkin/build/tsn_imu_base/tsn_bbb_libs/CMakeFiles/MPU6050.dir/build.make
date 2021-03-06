# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build

# Include any dependencies generated for this target.
include tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/depend.make

# Include the progress variables for this target.
include tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/progress.make

# Include the compile flags for this target's objects.
include tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/flags.make

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/flags.make
tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o: /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_libs/src/MPU6050.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o"
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o -c /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_libs/src/MPU6050.cpp

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MPU6050.dir/src/MPU6050.cpp.i"
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_libs/src/MPU6050.cpp > CMakeFiles/MPU6050.dir/src/MPU6050.cpp.i

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MPU6050.dir/src/MPU6050.cpp.s"
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_libs/src/MPU6050.cpp -o CMakeFiles/MPU6050.dir/src/MPU6050.cpp.s

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.requires:
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.requires

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.provides: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.requires
	$(MAKE) -f tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/build.make tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.provides.build
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.provides

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.provides.build: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o

# Object files for target MPU6050
MPU6050_OBJECTS = \
"CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o"

# External object files for target MPU6050
MPU6050_EXTERNAL_OBJECTS =

/home/ubuntu/ros_workspace/tsn_senior_project/catkin/devel/lib/libMPU6050.so: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o
/home/ubuntu/ros_workspace/tsn_senior_project/catkin/devel/lib/libMPU6050.so: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/build.make
/home/ubuntu/ros_workspace/tsn_senior_project/catkin/devel/lib/libMPU6050.so: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/ubuntu/ros_workspace/tsn_senior_project/catkin/devel/lib/libMPU6050.so"
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MPU6050.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/build: /home/ubuntu/ros_workspace/tsn_senior_project/catkin/devel/lib/libMPU6050.so
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/build

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/requires: tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/src/MPU6050.cpp.o.requires
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/requires

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/clean:
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs && $(CMAKE_COMMAND) -P CMakeFiles/MPU6050.dir/cmake_clean.cmake
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/clean

tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/depend:
	cd /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_libs /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs /home/ubuntu/ros_workspace/tsn_senior_project/catkin/build/tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tsn_imu_base/tsn_bbb_libs/CMakeFiles/MPU6050.dir/depend

