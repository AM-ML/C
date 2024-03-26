default:
	clear;gcc c.c -o c -Ofast -fno-signed-zeros -fno-trapping-math -frounding-math -fsingle-precision-constant -fcx-fortran-rules;./c

e:
	gcc c.c -o c -Ofast -fno-signed-zeros -fno-trapping-math -frounding-math -fsingle-precision-constant -fcx-fortran-rules -Wformat=0;clear;./c

l:
	gcc c.c -o c -lcs50 -Ofast -fno-signed-zeros -fno-trapping-math -frounding-math -fsingle-precision-constant -fcx-fortran-rules -Wformat=0;clear;./c

r:
	clear;./c

a:
	clear;gcc c.c -o c -Ofast; ./c ${a}
al:
	clear;gcc c.c -o c -Ofast -lcs50;./c ${a}

ale:
	gcc c.c -o c -Ofast -lcs50;clear;./c ${a}

mv:
	mkdir ${a};mv *.c ${a};mv *.h ${a}; cp makefile ${a};
	cp ${a}/l.c .; cp ${a}/l.h .; mv ${a} rsc;clear;ls rsc;ls rsc/${a}
	touch c.c
git:
	clear;echo "\033[1;91mTASK STARTED: GIT\033[0;0m\n";git add --all;git commit -am "${a}";git push;git log --oneline;echo "\n\033[1;91mFINISHED TASK: GIT\033[0;0m\n"

log:
	clear;echo "\033[1;91mTASK STARTED: LOG\033[0;0m\n";git log --oneline;echo "\n\033[1;91mTASK FINISHED: LOG\033[0;0m\n\n"
