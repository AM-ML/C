default_linux:
	clear
	@start=`date +%s%N`; \
	gcc c.c -o c; \
	end=`date +%s%N`; \
	runtime=`expr $$end - $$start`; \
	runtime_ms=`expr $$runtime / 1000000`; \
	start2=`date +%s%N`; \
	./c; \
	end2=`date +%s%N`; \
	runtime=`expr $$end2 - $$start2`; \
	runtime_ms2=`expr $$runtime / 1000000`; \
	echo "-------------------------\n\033[1;96mCompilation: \033[1;93m$$runtime_ms""ms\033[0;0m...";\
	echo "\033[1;94m----\033[1;96mRuntime: \033[1;93m$$runtime_ms2""ms\033[0;0m...";\
	echo "-------------------------"

r:
	clear;./c

mv:
	mkdir ${a};mv *.c ${a};mv c ${a};cp makefile ${a};touch c.c;mv ${a} rsc;clear;

proj_mv:
	mkdir ${a};mv *.c ${a};mv c ${a};cp makefile ${a};touch c.c;mv ${a} proj;clear;ls proj/${a}

update_c:
	cp c /media/bruno/Jupyter/wpsf/ -rf

update_py:
	cp py /media/bruno/Jupyter/wpsf/ -rf

update_workspace:
	cp /media/bruno/Jupyter/wpsf/c /media/bruno/King/Workspace/wpsf/ -rf
	cp /media/bruno/Jupyter/wpsf/py /media/bruno/King/Workspace/wpsf/ -rf
	cp /media/bruno/Jupyter/Media/Books /media/bruno/King/Media/ -rf

git:
	clear;echo "\033[1;91mTASK STARTED: GIT\033[0;0m\n";git add --all;git commit -am "${a}";git push;git log --oneline;echo "\n\033[1;91mFINISHED TASK: GIT\033[0;0m\n"

log:
	clear;echo "\033[1;91mTASK STARTED: LOG\033[0;0m\n";git log --oneline;echo "\n\033[1;91mTASK FINISHED: LOG\033[0;0m\n\n"
status:
	clear;git status
