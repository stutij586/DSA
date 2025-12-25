#include<stdio.h>

//HELLO WORLD
/*
int main(){
	printf("hello World!");
}
*/

//PRINT YOUR NAME AND AGE
/*
int main(){
	printf("My name is Stuti Jain and my age is 19");
}
*/

//PRINT A TABLE
/*
int main(){
	printf("+-----------------------------------------------+\n");
	printf("|Emp.No.	||Name		||Dept		|\n");
	printf("+-----------------------------------------------+\n");
	printf("|101		||Alice		||HR		|\n");
	printf("|102		||Bob		||IT		|\n");
	printf("|103		||Charlie	||Sales		|\n");
	printf("|104		||Diana		||Finance	|\n");
	printf("+-----------------------------------------------+\n");
}
*/

//PRINT ASCII BOX
/*
int main(){
	printf("+-----+\n");
	printf("|     |\n");
	printf("+-----+\n");
}
*/

//PYRAMID
/*
int main(){
	printf("*\n**\n***\n****\n*****\n");
}
*/

//PATTERN
/*
int main(){
	printf("\t*\n*\t*\t*\n\t*\n");
}
*/

// "\n" AND "\t"
/*
int main(){
	//to print ["]
	printf("\"");
	//to print [']
	printf("\'");
	//to print [\n]
	printf("\\n");
	//to print [\t]
	printf("\\t");
}
*/

//TO DECLARE DATA TYPES IN C AND THEIR MEMORY STORAGE
/*
int main() {
    // Declaration of various data types
    int a = 10;
    float b = 3.14f;
    double c = 3.1415926535;
    char d = 'A';
    short e = 100;
    long f = 100000L;
    long long g = 123456789012345LL;
    unsigned int h = 4294967295U;

    // Display values and memory sizes
    printf("Data Type\tValue\t\tSize (bytes)\n");
    printf("-------------------------------------------------\n");
    printf("int\t\t%d\t\t%zu\n", a, sizeof(a));
    printf("float\t\t%.2f\t\t%zu\n", b, sizeof(b));
    printf("double\t\t%.10f\t%zu\n", c, sizeof(c));
    printf("char\t\t%c\t\t%zu\n", d, sizeof(d));
    printf("short\t\t%d\t\t%zu\n", e, sizeof(e));
    printf("long\t\t%ld\t\t%zu\n", f, sizeof(f));
    printf("long long\t%lld\t%zu\n", g, sizeof(g));
    printf("unsigned int\t%u\t%zu\n", h, sizeof(h));

    return 0;
}
*/

//DECIMAL TO BINARY,OCTAL AND HEXADECIMAL CONVERSION
/*
#include <stdio.h>
int main() {
    int decimal;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Output in different number systems
    printf("\nNumber System Conversions:\n");
    printf("---------------------------\n");
    printf("Decimal     : %d\n", decimal);
    printf("Binary      : ");

    // Convert to binary manually
    int binary[32], i = 0,j;
    int temp = decimal;
    if (temp == 0) {
        printf("0");
    } else {
        while (temp > 0) {
            binary[i] = temp % 2;
            temp /= 2;
            i++;
        }
    		for (j = i - 1; j >= 0; j--) {
        		printf("%d", binary[j]);
    		}
    }

    // Octal and Hexadecimal using format specifiers
    printf("\nOctal       : %o\n", decimal);
    printf("Hexadecimal : %X\n", decimal);

    return 0;
}
*/

//WAP TO PRINT SUMMATION OF TWO NUMBERS
/*
int main(){
	int a=3;
	int b=4;
	int sum=a+b;
	printf("Sum of %d and %d is : %d",a,b,sum);
}
*/

//WAP TO GET TWO NUMBERS FROM USER AND PRINT THEIR SUM,SUBTRACTION,MULTIPLICATION AND DIVISION
/*
int main(){
	int a,b;
	printf("Enter first value : ");
	scanf("%d",&a);
	printf("Enter second value : ");
	scanf("%d",&b);
	printf("Sum is : %d\n",a+b);
	printf("Subtraction is is : %d\n",a-b);
	printf("Multiplication is : %d\n",a*b);
	printf("Division is : %d\n",a/b);
}
*/

//WAP TO GET MARKS OF FOUR SUBJECTS AND CALCULATE THEIR TOTAL AND AVERAGE
/*
int main(){
	int e,h,m,s,total;
	float avg;
	printf("Enter marks of English : ");
	scanf("%d",&e);
	printf("Enter marks of Hindi : ");
	scanf("%d",&h);
	printf("Enter marks of Maths : ");
	scanf("%d",&m);
	printf("Enter marks of Science : ");
	scanf("%d",&s);
	total=e+h+m+s;
	printf("Total marks are : %d\n",total);
	avg=total/4.0;
	printf("Average marks are : %f\n",avg);
}
*/

