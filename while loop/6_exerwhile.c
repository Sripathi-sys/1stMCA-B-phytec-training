#include <stdio.h>

int main() {
    int i = 0;
    int hoursWorked[10];  // Array to store the hours worked by each employee
    double overtimePay[10];  // Array to store the overtime pay of each employee
    double regularPay, overtimeRate = 12.00;
    int regularHours = 40;
    
    // Input the hours worked for each employee
    while (i < 10) {
        printf("Enter hours worked by employee %d: ", i + 1);
        scanf("%d", &hoursWorked[i]);
        i++;
    }

    // Calculate overtime pay for each employee
    i = 0;  // Reset the loop counter for the next calculation
    while (i < 10) {
        if (hoursWorked[i] > regularHours) {
            // Overtime pay calculation
            overtimePay[i] = (hoursWorked[i] - regularHours) * overtimeRate;
        } else {
            overtimePay[i] = 0.00;  // No overtime pay if hours are less than or equal to 40
        }
        i++;
    }

    // Output the overtime pay for each employee
    printf("\nOvertime Pay for 10 Employees:\n");
    i = 0;
    while (i < 10) {
        printf("Employee %d worked %d hours and earned Rs. %.2f as overtime pay.\n",
               i + 1, hoursWorked[i], overtimePay[i]);


	i++;
    }

    return 0;
}

