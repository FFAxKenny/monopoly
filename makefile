## R4T5 
## Date: 29 Apr 12
## Rev: v0.2
##
##
##	This is the makefile for the Board/Property Class
##	
##

CCC = g++
CCFLAGS = -ansi

  monopoly: monopoly.o properties.o gamespace.o container.o common.o chance.o
	$(CCC) $(CCFLAGS) -o monopoly monopoly.o properties.o gamespace.o container.o common.o chance.o

monopoly.o: Properties/properties.h Container/container.h

properties.o: Properties/properties.h Container/container.h GameSpace/gamespace.h GameSpace/color.h GameSpace/celltype.h

chance.o: Chance/chance.h

container.o: container.h

gamespace.o: GameSpace/gamespace.h GameSpace/color.h GameSpace/celltype.h

common.o: common.h

gamespace:
	rm -f celltype.h gamespace.h gamespace.cc color.h
	ln -s GameSpace/celltype.h .
	ln -s GameSpace/gamespace.h .
	ln -s GameSpace/gamespace.cc .
	ln -s GameSpace/color.h .
	touch celltype.h gamespace.h gamespace.cc color.h

container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s Container/container.h .
	ln -s Container/container_inl.h .
	ln -s Container/container.cc .
	ln -s Container/listnode.h .
	ln -s Container/listnode_inl.h .
	ln -s Container/entry.h
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s Container/common.h .
	ln -s Container/common.cc .
	touch common.h common.cc

clean:
	rm -f *.o

real_clean:	clean
	rm -f monopoly

