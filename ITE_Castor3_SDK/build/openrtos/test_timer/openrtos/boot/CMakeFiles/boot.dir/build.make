# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.1

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
CMAKE_COMMAND = D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/tool/bin/cmake.exe

# The command to remove a file.
RM = D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/tool/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer

# Include any dependencies generated for this target.
include openrtos/boot/CMakeFiles/boot.dir/depend.make

# Include the progress variables for this target.
include openrtos/boot/CMakeFiles/boot.dir/progress.make

# Include the compile flags for this target's objects.
include openrtos/boot/CMakeFiles/boot.dir/flags.make

openrtos/boot/CMakeFiles/boot.dir/init.c.obj: openrtos/boot/CMakeFiles/boot.dir/flags.make
openrtos/boot/CMakeFiles/boot.dir/init.c.obj: ../../../openrtos/boot/init.c
	$(CMAKE_COMMAND) -E cmake_progress_report D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object openrtos/boot/CMakeFiles/boot.dir/init.c.obj"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/boot.dir/init.c.obj   -c D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/init.c

openrtos/boot/CMakeFiles/boot.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/boot.dir/init.c.i"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -E D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/init.c > CMakeFiles/boot.dir/init.c.i

openrtos/boot/CMakeFiles/boot.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/boot.dir/init.c.s"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -S D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/init.c -o CMakeFiles/boot.dir/init.c.s

openrtos/boot/CMakeFiles/boot.dir/init.c.obj.requires:
.PHONY : openrtos/boot/CMakeFiles/boot.dir/init.c.obj.requires

openrtos/boot/CMakeFiles/boot.dir/init.c.obj.provides: openrtos/boot/CMakeFiles/boot.dir/init.c.obj.requires
	$(MAKE) -f openrtos/boot/CMakeFiles/boot.dir/build.make openrtos/boot/CMakeFiles/boot.dir/init.c.obj.provides.build
.PHONY : openrtos/boot/CMakeFiles/boot.dir/init.c.obj.provides

openrtos/boot/CMakeFiles/boot.dir/init.c.obj.provides.build: openrtos/boot/CMakeFiles/boot.dir/init.c.obj

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj: openrtos/boot/CMakeFiles/boot.dir/flags.make
openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj: ../../../openrtos/boot/fa626/sync.c
	$(CMAKE_COMMAND) -E cmake_progress_report D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/boot.dir/fa626/sync.c.obj   -c D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/fa626/sync.c

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/boot.dir/fa626/sync.c.i"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -E D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/fa626/sync.c > CMakeFiles/boot.dir/fa626/sync.c.i

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/boot.dir/fa626/sync.c.s"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && C:/ITEGCC/bin/arm-none-eabi-gcc.exe  $(C_DEFINES) $(C_FLAGS) -S D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot/fa626/sync.c -o CMakeFiles/boot.dir/fa626/sync.c.s

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.requires:
.PHONY : openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.requires

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.provides: openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.requires
	$(MAKE) -f openrtos/boot/CMakeFiles/boot.dir/build.make openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.provides.build
.PHONY : openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.provides

openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.provides.build: openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj

# Object files for target boot
boot_OBJECTS = \
"CMakeFiles/boot.dir/init.c.obj" \
"CMakeFiles/boot.dir/fa626/sync.c.obj"

# External object files for target boot
boot_EXTERNAL_OBJECTS =

lib/fa626/libboot.a: openrtos/boot/CMakeFiles/boot.dir/init.c.obj
lib/fa626/libboot.a: openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj
lib/fa626/libboot.a: openrtos/boot/CMakeFiles/boot.dir/build.make
lib/fa626/libboot.a: openrtos/boot/CMakeFiles/boot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library ../../lib/fa626/libboot.a"
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && $(CMAKE_COMMAND) -P CMakeFiles/boot.dir/cmake_clean_target.cmake
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
openrtos/boot/CMakeFiles/boot.dir/build: lib/fa626/libboot.a
.PHONY : openrtos/boot/CMakeFiles/boot.dir/build

openrtos/boot/CMakeFiles/boot.dir/requires: openrtos/boot/CMakeFiles/boot.dir/init.c.obj.requires
openrtos/boot/CMakeFiles/boot.dir/requires: openrtos/boot/CMakeFiles/boot.dir/fa626/sync.c.obj.requires
.PHONY : openrtos/boot/CMakeFiles/boot.dir/requires

openrtos/boot/CMakeFiles/boot.dir/clean:
	cd D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot && $(CMAKE_COMMAND) -P CMakeFiles/boot.dir/cmake_clean.cmake
.PHONY : openrtos/boot/CMakeFiles/boot.dir/clean

openrtos/boot/CMakeFiles/boot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/openrtos/boot D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot D:/Project/Doorbell/20171201_Doorbell_SDK_v1.2.3.2_64c33b/ITE_Castor3_SDK/build/openrtos/test_timer/openrtos/boot/CMakeFiles/boot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : openrtos/boot/CMakeFiles/boot.dir/depend
