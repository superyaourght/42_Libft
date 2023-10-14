# libft

## Contents

1. [Introduction](#Introduction)
	
	* [Common rules](#Common-rules)
	* [Requirements and goals](#Requirements-and-goals)

2. [Part one - Libc functions] (#Part-one)

	* Lorem ipsum dolor sit amet
	* Lorem ipsum dolor sit amet

3. [Part two - Additional functions] (#Part-two)
	
	* Lorem ipsum dolor sit amet
	* Lorem ipsum dolor sit amet


<a name="Introduction"></a>
## Introduction

The first project as a 42 student. The task is to create a librairy of functions that will be used in further C projects. It covers juggling with pointers, memory, strings and numbers. My version of libft received the grade of 100%.

<a name="Common-rules"></a>
### Common rules

* The project must be written in C.

* The project must adhere to the Norm *(v3 at the time)* and will receive a grade of 0 in case of norm violations.

* Functions should not terminate unexpectedly *(segmentation fault, bus error, double free, etc.)* except in the case of undefined behavior. If this happens, the project will be considered non-functional, and will receive a grade of 0.

* Any memory allocated on the heap must be freed when necessary. No memory leaks will be tolerated.

* If the project requires it, a Makefile that compiles the sources to create the requested output must be provided, using the flags -Wall, -Wextra, and -Werror and should not relink.

* If the project requires a Makefile, it must include at least the rules $(NAME), all, clean, fclean, and re.

<a name="Requirements-and-goals"></a>
### Requirements and goals

* Global variables are prohibited.

* If auxiliary functions are needed to implement a complex function, they must be defined as static in compliance with the Norm. This way, their scope will be limited to the relevant file.

* All files must be placed at the root of the repository.

* It is forbidden to submit unused files.

* Each .c file must be compiled with the flags -Wall -Wextra -Werror.

* The command "ar" must be used to create the library. The use of the "libtool" command is prohibited.

* "libft.a" must be created at the root of your repository.

<a name="Part-one"></a>
## Part one - Libc functions

In this first part, one must recode a set of functions from the Libc as described in their respective manual pages on the system. The functions should have the exact same prototype and behavior as the originals. The only difference is that their names should be prefixed with "ft\_" Therefore, strlen becomes ft\_strlen.

It can be divided into three categories.

1. Characters functions that are primarely used for characters manipulation, verification and conversion. They are :

* isalpha
	
```c
int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}
```
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower


<a name="Part-two"></a>
## Part two - Additional functions
