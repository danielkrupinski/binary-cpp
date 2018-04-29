CFLAGS=-O$(O)  -std=c++17
O=2
LFLAGS=
OBJS=objs/main.o objs/binary.o


.PHONY: all
all: objs a.out

./a.out: $(OBJS)
	@ echo "    LINK ./a.out"
	@ $(CXX) $(OBJS) -o "./a.out" $(LFLAGS)

objs/main.o: src/main.cpp src/../include/binary.h
	@ echo "    CXX  src/main.cpp"
	@ $(CXX) $(CFLAGS) -c "src/main.cpp" -o $@
objs/binary.o: src/binary.cpp src/../include/binary.h
	@ echo "    CXX  src/binary.cpp"
	@ $(CXX) $(CFLAGS) -c "src/binary.cpp" -o $@

objs:
	@ mkdir "objs"
.PHONY: c clean
c: clean
clean:
	@ if [ -d "objs" ]; then rm -r "objs"; fi
	@ rm -f "./a.out"
	@ echo "    CLEAN"
.PHONY: f fresh
f: fresh
fresh: clean
	@ make all --no-print-directory
.PHONY: r run
r: run
run: all
	@ ././a.out

.PHONY: d debug
d: debug
debug: CFLAGS += -DDEBUG -g3 -Wall -Wextra
debug: O=0
debug: all

.PHONY: check-syntax
check-syntax:
	$(CXX) $(CFLAGS) -fsyntax-only -Wall -o /dev/null -S $(CHK_SOURCES)