//WAP TO TAKE A FOUR DIGIT INPUT FROM USER AND PRINT ITS REVERSE
/*
int main(){
	int num,temp,rev,d1,d2,d3,d4;
	printf("Enter a four digit number : ");
	scanf("%d",&num);
	temp=num;
	d1=(temp%10)*1000;
	temp=temp/10;
	d2=(temp%10)*100;
	temp=temp/10;
	d3=(temp%10)*10;
	temp=temp/10;
	d4=temp;
	rev=d1+d2+d3+d4;
	printf("Reverse of given number is : %d",rev);
}
*/

//WAP TO GET A DECIMAL NUMBER FROM USER AND PRINT ITS ASCII CHARACTER AND VICE VERSA
/*
int main(){
	//Decimal to ASCII
	int deci;
	printf("Enter a decimal number(an integer) between 32 and 126 : ");
	scanf("%d",&deci);
	printf("ASCII character for given number is : %c\n",deci);
	//ASCII to Decimal
	char ch;
	printf("Enter an ASCII character : ");
	scanf(" %c",&ch);
	printf("Decimal number for given ASCII character is : %d",ch);
	//IMP : make sure to give whitespace before scanning character variable 
}
*/

//CHARACTER VARIABLE
/*
int main(){
	char ch = 'A';
	printf("ASCII value of %c is : %d",ch,ch);
}
*/

//WAP TO GET A CHARACTER FROM USER AND PRINT THE SAME ALONG WITH ITS ASCII VALUE
/*
int main(){
	char ch;
	printf("Enter a character : ");
	scanf(" %c",&ch);
	printf("Entered character is : %c\n",ch);
	printf("ASCII value of %c is : %d\n",ch,ch);
}  
*/

//OPERATORS


/*
Arithmetic					+  -  *  /  %
Relational					==  !=  >  <  >=  <=
Logical						&&  ||  !
Bitwise						&   |   ^   ~   <<   >>
Assignment					=  +=  -=  *=  /=  %=
Increment/Decrement			++  --
Conditional					?:
Pointer						&  *
Structure/Member			.  ->
Special						sizeof(int)   ,
Array/Function				[]   ()
Others						#   { }
*/

//LOGICAL --	&& - and		|| - or		! - not

//UNARY
//INCREMENT AND DECREMENT
/*
#include <stdio.h>
int main() {
    int a = 10;

    printf("Prefix increment: %d\n", ++a); // 11
    printf("Postfix increment: %d\n", a++); // 11 (but a becomes 12 later)
    printf("Current value of a: %d\n", a); // 12

    printf("Prefix decrement: %d\n", --a); // 11
    printf("Postfix decrement: %d\n", a--); // 11 (but a becomes 10 later)
    printf("Final value of a: %d\n", a); // 10

    return 0;
}
*/


//WAP TO PRINT GREATER NUMBER AMONG TWO NUMBERS
/*
int main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	if(a>b){
		printf("%d is greater",a);
	}
	else if(b>a){
		printf("%d is greater",b);
	}
	else if(a==b){
		printf("Both are equal");
	}
}
*/

//WAP TO CHECK IF GIVEN NUMBER IS DIVISIBLE BY 3 OR NOT
/*
int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a%3==0){
		printf("Divisible by 3");
	}
	else{
		printf("Not divisible by 3");
	}
}
*/

//WAP TO CHECK IF GIVEN NUMBER IS EITHER DIVISIBLE BY 3 OR 5 OR BOTH
/*
int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if((a%3==0)||(a%5==0)){
		printf("Divisible by either 3 or 5\n");
		if((a%3==0)&&(a%5==0)){
			printf("Divisible by both\n");
		}
		else if(a%3==0){
			printf("Divisible by 3 only\n");
		}
		else if(a%5==0){
			printf("Divisible by 5 only\n");
		}
	}
	else{
		printf("Not divisible by both\n");
	}	
}
*/

//WAP TO GET TWO NUMBERS FROM USER AND SWAP THEM USING THIRD VARIABLE
/*
int main(){
	int a,b,temp;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Before swapping : a=%d and b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping : a=%d and b=%d\n",a,b);
	
}
*/

//WAP TO GET TWO NUMBERS FROM USER AND SWAP THEM WITHOUT USING THIRD VARIABLE
/*
int main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Before swapping : a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping : a=%d and b=%d\n",a,b);
	
}
*/

//TERNARY OPERATOR

