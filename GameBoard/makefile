# MakeFile for EE205 Final Project
## R4T5 
## Date: 15 Apr 12
## Author: Kenny Luong
## Rev: v0.2

##
##
##	This is the MAIN makefile for our monopoly game
##	
##

CCC = g++
CCFLAGS = -ansi

gameboardtest: gameboardtest.o gameboard.o container.o common.o 
	  $(CCC) -o gameboardtest gameboardtest.o gameboard.o container.o\
				common.o

container.o: container.h container_inl.h listnode.h listnode_inl.h common.h 


common.o: common.h

gamespace:
	rm -f gamespace.h gamespace.cc 



container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s ../Template/container.h 
	ln -s ../Template/container_inl.h 
	ln -s ../Template/container.cc 
	ln -s ../Template/listnode.h 
	ln -s ../Template/listnode_inl.h 
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s ../Template/common.h 
	ln -s ../Template/common.cc 
	touch common.h common.cc

clean:
	rm -f *.o

real_clean:	clean
	rm -f monopoly
