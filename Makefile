NAME = biginning
OLD  = the_biginning
DESC = it makes letters big
AUTH = George Dance
DATE = 05/09
YEAR = 2023

CC = gcc
WCC = x86_64-w64-mingw32-gcc
SRC = src/${NAME}.c
OUT = bin/${NAME}
FLAGS = -O2 -Iinclude
DEBUG = -Og -Iinclude -Wall -Wextra -Wpedantic -D"DEBUG" -g -ggdb
LINKS = 
WLINKS = 

all: build

build: folders
	${CC} ${SRC} -o ${OUT} ${FLAGS} ${LINKS}
	@echo regular build compiled!

windows: folders
	${WCC} ${SRC} -o ${OUT} ${FLAGS} ${WLINKS}
	@echo windows build compiled!

debug: folders
	${CC} ${SRC} -o ${OUT}-debug ${DEBUG} ${LINKS}
	@echo debug build compiled!

full: build debug windows
	@echo all builds compiled!

test: tags debug run

run:
	@if [ -e ${OUT}-debug ]; then \
		echo running ${OUT}-debug ; \
		echo ; \
		valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes ${OUT}-debug; \
	else \
		echo running ${OUT} ; \
		echo ; \
		${OUT} ; \
	fi

clean: tidy
	@rm -vf ${OUT}
	@rm -vf ${OUT}-debug
	@rm -vf ${OUT}.exe

tidy:
	@rm -vf tags
	@if [ -d bin ]; 	then rmdir --ignore-fail-on-non-empty bin; fi
	@if [ -d include ]; 	then rmdir --ignore-fail-on-non-empty include; fi
	@if [ -d src ]; 	then rmdir --ignore-fail-on-non-empty src; fi
	@if [ -e README.md ] && [ `wc -l README.md | cut -d" " -f1` -lt 3 ]; then rm -vf README.md; fi

install:
	cp ${OUT} /usr/local/bin/
	@echo installed!

uninstall:
	rm -vf /usr/local/bin/${NAME}
	@echo uninstalled!

folders:
	@mkdir -pv bin src

allfolders: folders
	@mkdir -pv include

tags:
	@ctags -R .

readme:
	@if [ -e README.md ]; then echo README.md already exists; \
		else printf "# ${NAME}\n### ${DESC}\n" >> README.md && \
		echo README.md sucessfully created; fi

rename:
	@rm -vf bin/${OLD}
	@rm -vf bin/${OLD}-debug
	@rm -vf bin/${OLD}.exe
	mv src/${OLD}.c src/${NAME}.c

