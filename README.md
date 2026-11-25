# Student Record Management System in C

## Project Description
The Student Record Management System is a menu-driven application developed using C programming. It manages student information using a **Singly Linked List** and **Dynamic Memory Allocation**.

The application allows users to add, delete, display, modify, sort, save, and manage student records efficiently.

## Features

- **Add Student:** Add new student records with roll number, name, and percentage.
- **Delete Student:** Delete student records.
- **Display Records:** View all available student details.
- **Modify Records:** Update existing student information.
- **Sort Records:** Sort student data.
- **Reverse List:** Reverse the order of the linked list.
- **Delete All:** Delete all student records.
- **File Handling:** Save and retrieve student records using `student.dat`.
- **Exit Options:** Save records before exiting or exit without saving.

## Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Memory Management: Dynamic Memory Allocation (`malloc`, `free`)
- File Handling: `fopen()`, `fscanf()`, `fprintf()`, `fclose()`
- Compiler: GCC
- Build Tool: Makefile
- Operating System: Linux / Ubuntu

## Project Structure

Student_Record_Management_System/
│
├── main.c
├── add.c
├── deleteNode.c
├── deleteAll.c
├── show.c
├── modify.c
├── sortData.c
├── reverseData.c
├── saveFile.c
├── readFile.c
├── exit.c
├── student.h
├── makefile
├── student.dat
└── README.md

## Compilation

Compile the project using the Makefile:

make

## Execution

Run the generated executable:

./student

## Cleaning Object Files

To remove generated object files and the executable:

make clean

## File Handling

Student records are stored in `student.dat`.

- Records can be saved to the file.
- Previously saved records can be loaded when the application starts.
- The application supports saving records before exiting.

## Learning Outcomes

- Understanding singly linked lists.
- Implementing dynamic memory allocation.
- Performing insertion and deletion operations.
- Working with structures and pointers.
- Implementing file handling in C.
- Managing a multi-file C project using a Makefile.

## Author

**Monika K**

Electronics and Communication Engineering

## Conclusion

This project demonstrates the practical implementation of data structures, pointers, dynamic memory allocation, and file handling in C through a student record management application.

