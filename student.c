#include <stdio.h>

typedef struct {
    char first_name[50];
    char last_name[50];
    int  age;
    int  student_id;
}Student;

void printStudent(Student *student)
{
    if (student != NULL)
    {
        printf("First Name: %s Last Name: %s, Age: %d, Student Id: %d\n",
        student->first_name, student->last_name, student->age, student->student_id);
    }
    
    return;
}

int main()
{
    int num_students, i = 0;
    Student student_list[10];
    printf("Enter number of students (0 < number of students < 11)\n");
    scanf("%d", &num_students);
    
    for (i = 0; i < num_students; i++)
    {
        printf("Enter First Name \n");
        scanf("%s", student_list[i].first_name);
        printf("Enter Last Name \n");
        scanf("%s", student_list[i].last_name);
        printf("Enter Age \n");
        scanf("%d", &student_list[i].age);
        printf("Enter student_id \n");
        scanf("%d", &student_list[i].student_id);
    }
    
    for (i = 0; i < num_students; i++)
    {
        printStudent(&(student_list[i]));
    }
}
