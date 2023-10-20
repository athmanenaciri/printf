# Printf Project

![Project Logo/Image](image_url_here)

This is the README file for the "printf" project, part of the 0x11 curriculum. The project involves creating a custom printf function in C, following specific coding standards, and handling various format specifiers.

## Table of Contents

- [Project Background](#project-background)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Contributing](#contributing)
- [License](#license)

## Project Background

**Printf** is a fundamental function in C used to format and print text. In this project, you will create your own version of the `printf` function, adhering to C coding standards and handling various format specifiers.

![Image](image_url_here)

### Key Concepts

- **Flowcharts**: Visualize and plan the logic of your printf function.
- **Technical Writing**: Improve your technical communication skills.
- **Printf Function Brief**: Gain a deep understanding of how the printf function works.

## Requirements

### General

- **Allowed Editors**: vi, vim, emacs
- **Compilation Environment**: Ubuntu 20.04 LTS with gcc
- **Mandatory README**: A well-structured README.md file is required.
- **Coding Standards**: Your code should follow the Betty style.
- **Global Variables**: Not allowed.
- **File Structure**: Up to 5 functions per file.
- **Header File**: Prototypes of all functions should be included in main.h.
- **Header Files**: Should be include guarded.
- **_putchar**: Note that we will not provide the `_putchar` function for this project.

### Compilation

Your code will be compiled using:

```shell
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

### Task 0: I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

- Write a function that produces output according to a format.
- Prototype: int _printf(const char *format, ...);
- Handle conversion specifiers: c, s, %.
- The function should return the number of characters printed (excluding the null byte).
- Make sure to follow specific requirements as mentioned in the project description.


## Task 1: Education is when you read the fine print. Experience is what you get if you don't

- Handle conversion specifiers: d, i.
- Follow the same requirements as Task 0.


## Task 2: With a face like mine, I do better in print

- Implement a custom conversion specifier: %b, which converts an unsigned int argument to binary.


## Task 3: What one has not experienced, one will never understand in print

- Handle conversion specifiers: u, o, x, X.
- Follow the same requirements as Task 0.


## Task 4: Nothing in fine print is ever good news

- Optimize code by using a local buffer of 1024 chars to minimize calls to the write function.


## Task 5: My weakness is wearing too much leopard print

- Implement a custom conversion specifier: %S, which prints strings and handles non-printable characters.


## Task 6: How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

- Handle the conversion specifier: %p (pointers).
- Follow the same requirements as Task 0.


## Task 7: The big print gives and the small print takes away

- Handle flag characters: +, space, # for non-custom conversion specifiers.


## Task 8: Sarcasm is lost in print

- Handle length modifiers: l, h for conversion specifiers d, i, u, o, x, X.


## Task 9: Print some money and give it to us for the rain forests

- Implement field width handling for non-custom conversion specifiers.


## Task 10: The negative is the equivalent of the composer's score, and the print the performance

- Implement precision handling for non-custom conversion specifiers.


## Task 11: It's depressing when you're still around and your albums are out of print

- Implement the 0 flag character for non-custom conversion specifiers.


## Task 12: Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection

- Implement the - flag character for non-custom conversion specifiers.


## Task 13: Print is the sharpest and the strongest weapon of our party

- Implement a custom conversion specifier: %r, which prints the reversed string.


## Task 14: The flood of print has turned reading into a process of gulping rather than savoring

- Implement a custom conversion specifier: %R, which prints the rot13'ed string.


## Task 15: All the above options work well together

- Ensure that all the previous options are compatible and work together seamlessly.


