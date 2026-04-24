// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition: 
/* For first 50 units Rs. 5/unit 
For next 100 units Rs. 10/unit 
For next 100 units Rs. 15/unit 
For unit above 250 Rs. 20/unit 
An additional charge of 20% is added to the bill */

#include <stdio.h>
#include<math.h>
int main() {
    int unit;
    float bill,totalBill;
    printf("Electricity units consumed: ");
    scanf("%d", &unit);
    if (unit <= 50) {
        bill = unit * 5;
    }
    else if (unit <= 150) {
        bill = (50 * 5) + (unit - 50) * 10;
    }
    else if (unit <= 250) {
        bill = (50 * 5) + (100 * 10) + (unit - 150) * 15;
    }
    else {
        bill = (50 * 5) + (100 * 10) + (100 * 15) + (unit - 250) * 20;
    }
    totalBill = bill + (bill * 0.20);
    printf("Total Electricity Bill = Rs. %.2f\n", totalBill);
    return 0;
}
