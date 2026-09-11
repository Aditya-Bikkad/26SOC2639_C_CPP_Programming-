#include<stdio.h>
int main() {
int n,i;
printf("Enter a number:");
scanf("%d", &n);
// using while loop
printf("\nMultiplication Table using while loop:\n");
i = 1;
while (i <= 10) {
printf("%d x %d = %d\n", n, i, n*i);
i++;
}
// using do-while loop
printf("\nMultiplication Table using do-while loop:\n");
i = 1;
do {
printf("%d x %d = %d\n", n, i, n*i);
i++;
} while (i <= 10);
// using for loop
printf("\nMultiplication Table for loop:\n");
for (i =1; i <= 10; i++) {
printf("%d x %d = %d\n", n, i, n*i);
}
return 0;
}
