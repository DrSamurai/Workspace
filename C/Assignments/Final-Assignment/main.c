#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char first_name[50];
    char last_name[50];
    int studentID;
    int age;
    float gpa;
};

void numOfStudents(int num)
{
    printf("Enter number of students: ");
    scanf("%d", &num);

    struct Student *ptr = (struct Student *)malloc(num * sizeof(struct Student));
}

void addStudent(void)
{
    FILE *fp;
    struct Student info;
    printf("\t\t\t\t=======Add Students Info=======\n\n\n");
    fp = fopen("information.txt", "a");

    printf("\n\t\t\tEnter First Name     : ");
    scanf("%s", info.first_name);

    printf("\n\t\t\tEnter Last Name     : ");
    scanf("%s", info.last_name);

    printf("\n\t\t\tEnter Student ID       : ");
    scanf("%d", &info.studentID);

    printf("\n\t\t\tEnter Age : ");
    scanf("%d", &info.age);

    printf("\n\t\t\tEnter GPA    : ");
    scanf("%f", &info.gpa);
    printf("\n\t\t\t______________________________\n");

    if (fp == NULL)
    {
        printf("can't open file");
    }
    else
    {
        printf("\t\t\tRecord stored successfuly\n");
    }

    fwrite(&info, sizeof(struct Student), 1, fp);
    fclose(fp);
}

void studentRecord()
{
    FILE *fp;

    struct Student info;
    fp = fopen("information.txt", "r");

    printf("\t\t\t\t=======STUDENT RECORDS=======\n\n\n");

    if (fp == NULL)
    {
        exit(0);
    }
    else
    {
        printf("\t\t\t\tRECORDS :\n");
        printf("\t\t\t\t___________\n\n");
    }

    while (fread(&info, sizeof(struct Student), 1, fp))
    {
        printf("\n\t\t\t\t Student Name  : %s %s", info.first_name, info.last_name);
        printf("\n\t\t\t\t Age       : %d", info.age);
        printf("\n\t\t\t\t ID         : %d", info.studentID);
        printf("\n\t\t\t\t GPA    : %.2f", info.gpa);
        printf("\n\t\t\t\t ________________________________\n");
    }
    fclose(fp);
}
//
void deleteRecord()
{
    struct Student info;
    FILE *fp, *fp1;

    int studentID, found = 0;

    printf("\t\t\t\t=======DELETE STUDENT RECORD=======\n\n\n");
    fp = fopen("information.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("\t\t\t\tEnter student ID : ");
    scanf("%d", &studentID);
    if (fp == NULL)
    {
        exit(0);
    }

    while (fread(&info, sizeof(struct Student), 1, fp))
    {
        if (info.studentID == studentID)
        {
            found = 1;
        }
        else
        {
            fwrite(&info, sizeof(struct Student), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if (!found)
    {
        printf("\n\t\t\t\tRecord not found\n");
    }
    if (found)
    {
        remove("information.txt");
        rename("temp.txt", "information.txt");

        printf("\n\t\t\t\tRecord deleted succesfully\n");
    }
}

int main()
{
    int choice;
    while (1)
    {

        printf("\t\t\t=====STUDENT DATABASE MANAGEMENT SYSTEM=====");
        printf("\n\n\t\t\t\t     1. Add Student\n");
        printf("\t\t\t\t     2. Students Records\n");
        printf("\t\t\t\t     3. Delete Student\n");
        printf("\t\t\t\t     4. Exit\n");
        printf("\t\t\t\t    _____________________\n");
        printf("\t\t\t\t     ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            studentRecord();
            break;
        case 3:
            deleteRecord();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Please enter value between 1 and 4");
        }
    }
}
