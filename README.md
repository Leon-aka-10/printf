## printf()
The printf project is a collaboration between Joy Oparah and Chukwubuikem Ekpe, students of Software Engineering at ALX, where a function named "_printf". This Format controls the output just like in the printf function from the standard library.

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)
	
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| %  | Character  |


------------

## Examples

1. To print string 'I am a string':
	+ Use: `_printf("String:[%s]\n", "I am a string !");`
	
2. To print integers '23' and '34' repectively:
	+ Use: `_printf("Length:[%d, %i]\n", 23, 34);`
	
3. To print character 'H':
	+ Use: `_printf("Character:[%c]\n", 'H');`
	
------------

### Authors
Joy Oparah and Chukwubuikem Ekpe