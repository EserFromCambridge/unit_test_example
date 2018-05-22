
# Paths relative to curr directory
export BASE := $(shell pwd)
export SRCBASE := $(shell pwd)

#Set this to @ to keep the makefile quiet
SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = ./gen/bin/full_test_suite

	#--- Inputs ----#
PROJECT_HOME_DIR = ..
CPPUTEST_HOME = ../submodules/cpputest

# --- SRC_FILES ---
# Use SRC_FILES to specifiy individual production code files.
# Both tested and mocked fields need to be here
# These files are compiled and put into the
# ProductionCode library and links with the test runner

# Application

# Device

# Driver

# Helper Functions - need these too as lots of functions use them

# --- TEST_SRC_FILES ---
# TEST_SRC_FILES specifies individual test files to build.  Test
# files are always included in the build and they
# pull in production code from the library
# Test Runner
TEST_SRC_FILES += ./tests/AllTests.cpp
# Individual Tests
TEST_SRC_FILES += ./tests/ExampleTest.cpp

# --- MOCKS_SRC_DIRS ---
# MOCKS_SRC_DIRS specifies a directories where you can put your
# mocks, stubs and fakes.  You can also just put them
# in TEST_SRC_DIRS
MOCKS_SRC_DIRS = \


# Turn on CppUMock
CPPUTEST_USE_EXTENSIONS = Y

INCLUDE_DIRS =\
  .\
  ../application\
  ../device\
  ../driver\
  $(CPPUTEST_HOME)/include\

# This line is overriding the default new macros.  This is helpful
# when using std library includes like <list> and other containers
# so that memory leak detection does not conflict with stl.
CPPUTEST_MEMLEAK_DETECTOR_NEW_MACRO_FILE = -include ./mock/NewMacros.h


# --- CPPUTEST_OBJS_DIR ---
# if you have to use "../" to get to your source path
# the makefile will put the .o and .d files in surprising 
# places.
# To make up for each level of "../", add place holder 
# sub directories in CPPUTEST_OBJS_DIR
# each "../".  It is kind of a kludge, but it causes the
# .o and .d files to be put under objs.
# e.g. if you have "../../src", set to "test-objs/1/2"
# This is set no "../" in the source path.
# CPPUTEST_OBJS_DIR = objs

# Flags
#GCOVFLAGS = -fprofile-arcs -ftest-coverage
CXX = clang++
COMPILER_OPTIONS = -std=c++11 -Wno-c++98-compat -Wc++11-compat -Wno-c++98-compat-pedantic -fms-extensions -DUNIT_TESTING=1 -DMBED_CONF_RTOS_PRESENT=1\
-DDEVICE_I2C=1 -DDISABLE_MEMORY_LEAK_DETECTION 
# Ignore warnings - gradually remove these...
CPPUTEST_WARNINGFLAGS += -Wno-reserved-id-macro -Wno-keyword-macro -Wno-unused-parameter\
 -Wno-sign-conversion -Wno-header-hygiene -Wno-conversion -Wno-documentation -Wno-documentation-unknown-command\
-Wno-return-type -Wno-unused-variable -Wno-covered-switch-default -Wno-unneeded-internal-declaration\
-Wno-format-nonliteral -Wno-missing-prototypes -Wno-unreachable-code-return -Wno-shadow-field-in-constructor -Wno-c99-extensions\
-Wno-unused-macros -Wno-nested-anon-types -Wno-c++14-binary-literal -Wno-missing-field-initializers -Wno-missing-braces\
-Wno-missing-field-initializers

# Set special flags - read start of MakefileWorker.mk for more description of them all
CPPUTEST_OBJS_DIR = ./gen/objs
CPPUTEST_LIB_DIR = ./gen/lib
#CPPUTEST_WARNINGFLAGS += -Wall
#CPPUTEST_WARNINGFLAGS += -Werror
#CPPUTEST_WARNINGFLAGS += -Wswitch-default
#CPPUTEST_WARNINGFLAGS += -Wfatal-errors
#CPPUTEST_CXXFLAGS = -Wno-c++14-compat
#CPPUTEST_CFLAGS = -std=c99
#CPPUTEST_CXXFLAGS += $(CPPUTEST_PLATFORM_CXXFLAGS)
#CPPUTEST_CFLAGS += -Wno-missing-prototypes 
#CPPUTEST_CXXFLAGS += -Wno-missing-variable-declarations
# --- LD_LIBRARIES -- Additional needed libraries can be added here.
# commented out example specifies math library
#LD_LIBRARIES += -lm

# Look at $(CPPUTEST_HOME)/build/MakefileWorker.mk for more controls
include $(CPPUTEST_HOME)/build/MakefileWorker.mk

# Need to add compiler options last or MakefileWorker.mk will overwrite
CPPFLAGS += $(COMPILER_OPTIONS)

