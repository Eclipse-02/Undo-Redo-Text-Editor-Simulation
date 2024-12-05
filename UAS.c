#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
#define MAX_TEXT 1024

typedef struct {
    char data[MAX_SIZE][MAX_TEXT];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, char *text) {
    if (isFull(s)) {
        printf("Stack Penuh!\n");
        return;
    }

    strcpy(s->data[++(s->top)], text);
}

char *pop(Stack *s) {
    if (isEmpty(s)) {
        return NULL;
    }

    return s->data[(s->top)--];
}

char *peek(Stack *s) {
    if (isEmpty(s)) {
        return NULL;
    }

    return s->data[s->top];
}

void clrscr() {
    printf("\033[H\033[J");
}

int main() {
    Stack undo, redo;
    char buffer[MAX_SIZE], currText[MAX_TEXT] = "";
    int choice;

    initStack(&undo);
    initStack(&redo);

    while (1) {
        printf("==============================================\n");
        printf("| Undo-Redo Text Simulation                  |\n");
        printf("==============================================\n");
        printf("// Current Text: %s\n", currText);
        printf("1. Write\n");
        printf("2. Undo\n");
        printf("3. Redo\n");
        printf("4. Latest Undo\n");
        printf("5. Latest Redo\n");
        printf("6. Exit\n");
        printf("Select Option >> ");
        scanf("%d", &choice);
        clrscr();

        switch (choice) {
            case 1:
                printf("// Current Text: %s\n", currText);
                printf("// Input Text: ");
                fflush(stdin);
                fgets(buffer, MAX_TEXT, stdin);
                buffer[strcspn(buffer, "\n")] = 0;

                push(&undo, currText);
                strcat(currText, buffer);

                initStack(&redo);
                clrscr();
                break;
            case 2:
                if (isEmpty(&undo)) {
                    printf("=!!There's no more to Undo!!=\n");
                } else {
                    push(&redo, currText);
                    strcpy(currText, pop(&undo));
                }
                break;
            case 3:
                if (isEmpty(&redo)) {
                    printf("=!!There's no more to Redo!!=\n");
                } else {
                    push(&undo, currText);
                    strcpy(currText, pop(&redo));
                }
                break;
            case 4:
                if (isEmpty(&undo)) {
                    printf("=!!There's no text in Undo!!=\n");
                } else {
                    printf("Last Undo : '%s'\n", peek(&undo));
                }
                break;
            case 5:
                if (isEmpty(&redo)) {
                    printf("=!!There's no text in Redo!!=\n");
                } else {
                    printf("Last Redo : '%s'\n", peek(&redo));
                }
                break;
            case 6:
                printf("=!!Exiting!!=");
                exit(0);
                break;
            
            default:
                printf("=!!Invalid Input!!=\n");
                break;
        }
    }
    

    return 0;
}
