# 42_Libft 

## Contents

1. [Introduction](#introduction)
	
	* [Common rules](#common-rules)
	* [Requirements and goals](#requirements-and-goals)

2. [Part one - Libc functions](#part-one)

	* [Characters functions](#char-fonc)
	* [Memory functions](#mem-fonc)
	* [Various string and memory functions](#var-fonc)

3. [Part two - Additional functions](#part-two)
	
	* [String manipulation functions](#string-manip-fonc)
	* [File descriptor output functions](#out-fonc)

4. [Part three - Makefile](#part-three)

	* [Compilation and rules](#m-comp)
	* [Integration and Usage](#m-use)

5. [Part four - libft.h](#libft-h)

6. [Conclusion](#conc)

<a name="introduction"></a>
## Introduction

The first project as a 42 student. The task is to create a librairy of functions that will be used in further C projects. It covers juggling with pointers, memory, strings and numbers.

The libft library is implemented from scratch, with a limited set of pre-existing functions. This encourages a deeper understanding of the fundamental operations within the C programming language. The library is meticulously crafted to maintain efficiency, robustness, and adherence to industry-standard programming practices.

This README serves as a guide for understanding the contents of the libft library and how a 42 project works. It outlines the included functions, their purposes and the complementary files used to create and compile this project.

My version of libft received the grade of 100%.

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

The second part consists in the implementation of a number of functions that are not present in the libc, or that are there but in a different form. It focuses on string manipulation with dynamic memory allocation and output functions.<a name="string-manip-fonc"></a>

1. **String manipulation functions**

	* ft_substr : allocates and returns a substring from another string. The substring begins at index ’start’ and is of maximum size ’len’.
	* ft_strjoin : allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
	* ft_strtrim : allocates and returns a copy of a string with the characters specified removed from the beginning and the end of the string.
	* ft_split : allocates and returns an array of strings obtained by splitting a string using a character as a delimiter.
	* ft_itoa : returns a string representing the integer received as an argument. Negative numbers are handled.
	* ft_strmapi : applies a function ’f’ to each character of a string ’s’ to create a new string resulting from successive applications of ’f’.<a name="out-fonc"></a>

2. **File descriptor output functions**

	* ft\_putchar_fd : outputs a character to the given file descriptor.
	* ft\_putstr_fd : outputs a string  to the given file descriptor.
 	* ft\_putendl_fd : outputs a string to the given file descriptor, followed by a newline.
	* ft\_putnbr_fd : outputs an integer to the given file descriptor.

<a name="part-three"></a>
## Part three - Makefile

<a name="m-comp"></a>
### Compilation and rules

The Makefile serves as a tool for automating the build process of the library. It employs the **gcc** compiler and specifies the necessary compilation flags. They are **-Wall**, **-Wextra**, and **-Werror**, which respectively enable standard warning messages, additional warning messages, and treat warnings as errors. This ensures that the code adheres to high programming standards and minimizes the likelihood of potential bugs and issues.

The Makefile also lists the source files that are essential for compiling the libft library. Each function has its own source file that consists of the main function with sometimes complementary functions too.

The object files are generated by replacing the .c extension of each source file with the corresponding .o extension. These object files are the intermediary files produced during the compilation process and are linked together to create the final static library.

The Makefile includes rules for various tasks such as building the library **all**, cleaning object files **clean**, completely removing the library **fclean**, and rebuilding the library **re**. Each rule is associated with a set of commands that enable the execution of these tasks efficiently.

<a name="m-use"></a>
### Integration and Usage

To compile the libft project, ensure that you have the **gcc** compiler installed on your system, as it is the primary tool used for compilation. Additionally, check that the necessary standard C libraries, including **\<stdlib.h>** and **\<unistd.h>**, are accessible.

To initiate the compilation process, navigate to the directory containing the **Makefile** and the **libft.h** header file. Open a terminal window and run the command **make**. This command triggers the Makefile, which compiles the source files listed within it and generates the object files. These object files are then linked together to create the static library file, **libft.a**.

Upon successful compilation, you can integrate the resulting libft.a library into your C projects by linking it during the compilation of your own source files. Make sure to include the libft.h header file at the beginning of your source files to gain access to the library's functions and prototypes.<a name="libft-h"></a>

## **Part four - libft.h**

The use of a .h file, here libft.h, in C programming serves several important purposes, facilitating code organization, modularity, and reusability. Below are the key functions and benefits of utilizing header files in C programming:

1.	**Function Prototypes :**
One of the primary functions of a .h file is to declare the function prototypes that are implemented in corresponding .c files. By including function prototypes in the header file, it becomes possible to call functions defined in one source file from another source file.

2.	**Shared Declarations :** 
Header files also facilitate the sharing of global variables, constants, and data structure declarations across multiple source files. This helps ensure consistent usage of variables and data structures throughout the program and prevents potential conflicts or inconsistencies in their use.

3. **Modularity and Reusability :** 
By encapsulating related functions and data declarations in a header file, you can create modular and reusable code components. This makes it easier to reuse the same set of functions and data structures in multiple projects without having to rewrite the same code repeatedly.

4. **Encapsulation and Information Hiding :** 
Header files enable the concept of information hiding, allowing you to expose only the necessary interfaces while keeping the internal implementation details of functions and data structures hidden. This promotes code security and maintains a clean separation between the interface and implementation of modules, reducing the likelihood of unintentional modifications to critical program components.

5. **Ease of Maintenance :** Using header files makes it easier to maintain and update code. If changes are required in function prototypes or shared declarations, updating the header file automatically applies the changes throughout the program, ensuring consistency and reducing the chances of introducing errors.

6. **Code Readability :** Including a header file at the beginning of a source file provides a clear overview of the functions, data structures, and constants used in the program. This promotes code readability and understanding, making it easier for developers to comprehend the purpose and structure of the codebase.

Overall, the use of a .h file in C programming is essential for creating well-organized, modular, and maintainable code. It facilitates the efficient sharing and use of functions, variables, and data structures across different parts of a program, promoting code reusability, readability, and maintainability.

<a name="conc"></a>
## Conclusion

In conclusion, the development of the libft library marks an essential milestone in my journey as a 42 student. By adhering to strict coding standards and guidelines, I have not only deepened my understanding of fundamental C programming concepts but also honed my skills in implementing a wide range of functions crucial for future projects. The comprehensive nature of the library, encompassing character manipulation, memory allocation, string handling, and file descriptor output, reflects a meticulous approach to crafting efficient and robust code.

The adherence to project requirements and goals, such as the prohibition of global variables, strict memory management, and the implementation of a well-structured Makefile, ensures the integrity and functionality of the library. The meticulous organization of code components within the libft.h header file not only promotes code modularity and reusability but also facilitates efficient maintenance and readability of the codebase.

Ultimately, achieving a perfect grade of 100% underscores the dedication and effort invested in creating a reliable and versatile library. The successful completion of this project not only highlights the acquisition of essential programming skills but also sets the foundation for tackling more complex and challenging tasks in the realm of C programming. This initial endeavor serves as a solid stepping stone for further exploration and mastery of advanced programming concepts and practices.
