#include<stdio.h>
int main() {
	int a, b;
	a = 68;
	b = 10;
	
	
	if (a++ == 68) // 68 == 68. Checks out. // -------------------
		// now that the line in which a++ appreared has
		// finished executing, the post increment comes into play
		// and num becomes 69
		printf("%d\n", a); // 68 is printed 
		
	if (++b == 10) // 11 != 10. Code inside curly braces of if statement
				   // is not executed
		printf("%d\n", b); // nothing is printed

	// final output at the console
	// 68 is printed
	return 0;
}