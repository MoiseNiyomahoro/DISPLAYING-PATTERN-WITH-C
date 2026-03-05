#include <stdio.h>  

void pattern1() {  
    for (int i = 1; i <= 5; i++) {  
        for (int j = 1; j <= i; j++)  
            printf("* ");  
        printf("\n");  
    }  
}  

void pattern2() {  
    for (int i = 5; i >= 1; i--) {  
        for (int j = 1; j <= i; j++)  
            printf("* ");  
        printf("\n");  
    }  
}  

void pattern3() {  
    for (int i = 1; i <= 5; i++) {  
        for (int j = 5; j > i; j--)  
            printf(" ");  
        for (int j = 1; j <= i; j++)  
            printf("* ");  
        printf("\n");  
    }  
}  

void pattern4() {  
    for (int i = 5; i >= 1; i--) {  
        for (int j = 5; j > i; j--)  
            printf(" ");  
        for (int j = 1; j <= i; j++)  
            printf("* ");  
        printf("\n");  
    }  
}  

int main() {  
    int choice;  
    printf("Select a pattern to display:\n");  
    printf("1. Pattern 1\n");  
    printf("2. Pattern 2\n");  
    printf("3. Pattern 3\n");  
    printf("4. Pattern 4\n");  
    printf("Enter your choice (1-4): ");  
    scanf("%d", &choice);  
    switch (choice) {  
        case 1:  
            pattern1();  
            break;  
        case 2:  
            pattern2();  
            break;  
        case 3:  
            pattern3();  
            break;  
        case 4:  
            pattern4();  
            break;  
        default:  
            printf("Invalid choice!\n");  
    }  
    return 0;  
}  
