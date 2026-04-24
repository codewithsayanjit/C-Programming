#include <stdio.h>

void towerOfHanoi(int n, char source_rod, char destination_rod, char aux_rod);

// Recursive function to solve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char source_rod, char destination_rod, char aux_rod) {
    // Base case: If there is only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source_rod, destination_rod);
        return;
    }

    // Step 1: Move n-1 disks from the source rod to the auxiliary rod using the destination rod as temporary.
    towerOfHanoi(n - 1, source_rod, aux_rod, destination_rod);

    // Step 2: Move the nth disk from the source rod to the destination rod
    printf("Move disk %d from rod %c to rod %c\n", n, source_rod, destination_rod);

    // Step 3: Move the n-1 disks from the auxiliary rod to the destination rod using the source rod as temporary
    towerOfHanoi(n - 1, aux_rod, destination_rod, source_rod);
}

int main() {
    int num_disks;

    printf("Enter the number of disks: ");
    scanf("%d", &num_disks);

    // Call the towerOfHanoi function with the number of disks and rod names
    // 'A' is the source rod, 'C' is the destination rod, 'B' is the auxiliary rod
    towerOfHanoi(num_disks, 'A', 'C', 'B');

    return 0;
}