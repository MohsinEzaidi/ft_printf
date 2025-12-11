*This project has been created as part of the 42 curriculum by <mezzaidi>*

# ft_printf

## Description

The project is a recreation of the function `printf()` from libc.

the project focuses on improving knolage of:
- Variadic functions and how they work.
- Working with (`va_list`, `va_start`, `va_arg` and `va_end`).
- How the original `printf()` actually works.

## Instructions

## Resources

- printf() manuale page: https://man7.org/linux/man-pages/man3/printf.3.html.
- Stack Overflow: https://stackoverflow.com/questions/4958384/what-is-the-format-of-the-x86-64-va-list-structure.
- Miro whiteboared: https://miro.com/app/board/uXjVGdIrhRI=/?share_link_id=335181449561.

### Use of AI

AI been used on that project to: 
- explain some concepts.
- Help with my grammar to write the README file

!!! AI was not used to write the source code.

## Algorithm and Data Structure

### Algorithm

This project uses a format parsing algorithm and this is how it works:

- The program reads the string character by character.
- When it finds a %, it identifies the format type (like %d, %s, %c).
- Than depending on witch format type been found a function specefied on that exact format type is called and given `va_arg` to print it.

I chose this approach because:

- It is simple to understand.
- It follows the logic of the real `printf()`.
- It is efficient for this type of project.

### Data Structure

This project does not use complex data structures.

It mainly uses:
- Primitive data types like (`int`, `char`, `char *`, ...).
- The `va_list` structure to manage variable arguments.

I chose this because:
- The project rules do not allow the use of buffers.
- These structures are enough to complete the project correctly.
