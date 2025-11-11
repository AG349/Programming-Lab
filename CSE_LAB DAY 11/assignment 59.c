#include <stdio.h>

struct Book {
    int id;
    char name[100];
    float price;
};

int main() {
    struct Book books[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Name: ");
        getchar();
        fgets(books[i].name, sizeof(books[i].name), stdin);
        
        for(int j = 0; books[i].name[j] != '\0'; j++) {
            if(books[i].name[j] == '\n') {
                books[i].name[j] = '\0';
                break;
            }
        }

        printf("Book Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n---- Book Details ----\n");
    for(i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Name: %s\n", books[i].name);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
