#include <stdio.h>
#include <string.h>

// Struct is collection of items
// act like class

struct Human
{
    // attributes
    char name[50];
    int age;
    int height;
    int weight;
    char career[50];
    // you can add method(function) but outside struct
};

//
void metPrintData(struct Human object)
{
    printf("%s ", object.name);
    printf("%d ", object.age);
    printf("%d ", object.height);
    printf("%d ", object.weight);
    printf("%s ", object.career);
}

int main()
{
    // struct (NAME)
    // data
    // init struct
    // struct (NAME) [variable]
    struct Human Me;
    struct Human Dad;

    // add data
    strcpy(Me.name, "Sprite");
    Me.age = 17;
    Me.height = 165;
    Me.weight = 50;
    strcpy(Me.career, "Student");

    // add data
    strcpy(Dad.name, "[Secret]");
    Dad.age = 50;
    Dad.height = 183;
    Dad.weight = 68;
    strcpy(Dad.career, "Father");

    // access
    // printf("%s ", Me.name);
    // printf("%d ", Me.age);
    // printf("%d ", Me.height);
    // printf("%d ", Me.weight);
    // printf("%s ", Me.career);

    // use methods for struct
    metPrintData(Me);
    printf("\n");
    metPrintData(Dad);

    return 0;
}