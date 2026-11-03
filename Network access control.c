#include <stdio.h>

int main() {
    int emp_id, training, status;

    printf("Enter Employee ID validity (1 = valid, 0 = invalid): ");
    scanf("%d", &emp_id);

    printf("Enter Security Training status (1 = completed, 0 = not completed): ");
    scanf("%d", &training);

    printf("Enter Account status (1 = active, 0 = inactive): ");
    scanf("%d", &status);

    if (emp_id == 1) {
        if (training == 1) {
            if (status == 1) {
                printf("Access granted: Network access granted.\n");
            } else {
                printf("Access rejected: Account inactive.\n");
            }
        } else {
            printf("Access rejected: Training required.\n");
        }
    } else {
        printf("Access rejected: Invalid employee ID.\n");
    }

    return 0;
}
