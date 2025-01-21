#include <stdio.h>
#include <string.h>
// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type 'Person'
    struct Person person1;

    // Assign values to the members of 'person1'
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 5.7;

    // Access and print the values of the members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}

