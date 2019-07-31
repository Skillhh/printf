# c - printf
<img src = "https://d2z6c3c3r6k4bx.cloudfront.net/uploads/event/logo/1061432/a991d937097e8176adf1ea7196beb80f.png">
----------
This project is abour the printf function which is a knowledge of C programming.  

---------
Autor & contributor
-----------
Giovany Ortegon
Vivian Ortiz

-----------
Description
Printf is the C language function to do formatted printing.

-----------
Declaration
Following is the declaration for printf()function.
prototype: int _printf(const char *format, ...);
-----------
Requirements
-------------
General
*Allowed editors: vi, vim, emacs.<br>
*All your files will be compiled on Ubuntu 14.04 LTS.<br>
*Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic. <br>
*All your files should end with a new line.<br>
*A README.md file, at the root of the folder of the project is mandatory>br>
*Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
*You are not allowed to use global variables>br>
*No more than 5 functions per file.<br>
*In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t.
*have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation.<br>
*Our main.c files might be different from the one shown in the examples.<br>
*The prototypes of all your functions should be included in your header file called holberton.h. <br>
*Don’t forget to push your header file.<br>
*All your header files should be include guarded.<br>
*Note that we will not provide the _putchar function for this project.<br>

---------------
Specifer & Output
* format - This is the string taht contains the text to be written to stdout. it can optionally contain embedden format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested.
------------
Specifier & Output
-----------
*C: Character.<br>
*d or i: Signed decimal integer.<br>
*e: Scientific notation (mantissa/exponent) using e character.<br>
*E: Scientific notation (mantissa/exponent) using E character.<br>
*f: Decimal floating point.<br>
*g: Uses the shorter of %e or %f.<br>
*G: Uses the shorter of %E or %f.<br>
*o: Signed octal.<br>
*s: String of character.<br>
*u: Unsigned decimal integer.<br>
*x: Unsigned hexadecimal integer.<br>
*x: Unsigned hexadecimal integer (capital letters).<br>
*p: Pointer address.<br>
*n: Nothing printed.<br>
*%: Character.<br>

-----------
Flags & Description
------------
*-: Left-justify within the given field width; Right justification is the default (see width sub-specifier).<br>
*+: Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign.<br>
*(space): If no sign is going to be written, a blank space is inserted before the value.<br>
*#: Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow. By default, if no digits follow, no decimal point is written. Used with g or G the result is the same as with e or E but trailing zeros are not removed.<br>
*0: Left-pads the number with zeroes (0) instead of spaces, where padding is specified (see width sub-specifier).<br>

-----------
Example
------------
The following 
int _printf(const char *format, ...)
{
	print_t p[] = { {"c", print_c}, {"s", print_s}, {"%", print_per},
			{"d", print_di}, {"i", print_di} };
	va_list valist;<br>
