# My Repository For Training More About Reverse Engineering

***Reverse Engineering***: is the process of analyzing a product, system, or software to understand its design, functionality, or inner workings. It is commonly done for purposes such as understanding proprietary formats, uncovering vulnerabilities, or creating interoperable solutions.

***While reverse engineering can be a complex and multifaceted field, here are some general steps involved***:

1. ***Define the goal***: Determine the specific objective of the reverse engineering project. It could be understanding a file format, extracting algorithms, or identifying security vulnerabilities.

2. ***Obtain the target***: Acquire the product or software you want to reverse engineer. This could involve purchasing a physical device, downloading software, or obtaining a sample file.

3. ***Set up the environment***: Create an appropriate environment for reverse engineering. This may include setting up a development environment, installing relevant tools and software, and configuring debugging tools.\n\n4. Analyze the target: Use a combination of tools and techniques to analyze the target. This can involve examining the binary code, decompiling executables, studying documentation, and inspecting data structures.

5. ***Use disassemblers and decompilers***: Disassemblers and decompilers are tools that help convert machine code or bytecode back into a higher-level representation, such as assembly code or source code. These tools assist in understanding the logic and structure of the program.

6. ***Debugging and dynamic analysis***: Utilize debugging tools and techniques to observe the target's behavior during runtime. This may involve stepping through code, inspecting memory, modifying variables, and analyzing system interactions.

7. ***Documentation and note-taking***: Document your findings, observations, and insights as you progress through the reverse engineering process. This documentation will serve as a reference for future analysis and understanding.

8. ***Iterative analysis***: Reverse engineering is often an iterative process, involving multiple rounds of analysis, experimentation, and refinement. Continuously refine your understanding as you gain more insights and uncover new information.

9. ***Ethical considerations***: It's crucial to ensure that your reverse engineering activities comply with legal and ethical guidelines. Respect intellectual property rights, adhere to terms of service agreements, and avoid engaging in activities that may cause harm or violate privacy.

***Note That***: Remember that reverse engineering can be a complex task, and the specific techniques and tools used will depend on the nature of the target and the goals of the project. It often requires a deep understanding of programming languages, assembly code, and system internals. Always approach reverse engineering projects responsibly and within legal boundaries.

## Its Time to deal with crackme series to develop our reverse engineering.

TO CRACK PASSWORD YOU CAN USE:
----------------------------------------------------------------------------

---------------------------How to Crack Password:---------------------------

Your file should contain the exact password, no new line, no extra space by using `ltrace`, `ldd`, `gdb` and `objdump` can help to crack a password.

You may need to install the openssl library to run the `crakme` program by:
`sudo apt install libssl-dev`

Edit the source list `sudo vi /etc/apt/sources.list` to add the following line:
`deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0`

### GNU DEBUGGER: gnu debugger (gdb)

```
$ gdb crackme3
	<gdb> set disassembly-flavor intel
	<gdb> info functions /* to look All defined functions. */
	<gdb> disassemble main
	<gdb> break *main
	<gdb> run

	# ni is `next instruction` it step over a subroutine call
	<gdb> ni /* enter to move around in defferent address */
```

To move to new function at current address you use "si"
`<gdb> si  # 'si' is "step instructruction" it execute current instruction`

You can also repeat by disassemble to new function and break \*newfunction then look for target region:
```
	<gdb> disassemble newfunction
	<gdb> break *newfunction
	<gdb> run
	<gdb> ni /* move around to the target */
```

#### HOW TO EXAMINE CONTENT in A GIVEN MEMMORY IN gdb is as Follows:
```
	x/xw <address> or $<rbp>  # rbp is register base pointer
	where: PART1: "x" is the examine command in GDB.
		   PART2: "/xw" specifies the display format.
		   PART3: "<address>" where there content you what to display.
		   		  "$rbp-<hex>" where there is content store inside you whant to display in word, string, byte, half-word or double word format.

	/xw: Displays the memory contents in hexadecimal word format.
	/xs: Displays the memory contents in hexadecimal string format.
	/xb: Displays the memory contents in hexadecimal byte format.
	/xh: Displays the memory contents in hexadecimal half-word format (16 bits).
	/xd: Displays the memory contents in hexadecimal double-word format (64 bits).
```