//WAP TO GET TWO NUMBERS FROM USER AND FIND OUT THE MAXIMUM VALUED ELEMENT
/*
int main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	(a>b)?printf("%d is greatest",a):printf("%d is greatest",b);
}
*/

//WAP TO GET THREE NUMBERS FROM USER AND FIND OUT THE MAXIMUM VALUED ELEMENT
/*
int main(){
	int a,b,c;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	a=(a>b)?a:b;
	a=(a>c)?a:c;
	printf("%d is greatest",a);
}
*/

//WAP TO GET FOUR NUMBERS FROM USER AND FIND OUT THE MAXIMUM VALUED ELEMENT
/*
int main(){
	int a,b,c,d;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	printf("Enter fourth number : ");
	scanf("%d",&d);
	a=(a>b)?a:b;
	c=(c>d)?c:d;
	a=(a>c)?a:c;
	printf("%d is greatest",a);
}
*/

//WAP TO CHECK WHETHER A GIVEN NUMBER IS EVEN OR ODD
/*
int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	a%2==0?printf("even"):printf("odd");
}
*/

//NESTED TERNARY OPERATOR
//WAP TO GET THREE NUMBERS FROM USER AND FIND OUT THE MAXIMUM VALUED ELEMENT
/*
int main(){
	int a,b,c;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	a=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("%d is greatest",a);
}
*/

//CONDITIONAL STATEMENTS

//	if		else		else if			switch case

//WAP TO GET A NUMBER FROM USER AND PRINT THE SAME IN WORDS
/*
int main(){
	int n;
	printf("Enter a number(between 1 and 5) : ");
	scanf("%d",&n);
	if(n==1){
		printf("One");
	}
	else if(n==2){
		printf("Two");
	}
	else if(n==3){
		printf("Three");
	}
	else if(n==4){
		printf("Four");
	}
	else if(n==5){
		printf("Five");
	}
	else{
		printf("Invalid Number");
	}
}
*/

//WAP TO GET A NUMBER FROM USER AND PRINT THE SAME IN WORDS USING SWITCH CASE
//(switch case only works for == condition)
/*
int main(){
	int n;
	printf("Enter a number(between 1 and 5) : ");
	scanf("%d",&n);
	switch(n){
		case 1:{
			printf("One");
			break;
		}
		case 2:{
			printf("Two");
			break;
		}
		case 3:{
			printf("Three");
			break;
		}
		case 4:{
			printf("Four");
			break;
		}
		case 5:{
			printf("Five");
			break;
		}
		default:{
			printf("Invalid input");
			break;
		}
	}
}
*/

//WAP TO GET A CHARACTERN FROM USER AND CHECK IF IT IS VOWEL OR CONSONANT
/*
int main(){
	char ch;
	printf("Enter a character(a to z) : ");
	scanf(" %c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
		printf("Given char is a vowel");
	}
	else{
		printf("Given char is a consonant");
	}
}
*/

//CONTROL STATEMENTS

//		for			while		do-while

//WAP TO PRINT YOUR NAME ON CONSOLE FOR 10 TIMES
/*
int main(){
	int i;
	for(i=0;i<10;i++){
		printf("Stuti\n");
	}
}
*/

//WAP TO PRINT FOLLOWING NUMBERS:-		1	2	3	4	5	6	7	8	9	10
/*
int main(){
	int i;
	for(i=1;i<=10;i++){
		printf("%d\n",i);
	}
}
*/

//WAP TO PRINT FOLLOWING NUMBERS:-		2	4	6	8	10	12	14	16	18	20
/*
int main(){
	int i;
	for(i=1;i<=10;i++){
		printf("%d\n",i*2);
	}
}
*/

//WAP TO PRINT FOLLOWING NUMBERS:-		1	4	9	16	25	36	49	64	81	100
/*
int main(){
	int i;
	for(i=1;i<=10;i++){
		printf("%d\n",i*i);
	}
}
*/

//WAP TO PRINT THE SAME ABOVE SERIES WITHOUT USING * OPERATOR
/*
int main() {
    int i,j,square;
    for(i=1;i<=10;i++){
        square=0;
        for(j=1;j<=i;j++){
            square+=i;	// Repeated addition instead of i * i
        }
        printf("%d\n",square);
    }
}
*/

//WAP TO PRINT:-		1/1		2/4		3/9		4/16	5/25	6/36	7/49	8/64	9/81	10/100	
/*
int main(){
	int i;
	for(i=1;i<=10;i++){	
		printf("%d/%d\n",i,i*i);
	}
}
*/

//WAP TO PRINT:-		1/1		2/4		3/9		4/16	5/25	6/36	7/49	8/64	9/81	10/100	
/*
int main(){
	int i;
	for(i=1;i<=10;i++){	
		printf("%d/%d\t+\t",i,i*i);
	}
}
*/

