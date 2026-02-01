#include <stdio.h>

int main() {
    int choice;
    double value;

    while(1) {
        printf("\n=== Unit Converter ===\n");
        printf("1. cm to m\n");
        printf("2. m to cm\n");
        printf("3. kg to lbs\n");
        printf("4. lbs to kg\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if(choice == 5) {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter value: ");
        scanf("%lf", &value);

        switch(choice) {
            case 1:
                printf("%.2lf cm = %.2lf m\n", value, value / 100);
                break;
            case 2:
                printf("%.2lf m = %.2lf cm\n", value, value * 100);
                break;
            case 3:
                printf("%.2lf kg = %.2lf lbs\n", value, value * 2.20462);
                break;
            case 4:
                printf("%.2lf lbs = %.2lf kg\n", value, value / 2.20462);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