#### How To GET SOME IMPORTANT info in GNU Debugger (gdb)

Info will be found on `cmp` (compare), `je` (jump if equal means if `cmp` pass), `jmp` (unconditional jump instruction, if encountered execution immediately jumps to specified target address).

```
	cmp rax,0x3  # is to compare if entered argc is 3.

	WHERE:
		'rax': rax register is 'Accumulator register' to store return value.
		'rcx': rcx register is the counter register is often involved in iteration or loop-related instructions. (rcx" register useful for observing loop counters or iterating over data structures.)
		'movzx': move with zero extension.
		'eax': is the destination register.
		'BYTE PTR':  specifies the size of the operand being moved, indicating that a single byte will be accessed and copied.
		'[rbp+rax*1-0x50]': is the source operand. It represents a memory address calculated by adding the value of "rbp" (base pointer register) with the value of "rax" (accumulator register) multiplied by 1 and subtracting 0x50.

	cmp rax,0x4  # to compare if entered str it's strlen(str) is equal to 4

	/* If it is password enter any 4characters to pass this or if it is arg, add 2 args after program arg */

	<gdb> run pass  # for strlen equal to 4 to jump je function to memory stored constant value which actual password at `mv DWORD PTR [rbp-0x4],0x46c6f48` and then ni until you reach address of this to chech it content.

	<gdb> x/xw $rbp-0x4
	0x7fffffffe2bc: 0x00000000  # means you entered wrong password

	# to look format at this address we expecting string format
	<gdb> x/xs 0x7fffffffe2bc
	0x7fffffffe2bc: ""  # means It is a string format

	# move to memmory segment with `BYTE PTR [rbp-0x6],0x0` run `x/xs $rbp-0x4`
	<gdb> ni
	<gdb> x/xs $rbp-0x4
	"Hol\004p\337\337\337\337\177"  # means we found "Hol" + "\004p" as special character with deciaml number `0x04` EOT or EOF and with debugging termination characters "\337\337\337\337\177"

	# This found "Hol\004p" is same as what stored at `mv DWORD PTR [rbp-0x4],0x46c6f48`

	# which equivalent to `0x46c6f48` to read it is by pairing two character from back

	# as this `DWORD PTR` is WORD = 16bits = 2bytes where byte = 8bits (a one character) means we have to consider two char in this hex string `0x 4 6c 6f 48`

	# `0x 4 6c 6f 48` => `0x 04 6c 6f 48` ==> `0x48 0x6f 0x6c 0x04` similer to 'Hol\0x04' where \0x04 is special character at 4 in ascii table which is EOF or EOT.

	# `Hol\0x04` = `Hol^D`

	# For eg: if it DBYTE PTR means conside 1byte which 1 char.

	man ascii  # To view ascii table in man page.

	or
	<gdb> run julien password /* for 3 arguments to jump je function and then go through to check for username and for it's password like above */
```

#### HOW TO WRITE SPECIAL CHARACTER like "EOT" at "0x04" or "\004p"

Ask google or ChatGPT "'What is EOT's control comand in Linux?' or 'How to write EOT or 0x04?'"
```
	IN LINUX:
		=> ^D  # This is Ctrl + D
		=> "^D = EOT or ETX"

	IN WINDOWS: 
		=> Press and hold the "Alt" key, then enter "0" followed by "0" and "4" using the numeric keypad.
		=> Release the "Alt"
		=> Finally, type the letter "p" as usual on your keyboard.

	IN MAC:
		=> Press and hold the "Option" key, then enter "0" followed by "0" and "4" using the numeric keypad.
		=> Release the "Alt" or "Option" key.
		=> Finally, type the letter "p" as usual on your keyboard.
```

#### How to skip condition in this is by setting false as true is as follows:

```
	<gdb> x/xw /* `x` to examine `/xw` content of given address like for rdx, rbp before with dollar sign ($) */

	<gdb> x/xw $rbp-0x74
	0x7fffffffe2bc: 0x00000000 /* 0 means false nothing entered you can set it to 1 by as follows */

	<gdb> set {int}0x7fffffffe2bc= 0x01 /* To set this a dress to 1 */
	0x7fffffffe2bc: 0x00000001 /* To allow you to pass password check result */

	<gdb>
```
