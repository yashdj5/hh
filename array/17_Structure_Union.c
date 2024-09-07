//SWAP to show difference between Structure and Union
#include <stdio.h>
#include <string.h>

// Define a structure
struct struct_example {
    int integer;
    float decimal;
    char name[20];
};

// Define a union
union union_example {
    int integer;
    float decimal;
    char name[20];
};

int main() {
    // Initialize structure
    struct struct_example s;
    s.integer = 18;
    s.decimal = 38.5;
    strcpy(s.name, "GeeksforGeeks");

    // Initialize union
    union union_example u;
    u.integer = 18;
    u.decimal = 38.5;
    strcpy(u.name, "GeeksforGeeks");

    // Print structure data
    printf("Structure data:\n");
    printf("Integer: %d\n", s.integer);
    printf("Decimal: %.2f\n", s.decimal);
    printf("Name: %s\n", s.name);

    // Print union data
    printf("\nUnion data:\n");
    printf("Integer: %d\n", u.integer);
    printf("Decimal: %.2f\n", u.decimal);
    printf("Name: %s\n", u.name);

    // Print sizes
    printf("\nSize of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    return 0;
}


