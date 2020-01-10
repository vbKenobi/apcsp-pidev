#include "student.h"
#include <stdio.h>

void printStudent(Student *student)
{
    if (student != 0)
    {
        printf("First Name: %s Last Name: %s, Age: %d, Student Id: %d\n",
        student->first_name, student->last_name, student->age, student->student_id);
    }
    
    return;
}
