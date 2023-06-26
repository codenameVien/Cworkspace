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
    printf("1. 파일 읽기\n");
    printf("2. 추가\n");
    printf("3. 출력\n");
    printf("4. 검색\n");
    printf("5. 파일 쓰기\n");
    printf("6. 종료\n");
    printf("====================\n");
    printf("정수값을 입력하시오 : ");
}

void addBook(Book* books, int* num_books) {
    printf("\n도서의 이름: ");
    scanf("%s", books[*num_books].title);
    printf("저자: ");
    scanf("%s", books[*num_books].author);
    printf("출판사: ");
    scanf("%s", books[*num_books].publisher);
    printf("\n");
    (*num_books)++;
}

void printBooks(const Book* books, int num_books) {
    printf("\n저장된 책 정보입니다.\n\n");
    for (int i = 0; i < num_books; i++) {
        printf("제목: %s\n저자: %s\n출판사: %s\n\n", books[i].title, books[i].author, books[i].publisher);
    }
}

void searchBook(const Book* books, int num_books) {
    char title[MAX_TITLE];
    printf("\n제목: ");
    scanf("%s", title);

    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("저자는 %s, 출판사는 %s\n\n", books[i].author, books[i].publisher);
            return;
        }
    }

    printf("검색한 도서가 없습니다.\n");
}

void readBooksFromFile(Book* books, int* num_books, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    printf("파일 오픈 성공!\n");

    while (!feof(file)) {
        fscanf(file, "%s %s %s\n", books[*num_books].title, books[*num_books].author, books[*num_books].publisher);
        (*num_books)++;
    }

    fclose(file);
}

void writeBooksToFile(const Book* books, int num_books, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    printf("파일 오픈 성공!(2)\n");

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
            printf("정수를 입력해주세요.\n");
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
            printf("프로그램이 종료됩니다.\n");
            break;
        default:
            printf("올바른 옵션을 선택해주세요.\n");
        }

        flushInput();
    } while (option != 6);

    return 0;
}