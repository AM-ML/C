gcc_warning_flags = -Wunused-variable -Wshadow -Wconversion -Wuninitialized -Wfloat-equal
gcc_optimization_flags = -O3 -march=native -mtune=native -funroll-loops -finline-functions -fomit-frame-pointer -fprefetch-loop-arrays -ffast-math
normal_gcc = gcc $(gcc_warning_flags) $(gcc_optimization_flags) c.c -o c

default_linux:
	clear; rm -rf c
	@start=`date +%s%N`; \
	${normal_gcc} lib.c; \
	end=`date +%s%N`; \
	runtime=$$((end - start)); \
	runtime_ms=$$((runtime / 1000000)); \
	start2=`date +%s%N`; \
	./c; \
	end2=`date +%s%N`; \
	runtime2=$$((end2 - start2)); \
	runtime_ms2=$$((runtime2 / 1000000)); \
	echo "-------------------------"; \
	echo "\033[1;96mCompilation: \033[1;93m$${runtime_ms}ms\033[0;0m..."; \
	echo "\033[1;94m----\033[1;96mRuntime: \033[1;93m$${runtime_ms2}ms\033[0;0m..."; \
	echo "-------------------------"

nl:
	clear; rm -rf c
	@start=`date +%s%N`; \
	${normal_gcc}; \
	end=`date +%s%N`; \
	runtime=$$((end - start)); \
	runtime_ms=$$((runtime / 1000000)); \
	start2=`date +%s%N`; \
	./c; \
	end2=`date +%s%N`; \
	runtime2=$$((end2 - start2)); \
	runtime_ms2=$$((runtime2 / 1000000)); \
	echo "-------------------------"; \
	echo "\033[1;96mCompilation: \033[1;93m$${runtime_ms}ms\033[0;0m..."; \
	echo "\033[1;94m----\033[1;96mRuntime: \033[1;93m$${runtime_ms2}ms\033[0;0m..."; \
	echo "-------------------------"

r:
	start2=`date +%s%N`; \
	clear;./c; \
	end2=`date +%s%N`; \
	runtime2=$$((end2 - start2)); \
	runtime_ms2=$$((runtime2 / 1000000)); \
	echo "-------------------------"; \
	echo "\033[1;94m----\033[1;96mRuntime: \033[1;93m$${runtime_ms2}ms\033[0;0m..."; \
	echo "-------------------------"


mv:
	mkdir ${a}; mv *.c ${a}; mv c ${a}; mv *.h ${a}; cp ${a}/lib.* .; cp makefile ${a}; touch c.c; mv ${a} rsc; clear;

proj_mv:
	mkdir ${a}; mv *.c ${a}; cp *.h ${a}; cp ${a}/lib.* .; mv c ${a}; cp makefile ${a}; touch c.c; mv ${a} proj; clear; ls proj/${a}

update_c:
	cp c /media/bruno/Jupyter/wpsf/ -rf

update_py:
	cp py /media/bruno/Jupyter/wpsf/ -rf

update_workspace:
	cp /media/bruno/Jupyter/wpsf/c /media/bruno/King/Workspace/wpsf/ -rf
	cp /media/bruno/Jupyter/wpsf/py /media/bruno/King/Workspace/wpsf/ -rf
	cp /media/bruno/Jupyter/Media/Books /media/bruno/King/Media/ -rf

git:
	clear; echo "\033[1;91mTASK STARTED: GIT\033[0;0m\n"; git add --all; git commit -am "#${a}"; git push; git log --oneline; echo "\n\033[1;91mFINISHED TASK: GIT\033[0;0m\n"

log:
	clear; echo "\033[1;91mTASK STARTED: LOG\033[0;0m\n"; git log --oneline; echo "\n\033[1;91mTASK FINISHED: LOG\033[0;0m\n\n"

gmk:
	clear; git add makefile; git commit -m "makefile refactoring."; git push; git log --oneline

glib:
	clear; git add lib.c lib.h; git commit -m "${a}"; git push; git log --oneline

glib_refactoring:
	clear; git add lib.c lib.h; git commit -m "Lib.c library refactoring."; git push; git log --oneline

status:
	clear; git status

merge:
	clear; git merge origin side; git push; git checkout side;

pull:
	clear; git pull origin side; git push; git checkout side;

side:
	git checkout side;

side_pull:
	clear;git pull origin main; git push ; git checkout main;