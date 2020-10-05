COMPILEFLAGS=
CCOMP=gcc

main: main.o init.o add.o print.o search.o delete.o release_node.o release_all.o help.o
	$(CCOMP) $(COMPILEFLAGS) -o main main.o init.o add.o print.o search.o delete.o release_node.o release_all.o help.o
main.o: main.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c main.c
init.o: init.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c init.c
add.o: add.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c add.c
print.o: print.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c print.c
search.o: search.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c search.c
delete.o: delete.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c delete.c
release_node.o: release_node.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c release_node.c
release_all.o: release_all.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c release_all.c
help.o: help.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c help.c
clean:
	rm main.o init.o add.o print.o delete.o release_node.o release_all.o search.o help.o main
