# c - printf
<img src = "https://www.google.com/url?sa=i&source=images&cd=&ved=2ahUKEwiLoZOy0d_jAhUw2FkKHW8hCiUQjRx6BAgBEAU&url=https%3A%2F%2Fmedium.com%2F%40ravi.w.reddy%2Fwhy-i-want-to-become-a-software-engineer-and-why-i-want-to-attend-holberton-school-1a405c3b7191&psig=AOvVaw3_Ibdjfx7uv4YpHtx4_1Tj&ust=1564678503900253">
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

------------
widith & Decription
------------
*(number): Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.<br>
* *: The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.<br>
-----------
Example
------------
The following example shows the usage of printf() function.<br>
