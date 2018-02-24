#include <stdio.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char const *argv[])
{
    struct Person joe = {
        "Joe Alex", 32, 64, 140
    };

    struct Person frank = {
        "Frank Blank", 20, 72, 100
    };

    // printf("Name: %s\n", joe.name);
    Person_print(joe);
    Person_print(frank);
    return 0;
}
