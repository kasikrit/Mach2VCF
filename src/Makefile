# Name of your executable, replace sampleProgram with your program name
EXE=Mach2VCF
OPTFLAG_OPT = -O4 
OPTFLAG_DEBUG = -ggdb -O0 
########################
# Specify your Files:
# TOOLBASE - files with both .cpp and .h.  Just include the base name.
# Example if you have Class1.cpp, Class1.h, Class2.cpp, and Class2.cpp, specify:
# TOOLBASE = Class1 Class2
TOOLBASE = HaplotypeSet
# SRCONLY - .cpp only files.  Specify the entire name, including the .cpp.
# Example, if you have Main.cpp, and File1.cpp, specify:
# SRCONLY = Main.cpp File1.cpp
SRCONLY = Main.cpp
# HDRONLY - .h only files.  Specify the entire name, including the .h.
# Example, if you have Template1.h and Template2.h, specify:
# HDRONLY = Template1.h Template2.h
HDRONLY = 

########################
# Optional settings if you need them.
# Specify any additional compile varaibles you want
# Example:
DATE=$(shell date)
USER=$(shell whoami)
USER_COMPILE_VARS = -DDATE="\"${DATE}\"" -DUSER="\"${USER}\"" -lcrypto
#USER_COMPILE_VARS = 

# Specify any additional includes you need.
USER_INCLUDES =

# Specify any additional warnings you need to enable.
# Example: 
# USER_WARNINGS ?= -Werror -Wno-unused-variable $(shell if [ X$(CCVERSION) \> X4.2.0 ] ; then echo " -Wno-unused-result" ; fi)
USER_WARNINGS =-Wno-unknown-pragmas

# If you don't want to include the current directory (-I.), uncomment this line:
#CURRENT_DIR_INCLUDE=

# Specify any TOOLBASE that needs to be re-compiled when any other file
# is modified.  Do NOT specify this same file in TOOLBASE.
# Example: if you have Executable.cpp and Executable.h, specify:
# COMPILE_ANY_CHANGE = BamExecutable
COMPILE_ANY_CHANGE = 

# If you want to overwrite the default directory for the binaries, from the
# Default setting of 'bin', uncomment the next line and specify a value.
# BIN_DIR = bin

########################
# Include the base Makefile
PARENT_MAKE = Makefile.src
# Handle openmp
OMP_EXE=Minimac3-omp
ifeq ($(MAKECMDGOALS),openmp)
	OBJDIR_OPT = $(OBJDIR)/omp
	EXE = $(OMP_EXE)
	DATE=$(shell date)
	USER=$(shell whoami)
endif

include ../Makefile.inc

# Handle openmp
openmp: USER_COMPILE_VARS = -fopenmp -DDATE="\"${DATE}\"" -DUSER="\"${USER}\"" -lcrypto
openmp: opt
	echo $(EXE)

########################
# Add any additional targets here.
