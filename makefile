gcc_warning_flags = -Wunused-variable -Wshadow -Wconversion -Wuninitialized -Wfloat-equal
gcc_optimization_flags = -O3 -march=native -mtune=native -funroll-loops -finline-functions -fomit-frame-pointer -fprefetch-loop-arrays -ffast-math
normal_gcc = gcc $(gcc_warning_flags) $(gcc_optimization_flags) c.c -o c

default_linux:
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
	mkdir ${a}; mv c.c lib.h ${b} ${a}; cp c ${a}; cp ${a}/lib.* .; cp rsc/bp/* .; mv ${a} rsc; clear;

proj_mv:
	mkdir ${a}; mv c.c lib.h ${b} ${a}; cp c ${a}; cp ${a}/lib.* .; cp rsc/bp/* .; mv ${a} proj;clear;

gmk:
	clear; git add makefile; git commit -m "makefile refactoring."; git push; git log --oneline

glib:
	clear; git add lib.h; git commit -m "${a}"; git push; git log --oneline

glib_refactoring:
	clear; git add lib.h; git commit -m "Lib.h refactoring."; git push; git log --oneline

up_bp:
	clear; cp c.c rsc/bp; cp makefile rsc/bp; cp lib.h rsc/bp;

bp:
	clear; cp rsc/bp/* .;
