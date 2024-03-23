default:
	clear;gcc c.c -o c -O3;./c

e:
	gcc c.c -o c -O3 -Wformat=0;clear;./c

r:
	clear;./c

mv:
	mkdir ${a};mv *.c ${a};mv *.h ${a}; cp makefile ${a};
	cp ${a}/l.c .; cp ${a}/l.h .; mv ${a} rsc;clear;ls rsc;ls rsc/${a}
	touch c.c
