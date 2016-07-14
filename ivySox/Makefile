#  File:    Makefile
#  Author:  Jeff Moore
#  Date:    June 15, 2013
#
#  Makefile for OliWeb.


DEBUG	= 	-O2
CC	= 	g++
AR	= 	ar
INCLUDE	= 	-I'../tinyxml'
FLAGS	= 	$(DEBUG) $(INCLUDE) -g -pthread -std=c++0x
SOURCE_LIB 	= IvySox.cpp OliWeb.cpp ../tinyxml/tinyxml2.cpp
SOURCE	=	$(SOURCE_LIB) main.cpp
OBJ_LIB 	= $(SOURCE_LIB:.cpp=.o)
OBJ 	=	$(SOURCE:.cpp=.o) OliLib.a
LIBS	=	-lpthread

all:		OliWeb GetProperty install

OliWeb:		$(OBJ)
		@echo [Link]
		@$(CC) -o $@ $(OBJ) $(LIBS)

OliLib.a:	$(OBJ_LIB)
		@echo [Link]
		@$(AR) rvs $@ $?

GetProperty:
		@cd ../GetQueryArgs;make all

.cpp.o:
		@echo [Compile] $<
		@$(CC) -c $(FLAGS) $< -o $@

clean:
		@echo "[Clean]"
		@rm -f $(OBJ) OliWeb
		@cd ../GetQueryArgs;make clean

install:
		@echo "[Install]"
		@chmod 775 cgi-bin/*.cgi
		@chmod 775 util/*.*
		@chmod 775 util/*
