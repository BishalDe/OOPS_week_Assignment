#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
} ;

int main() {
    int n=5;
    while(n--){
    struct student s[5];
        printf("Enter information:\n");
        printf("Enter name: ");
        scanf("%s",s[n].name);

        printf("Enter roll number: ");
        scanf("%d",&s[n].roll);

        printf("Enter marks: ");
        scanf("%f",&s[n].marks);

        printf("\n\nDisplaying Information:\n");
        printf("Name: %s\n", s[n].name);
        printf("Roll number: %d\n", s[n].roll);
        printf("Marks: %.1f\n", s[n].marks);
    }
    return 0;
}
