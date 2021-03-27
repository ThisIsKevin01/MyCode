#include <stdio.h>

struct Stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    struct Stu s1 = {"ÕÅÈı", 20, "2006400014"};
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%s\n", s1.id);
    return 0;   
}