//WAP TO PRINT FIBONACCI SERIES:-		0	1	1	2	3	5	8	_ _ _
/*
int main(){
	int a=0,b=1,c,n,i;
	printf("Enter the number of terms: ");
    scanf("%d", &n);
	for(i=0;i<n;i++){
		if(i<=1){
			c=i;
		}
		else{
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d\t", c);
	}
	return 0;
}
*/

//WAP TO PRINT SUMMATION OF FIRST N NATURAL NUMBERS
/*
int main(){
	int n,i,sum=0;
	printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	sum=sum+i;
	}
	printf("The sum of given first n natural numbers is : %d",sum);
}
*/

//WAP TO GET A NUMBER FROM USER AND PRINT ITS FACTORIAL
/*
int main(){
	int i,n;
	printf("Enter a number: ");
    scanf("%d", &n);
    int fact=1;
    for(i=1;i<=n;i++){
    	fact=fact*i;
	}
	printf("The factorial of given number %d is : %d",n,fact);
}
*/

//WAP TO GET A NUMBER FROM USER AND PRINT ITS REVERSE(USING LOOPS)
/*
int main(){
	int n,rev=0,remainder,temp;
	printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
    	remainder=temp%10;
    	rev=rev*10+remainder;
    	temp=temp/10;
	}
	printf("The reverse of given number %d is : %d",n,rev);
}
*/

//WAP TO GET A NUMBER FROM USER AND PRINT SUMMATION OF ALL ITS INDIVIDUAL DIGITS
/*
int main(){
	int n,sum=0,rem,temp;
	printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
    	rem=temp%10;
    	sum=sum+rem;
    	temp=temp/10;
	}
	printf("The summation of all individual digits of the given number %d is : %d",n,sum);
}
*/

//WAP TO GET A NUMBER FROM USER AND CHECK IF IT IS A PALINDROME NUMBER OR NOT
/*
int main(){
	int n,rev=0,remainder,temp;
	printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
    	remainder=temp%10;
    	rev=rev*10+remainder;
    	temp=temp/10;
	}
	printf("The reverse of given number %d is : %d\n",n,rev);
	if(n==rev){
		printf("Given number %d is a palindrome number\n",n);
	}
	else{
		printf("Given number %d is not a palindrome number\n",n);
	}
}
*/

//WAP TO GET A NUMBER FROM USER AND CHECK IF IT IS AN ARMSTRONG NUMBER OR NOT
/*
#include<math.h>
int main(){
	int n,temp,rem,count=0,final=0;
	printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    
    //counts number of digits
    while(temp!=0){
    	temp=temp/10;
    	++count;
	}
	
	temp=n;
	//computes the sum of nth powers of its digits
	while(temp!=0){
		rem=temp%10;
		final+=(int)pow(rem,count);
		temp=temp/10;
	}
	
	if(final==n){
		printf("Given number %d is an armstrong number\n",n);
	}
	else{
		printf("Given number %d is not an armstrong number\n",n);
	}
}
*/

//WAP TO GET A NUMBER FROM USER AND PRINT ALL ITS INDIVDUAL DIGITS ON SAPERATE LINES
/*
int main(){
	int n,temp,rem,rev=0;
	printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	while(rev!=0){
		rem=rev%10;
		printf("%d\n",rem);
		rev=rev/10;
	}
}
*/

//WAP TO GET A NUMBER FROM USER AND CHECK IF IT IS A PRIME NUMBER OR NOT 
/*
int main(){
	int n,i,isPrime=1;
	printf("Enter a number: ");
    scanf("%d", &n);
    if(n<2){
    	isPrime=0;
	}
	else{
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				isPrime=0;
				break;
			}	
		}
	}
	if(isPrime){
		printf("Given number %d is a prime number\n",n);
	}
	else{
		printf("Given number %d is not a prime number\n",n);
	}	
}
*/

//WAP TO GET TWO NUMBERS FROM USER AND PRINT THE SUMMATION OF BOTH THE NUMBERS ...THEN REPEAT THE SAME UNTIL USER TERMINATES THE PROGRAM
/*
int main(){
	int a,b,sum;
	char choice;
	while(1){
		printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
		sum=a+b;
		printf("Sum of %d and %d is : %d\n",a,b,sum);
		
		printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);  
        if (choice == 'n' || choice == 'N') {
            break;
        }
	}
}
*/
 
//WAP TO PRINT PATTERNS / PYRAMIDS
//(done in java file already)


//	SO TILL NOW C IS COMPLETED TILL LOOPS











