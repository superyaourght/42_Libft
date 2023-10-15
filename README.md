# libft 

## Contents

1. [Introduction](#introduction)
	
	* [Common rules](#common-rules)
	* [Requirements and goals](#requirements-and-goals)

2. [Part one - Libc functions](#part-one)

	* [Characters functions](#char-fonc)
	* [Memory functions](#mem-fonc)
	* [Various string and memory functions](#var-fonc)

3. [Part two - Additional functions](#part-two)
	
	* Lorem ipsum dolor sit amet
	* Lorem ipsum dolor sit amet


<a name="introduction"></a>
## Introduction

The first project as a 42 student. The task is to create a librairy of functions that will be used in further C projects. It covers juggling with pointers, memory, strings and numbers. My version of libft received the grade of 100%.

<a name="common-rules"></a>
### Common rules

* The project must be written in C.

* The project must adhere to the Norm *(v3 at the time)* and will receive a grade of 0 in case of norm violations.

* Functions should not terminate unexpectedly *(segmentation fault, bus error, double free, etc.)* except in the case of undefined behavior. If this happens, the project will be considered non-functional, and will receive a grade of 0.

* Any memory allocated on the heap must be freed when necessary. No memory leaks will be tolerated.

* If the project requires it, a Makefile that compiles the sources to create the requested output must be provided, using the flags -Wall, -Wextra, and -Werror and should not relink.

* If the project requires a Makefile, it must include at least the rules $(NAME), all, clean, fclean, and re.

<a name="requirements-and-goals"></a>
### Requirements and goals

* Global variables are prohibited.

* If auxiliary functions are needed to implement a complex function, they must be defined as static in compliance with the Norm. This way, their scope will be limited to the relevant file.

* All files must be placed at the root of the repository.

* It is forbidden to submit unused files.

* Each .c file must be compiled with the flags -Wall -Wextra -Werror.

* The command "ar" must be used to create the library. The use of the "libtool" command is prohibited.

* "libft.a" must be created at the root of your repository.

<a name="part-one"></a>
## Part one - Libc functions

In this first part, one must recode a set of functions from the Libc as described in their respective manual pages on the system. The functions should have the exact same prototype and behavior as the originals. The only difference is that their names should be prefixed with "ft\_" Therefore, strlen becomes ft\_strlen.

It can be divided into three categories. <a name="char-fonc"></a>

1. **Characters functions** that are primarely used for characters manipulation, verification and conversion.

	* isalpha : tests if character is alphabetic.
	* isdigit : tests for a decimal digit character.
	* isalnum : tests if character is alphanumeric.
	* isascii : tests if an ASCII character.
	* isprint : test if character is printable.
	* toupper : converts a lower-case letter to the corresponding upper-case letter.
	* tolower : converts a upper-case letter to the corresponding lower-case letter. <a name="mem-fonc"></a>


2. **Memory allocation fonctions** that use dynamic memory allocation. 

	* memset : initializes a block of memory with a specified value.
	* bzero : replaces the bytes of a memory block with zeros.
	* memcpy : copies a block of memory from a source to a specified destination.
	* memmove : same as memcpy but takes into account potential overlap with source and destination.
	* strlcpy : copies a source string to a destination while limiting the copy length to prevent buffer overflows
	* strlcat : concatenates a source string to a destination while respecting the maximum length of the destination.<a name="var-fonc"></a>

3. **Various string and memory functions**

	* strlen : calculates the length of a null-terminated string.
	* strchr : searches for the first occurrence of a specified character in a string.
	* strrchr : searches for the last occurrence of a specified character in a string.
	* strncmp : compares the content of two strings up to a specified number of characters.
	* memchr : searches for the first occurrence of a specified byte value within a block of memory.
	* memcmp : compares the content of two memory blocks up to a specified number of bytes.
	* strnstr : searches for the first occurrence of a substring within a given string while limiting the search length.
	* atoi : converts a string representing an integer into an actual integer value.

<a name="part-two"></a>
## Part two - Additional functions

The second part consists of the implementation of a number of functions that are not present in the libc, or that are there but in a different form. It focuses on string manipulation and dynamique memory allocation.

* ft_substr : allocates and returns a substring from another string. The substring begins at index ’start’ and is of maximum size ’len’.
* ft_strjoin : allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* ft_strtrim : allocates and returns a copy of a string with the characters specified removed from the beginning and the end of the string.
* ft_split : allocates and returns an array of strings obtained by splitting a string using a character as a delimiter.
