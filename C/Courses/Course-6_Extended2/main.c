#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    char first_name[50];
    char last_name[50];
    int age;
    int number_of_courses;
    float gpa;
    struct Course *passedCourses;
};

struct Course{
    char courseName[50];
    float passGrade;
};

int main() {

    // 1. Number of students OK
    // 2. Memory Allocation OK
    // 3. Info without course info OK
    // 4. get course number OK
    // 5. Memory allocation for passed courses OK
    // 6. Passed courses info OK
    // 7. gpa calculation OK
    // 8. print info

    int num;
    int number_of_courses;

    printf("Enter number of students: ");
    scanf("%d", &num);


    struct Student* ptr = (struct Student*) malloc(num * sizeof(struct Student));

    for (int i = 0; i < num ; ++i){
        fflush(stdin);
        printf("Enter information of student-%d\n",i);

        printf("Name: ");
        fgets(ptr[i].first_name, sizeof(ptr[i].first_name), stdin);
//        ptr[i].first_name[strcspn(ptr[i].first_name, "\n")] = 0;
        strtok(ptr[i].first_name, "\n");
        printf("Last name: ");
        fgets(ptr[i].last_name, sizeof(ptr[i].last_name), stdin);
        strtok(ptr[i].last_name, "\n");
//        ptr[i].last_name[strcspn(ptr[i].last_name, "\n")] = 0;



        printf("Age: ");
        scanf("%d", &ptr[i].age);

        printf("How many courses student-%d took? ",i+1); //here
        scanf("%d", &ptr[i].number_of_courses);

        ptr[i].passedCourses = (struct Course*) malloc(ptr[i].number_of_courses *sizeof(struct Course));
        float totalGpa = 0;

        for (int j = 0; j < ptr[i].number_of_courses ; ++j) {
            fflush(stdin);  // The fflush function is used to flush the output buffer of a stream. It has no effect on input streams, so calling fflush(stdin) will not clear the input buffer or fix the buffer overflow issue.
            printf("Enter information of course-%d\n",j +1);
            printf("Name: ");
            fgets(ptr[i].passedCourses[j].courseName, sizeof(ptr[i].passedCourses[j].courseName),stdin);
//            ptr[i].passedCourses[j].courseName[strcspn(ptr[i].passedCourses[j].courseName, "\n")] = 0;
            strtok(ptr[i].passedCourses[j].courseName, "\n");
            printf("Grade: ");
            scanf("%f", &ptr[i].passedCourses[j].passGrade);
            totalGpa += ptr[i].passedCourses[j].passGrade;
        }

        ptr[i].gpa = totalGpa / ptr[i].number_of_courses;
    }

    for (int i = 0; i < num ; ++i) {
        printf("\nINFO OF STUDENT %d:\n",i+1);
        printf("Name: %s ", ptr[i].first_name);
        printf("%s\n", ptr[i].last_name);
        printf("Age: %d\n", ptr[i].age);
        printf("GPA: %f\n", ptr[i].gpa);
        printf("Taken courses: \n");

        for (int j = 0; j < ptr[i].number_of_courses ; ++j) {
            printf("\tCourse: %s (%f)\n", ptr[i].passedCourses[j].courseName, ptr[i].passedCourses[j].passGrade);
        }

//        printf("%lu",sizeof(ptr[i].passedCourses));
//        for (int j = 0; j < _msize(); ++j) {
//
//        }

    }

    /*
     *  INFO OF STUDENT 1:
     *  Name: Ayberk
     *  Age: 22
     *  Taken Courses:
     *      - MATH (4.0)
     *      - PYHS (3,7)
     *  GPA: 3.85
     *
     *  -----------------------------------
     */




//    int num;
//    printf("How many students do you want?");
//    scanf("%d", &num); //
//
//    struct Student* ptr = (struct Student*) malloc(num*sizeof(struct Student));
//
//    for (int i = 0; i < num ; ++i) {
//        fflush(stdin);
//        printf("Enter information of student-%d\n",i+1);
//        printf("Name: ");
//        fgets(ptr[i].name, sizeof(ptr[i].name), stdin);
//
//        printf("Age: ");
//        scanf("%d", &ptr[i].age);
////        scanf("%d", &(ptr+i)->age);
//
//        printf("GPA: ");
//        scanf("%f", &ptr[i].gpa);
//        scanf("%d", &(ptr+i)->gpa);
//    }
//
//    for (int i = 0; i < num ; ++i) {
//        printf("Information of student-%d\n",i);
//        printf("Name: %s",ptr[i].name);
//        printf("Age: %d\n",ptr[i].age);
//        printf("GPA: %f\n\n",ptr[i].gpa);
//    }

//    struct Person melih;
//
//    strcpy(melih.name,"Melih"); // melih.name = "Melih"
//    melih.ID = 1;
//    melih.salary = 10000;
//
//    printf("Name: %s\n",melih.name);
//    printf("Name: %d\n",melih.ID);
//    printf("Name: %f\n",melih.salary);
//
//    struct Person persons[5];
//    persons[0] = melih;

//    int num;
//    printf("Enter a num: ");
//    scanf("%d",&num);
//
//    int* ptr = (int*)malloc(sizeof(int) * num);


    return 0;
}
