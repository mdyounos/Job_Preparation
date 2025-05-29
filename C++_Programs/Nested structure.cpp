#include <stdio.h>
#include <string.h>

// Define the inner structure
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};

// Define the outer structure
struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Create an instance of the nested structure
    struct Person person1;

    // Assign values to the outer structure
    strcpy(person1.name, "Md Younos");
    person1.age = 30;

    // Assign values to the nested structure
    strcpy(person1.address.street, "Shrimora, Ramu");
    strcpy(person1.address.city, "Cox's Bazar");
    person1.address.zipCode = 4730;

    // Access and print values of the nested structure
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %d\n", person1.address.street, person1.address.city, person1.address.zipCode);

    return 0;
}
