#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Book {
  char *name;
  char *author;
  int price;
};

int main() {
  struct Book *books = malloc(sizeof(struct Book) * MAX_SIZE);

  for (int i = 0; i < MAX_SIZE; i++) {
    printf("Nhap ten sach: ");
    gets(books[i].name);

    printf("Nhap tac gia: ");
    gets(books[i].author);

    printf("Nhap gia sach: ");
    scanf("%d", &books[i].price);
  }

  for (int i = 0; i < MAX_SIZE; i++) {
    printf("Tan sach: %s\n", books[i].name);
    printf("Tac gia: %s\n", books[i].author);
    printf("Gia sach: %d\n", books[i].price);
  }

  free(books);

  return 0;
}

