#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[50];
    int ID;
};


int main() {

    /*
     * 1. Text Files
     * 2. Binary Files
     *
     * File Operations
     *
     * 1- Create a file!
     * 2- Open a file
     * 3- Close a file
     * 4- R/W
     */

    /*
     * 1 - Write to a Text File!
     */

//    int num;
//    FILE* fptr;
//
//    fptr = fopen("test.txt","w");
//
//    if(fptr == NULL){
//        printf("Error!");
//        exit(-1);
//    }
//
//    printf("Enter num: ");
//    scanf("%d",&num);
//
//    fprintf(fptr,"%d",num);
//    fclose(fptr);

//    int num;
//    FILE* fptr = fopen("test.txt","r");
//
//    if(fptr == NULL){
//        printf("Error!");
//        exit(1);
//    }
//
//    fscanf(fptr,"%d",&num);
//    printf("Num is %d",num);
//    fclose(fptr);

//    FILE* fptr = fopen("test.txt", "w");
//
//    char name[50];
//    printf("Enter your name:");
//    fgets(name,sizeof(name),stdin);
//
//    fprintf(fptr,name);
//    fclose(fptr);
//
//    fptr = fopen("test.txt", "r");
//    char name1[50];
//    char surname1[50];
//    fscanf(fptr, "%s %s", name1,surname1);
//
//    fclose(fptr);
//
//    printf("%s %s",name1, surname1);

//    struct Person p;
//
//    strcpy(p.name, "Melih");
//    p.ID = 20;
//
//    FILE* fptr = fopen("object.bin","wb");
//
//    if(fptr == NULL){
//        printf("Error!");
//        exit(-1);
//    }
//
//    fwrite(&p,sizeof(struct Person),1,fptr);
//    fclose(fptr);


//    struct Person p;
//    FILE* fptr = fopen("object.bin","rb");
//
//    if(fptr == NULL){
//        printf("Error!");
//        exit(-1);
//    }
//
//    fread(&p,sizeof(struct Person),1,fptr);
//    printf("Name: %s\n",p.name);
//    printf("Age: %d",p.ID);
//    fclose(fptr);

    // 1. Number INPUT
    // 2. Info Input
    // 3. Write in File

//    int num;
//    struct Person p;
//
//    printf("Enter amount of people:");
//    scanf("%d", &num);
//
//
//    FILE* fptr= fopen("personinfo.bin", "wb");
//
//    for (int i = 0; i < num ; ++i) {
//        fflush(stdin);
//        printf("Enter name: ");
//        fgets(p.name, sizeof(p.name), stdin);
//
//        printf("Enter age: ");
//        scanf("%d", &p.ID);
//
//        fwrite(&p, sizeof(struct Person), 1, fptr);
//    }
//
//    fclose(fptr);
//
//    printf("\nINFO!\n\n");
//    fopen("personinfo.bin", "rb");
//
//    for (int i = 0; i < num ; ++i) {
//        fread(&p, sizeof(struct Person), 1, fptr);
//        printf("Name: %s", p.name);
//        printf("Age: %d\n\n", p.ID);
//    }
//
//    fclose(fptr);




    return 0;
}
