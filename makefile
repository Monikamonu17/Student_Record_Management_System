
student :main.o add.o deleteNode.o show.o modify.o saveFile.o readFile.o sortData.o deleteAll.o reverseData.o exit.o
	gcc main.o add.o deleteNode.o show.o modify.o saveFile.o readFile.o sortData.o deleteAll.o reverseData.o exit.o -o student

main.o :main.c student.h
	gcc -c main.c
add.o :add.c student.h
	gcc -c add.c
deleteNode.o :deleteNode.c student.h
	gcc -c deleteNode.c
show.o :show.c student.h
	gcc -c show.c
modify.o :modify.c student.h
	gcc -c modify.c
saveFile.o :saveFile.c student.h
	gcc -c saveFile.c
readFile.o :readFile.c student.h
	gcc -c readFile.c
sortData.o : sortData.c student.h
	gcc -c sortData.c
deleteAll.o: deleteAll.c student.h
	gcc -c deleteAll.c
reverseData.o :reverseData.c student.h
	gcc -c reverseData.c
exit.o :exit.c student.h
	gcc -c exit.c
clean:
	@echo "Cleaning up..";
	rm -f *.o student
