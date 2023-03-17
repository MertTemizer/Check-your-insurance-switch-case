#include <stdio.h>

int main()
{
    char category;
    
    printf("Enter category (U/A/B/M): ");
    scanf("%c", &category);
    
    switch(category)
    {
        case 'U':
            printf("Insurance is not available.");
            break;
        case 'A':
            printf("Insurance is double.");
            break;
        case 'B':
            printf("Insurance is normal.");
            break;
        case 'M':
            printf("Insurance is medically dependent.");
            break;
        default:
            printf("Entry is invalid.");	
    }
    
    return 0;
}
