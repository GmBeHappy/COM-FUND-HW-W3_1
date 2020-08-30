#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
bool isPrime(long long n);
long long sumAll(long nsum);

int main() {
	long long num;
	printf("Input Number : ");
	scanf("%lli", &num);
	printf("The Sum of all Primes is %lli", sumAll(num));
	return 0;
}

bool isPrime(long long n ) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	long long i;
	for (i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

long long sumAll(long nsum) {
	long long x = 0;
	if (nsum <= 0) {
		return x;
	}
	else {
		for (long j = 0; j < nsum; j++) {
			if (isPrime(j)) {
				x += j;
			}
		}
		return x;
	}
} 