--Student Record Management System--
# Description
This is a Student Record Management System developed in C.

It uses a singly linked list with dynamic memory allocation (DMA) to store the student records and file handling to save and retrieve the student information.

# Features
- Add a new student record.
- Delete a student record.
- Display all student records.
- Modify student details.
- Search records.
- Sort the records by name or by percentage.
- Reverse the linked list.
- Erase all student records.
- To save and load records use student.dat

# Files Used
- student.h – structure definition and function declarations.
- stud_main.c – main function and menu.
- stud_add.c – Add student records.
- stud_del.c – Delete student records.
- stud_show.c – Display student records.
- stud_mod.c – Modify student records.
- stud_save.c – Save and load student records.

# Compilation
Open the terminal in the project directory and execute:

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student
```

## Execution
Run the executable using:

```bash
./student
```

## Data Storage
Student records are stored in a file called student.dat.
- The existing records are loaded on startup.
- Updated records can be saved via the Save option.
- Save and Exit will store the records prior to terminating the program.
- Exit without saving will terminate the program without saving the most recent changes.
