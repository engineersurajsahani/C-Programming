#include <stdio.h>

// Define a structure named 'Person' to represent a person's information
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare variables of type 'struct Person'
    struct Person person1;
    struct Person person2;

    // Assign values to the members of the first person
    strcpy(person1.name, "Alice");
    person1.age = 25;
    person1.height = 5.8;

    // Assign values to the members of the second person
    strcpy(person2.name, "Bob");
    person2.age = 30;
    person2.height = 6.1;

    // Display information about the two persons
    printf("Person 1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f feet\n", person1.height);

    printf("\nPerson 2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.1f feet\n", person2.height);

    return 0;
}
