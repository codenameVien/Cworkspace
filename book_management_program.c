#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100
#define MAX_PUBLISHER 100

typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    char publisher[MAX_PUBLISHER];
} Book;

void printMenu() {
    printf("====================\n");
    printf("1. ���� �б�\n");
    printf("2. �߰�\n");
    printf("3. ���\n");
    printf("4. �˻�\n");
    printf("5. ���� ����\n");
    printf("6. ����\n");
    printf("====================\n");
    printf("�������� �Է��Ͻÿ� : ");
}

void addBook(Book* books, int* num_books) {
    printf("\n������ �̸�: ");
    scanf("%s", books[*num_books].title);
    printf("����: ");
    scanf("%s", books[*num_books].author);
    printf("���ǻ�: ");
    scanf("%s", books[*num_books].publisher);
    printf("\n");
    (*num_books)++;
}

void printBooks(const Book* books, int num_books) {
    printf("\n����� å �����Դϴ�.\n\n");
    for (int i = 0; i < num_books; i++) {
        printf("����: %s\n����: %s\n���ǻ�: %s\n\n", books[i].title, books[i].author, books[i].publisher);
    }
}

void searchBook(const Book* books, int num_books) {
    char title[MAX_TITLE];
    printf("\n����: ");
    scanf("%s", title);

    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("���ڴ� %s, ���ǻ�� %s\n\n", books[i].author, books[i].publisher);
            return;
        }
    }

    printf("�˻��� ������ �����ϴ�.\n");
}

void readBooksFromFile(Book* books, int* num_books, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    printf("���� ���� ����!\n");

    while (!feof(file)) {
        fscanf(file, "%s %s %s\n", books[*num_books].title, books[*num_books].author, books[*num_books].publisher);
        (*num_books)++;
    }

    fclose(file);
}

void writeBooksToFile(const Book* books, int num_books, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    printf("���� ���� ����!(2)\n");

    for (int i = 0; i < num_books; i++) {
        fprintf(file, "%s %s %s\n", books[i].title, books[i].author, books[i].publisher);
    }

    fclose(file);
}

void flushInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Book books[MAX_BOOKS];
    int num_books = 0;

    int option;
    do {
        printMenu();
        if (scanf("%d", &option) != 1) {
            printf("������ �Է����ּ���.\n");
            flushInput();
            continue;
        }

        switch (option) {
        case 1:
            readBooksFromFile(books, &num_books, "books.txt");
            break;
        case 2:
            addBook(books, &num_books);
            break;
        case 3:
            printBooks(books, num_books);
            break;
        case 4:
            searchBook(books, num_books);
            break;
        case 5:
            writeBooksToFile(books, num_books, "books.txt");
            break;
        case 6:
            printf("���α׷��� ����˴ϴ�.\n");
            break;
        default:
            printf("�ùٸ� �ɼ��� �������ּ���.\n");
        }

        flushInput();
    } while (option != 6);

    return 0;
}