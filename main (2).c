/*wap to find the factorial of a number using a iterative and recursive functions 
Name: Ishaan Rajani
UIN: 241p008
exp: 5*/
#include <stdio.h>

long long factIterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1); 
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (Iterative) of %d is: %lld\n", num, factIterative(num));
   
    printf("Factorial (Recursive) of %d is: %lld\n", num, factorialRecursive(num));

    return 0;
}
/*output:
        Enter a number: 8
Factorial (Iterative) of 8 is: 40320
Factorial (Recursive) of 8 is: 40320
*/