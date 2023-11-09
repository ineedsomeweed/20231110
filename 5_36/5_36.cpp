
#include <stdlib.h>
#include <iostream>
int c = 1;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{

    if (n == 1)
    {
        printf("%d. Move disk 1 from rod %c to rod %c\n", c, from_rod, to_rod);
        c++;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("%d. Move disk %d from rod %c to rod %c\n", c, n, from_rod, to_rod);
    c++;
    
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    //c++;
}

int main()
{
    
    int n = 3; // Number of disks 
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0;
}