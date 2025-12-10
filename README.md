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
- Primitive data types like (`int`, `char`, `char *`, ...)
- The `va_list` structure to manage variable arguments

I chose this because:
- The project rules do not allow the use of buffers
- These structures are enough to complete the project correctly












*zis prjct has bin cratd as part awf z 42 curiculum by <mzaydi>* 985865568NWLINTcN98758659 985865568NWLINTcN98758659 # ft_printf 985865568NWLINTcN98758659 985865568NWLINTcN98758659 ## dscrip$n 985865568NWLINTcN98758659 985865568NWLINTcN98758659 za prjct is ay rcra$n awf z func$n `printf()` frm libc.985865568NWLINTcN98758659 985865568NWLINTcN98758659 z prjct fcuss awn imprvng nlag awf 985865568NWLINTcN98758659 - variadic func$ns and hw zy wrc.985865568NWLINTcN98758659 - wrcng wiz (`va_list` `va_start` `va_arg` and `va_nd`).985865568NWLINTcN98758659 - hw z riginal `printf()` actuali wrcs.985865568NWLINTcN98758659 985865568NWLINTcN98758659 ## instruc$ns 985865568NWLINTcN98758659 985865568NWLINTcN98758659 ## rsurss 985865568NWLINTcN98758659 985865568NWLINTcN98758659 - printf() manual pag htps//man7.rg/linucs/man-pags/man3/printf.3.html.985865568NWLINTcN98758659 - stacc wvrflw htps//staccvrflw.cm/qustins/4958384/what-is-z-frmat-f-z-cs86-64-va-list-structur.985865568NWLINTcN98758659 - mr witbard htps//mr.cm/ap/bard/uxjvgdrhri=/$ar_linc_id=335181449561.985865568NWLINTcN98758659 985865568NWLINTcN98758659 ### us awf ay 985865568NWLINTcN98758659 985865568NWLINTcN98758659 ay bin usd awn zat prjct tu  985865568NWLINTcN98758659 - csplayn sm cncpts.985865568NWLINTcN98758659 - hlp wiz my gramar tu writ z radm fil 985865568NWLINTcN98758659 985865568NWLINTcN98758659  ay ws nt usd tu writ z surs cd.985865568NWLINTcN98758659 985865568NWLINTcN98758659 ## algrizm and data structur 985865568NWLINTcN98758659 985865568NWLINTcN98758659 ### algrizm 985865568NWLINTcN98758659 985865568NWLINTcN98758659 zis prjct uss ay frmat parsng algrizm and zis is hw it wrcs 985865568NWLINTcN98758659 985865568NWLINTcN98758659 - za prgram rads z strng ¢aractr by ¢aractr.985865568NWLINTcN98758659 - wn it finds ay  it idntifis z frmat typ (lic d s c).985865568NWLINTcN98758659 - zan dpndng awn wit¢ frmat typ bin fawnd ay func$n spcfid awn zat csact frmat typ is cald and givn `va_arg` tu print it.985865568NWLINTcN98758659 985865568NWLINTcN98758659 i ¢s zis apra¢ bcaus 985865568NWLINTcN98758659 985865568NWLINTcN98758659 - it is simpl tu undrstand.985865568NWLINTcN98758659 - it flws z ljic awf z ral `printf()`.985865568NWLINTcN98758659 - it is ficint fr zis typ awf prjct.985865568NWLINTcN98758659 985865568NWLINTcN98758659 ### data structur 985865568NWLINTcN98758659 985865568NWLINTcN98758659 zis prjct ds nt us cmplcs data structurs.985865568NWLINTcN98758659 985865568NWLINTcN98758659 it maynli uss 985865568NWLINTcN98758659 - primitiv data typs lic (`int` `¢ar` `¢ar *`...) 985865568NWLINTcN98758659 - za `va_list` structur tu manag variabl argumnts 985865568NWLINTcN98758659 985865568NWLINTcN98758659 i ¢s zis bcaus 985865568NWLINTcN98758659 - za prjct ruls d nt alw z us awf bufrs 985865568NWLINTcN98758659 - zs structurs ar nugh tu cmplt z prjct crctli