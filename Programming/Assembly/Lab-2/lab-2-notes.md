# Lab 2 Report

This document explains the purpose, logic, and design of the two programs completed in Lab 2. The main goal of this lab was to practice string processing, looping, comparison, keyboard input, and DOS interrupt-based output in 16-bit assembly language.

## Lab Objectives

In this lab, we worked on two related tasks:

1. Process a string stored in memory and count characters that satisfy a condition.
2. Read a string from the keyboard, compare it with a stored password, and repeat until the correct input is given.

Both programs helped us understand how assembly language handles data one byte at a time and how simple logic in high-level languages must be built manually using registers, jumps, and interrupts.

## Program 1: Count Characters in a Given ASCII Range

File: `Program-1.asm`

### Problem Statement

We were given the following string in the data segment:

```asm
BUF DB 'HELLO ABCDEFBBCCDDEE'
```

The task was to count how many characters in the string have ASCII codes from `42H` to `45H`, then display the answer in decimal form.

### What the Program Does

The program scans the string one character at a time. For each character, it checks whether the ASCII value is between `42H` and `45H` inclusive.

These hexadecimal values represent:

- `42H` = `B`
- `43H` = `C`
- `44H` = `D`
- `45H` = `E`

So the program is effectively counting how many `B`, `C`, `D`, and `E` characters appear in the string.

### Main Steps

1. Store the string in memory with the label `BUF`.
2. Compute the string length using:

```asm
BUF_LEN EQU ($ - BUF)
```

3. Load the starting address of the string into `SI`.
4. Load the number of characters into `CX`.
5. Clear `BL` so it can be used as the counter.
6. Read each character into `AL`.
7. Compare `AL` with `42H` and `45H`.
8. Increase the counter if the character is within the required range.
9. After the loop finishes, display the final count in decimal.

### Why We Used This Approach

This program was written this way because assembly language does not provide built-in string functions like modern languages do. Every character must be accessed and tested manually.

- `SI` was used as the pointer to the string because it is a standard index register for traversing memory.
- `CX` was used with `LOOP` because the string length is known in advance, making it an efficient loop counter.
- `BL` was used as the count register because the final result is small enough to fit easily in 8 bits.
- Two comparisons were needed to test the range:
  - if the character is less than `42H`, it should not be counted
  - if the character is greater than `45H`, it should not be counted
  - otherwise, it belongs to the required range

### Why the Decimal Display Macro Was Needed

The result is a number, but DOS output does not directly print numeric register values as decimal text. Because of that, the program uses the `CMPDISP` macro to convert the value into decimal digits and display them one by one.

This was necessary because:

- the internal value in `BL` is numeric
- the screen expects ASCII characters
- decimal conversion must be done explicitly in assembly

### Final Result

In the string:

```text
HELLO ABCDEFBBCCDDEE
```

the counted letters are `B`, `C`, `D`, and `E`.

Their total number is:

```text
12
```

### What We Learned from Program 1

This program gave practice with:

- scanning a string from memory
- using registers as pointers and counters
- applying conditional jumps
- counting matching data
- displaying a numeric result in decimal form

## Program 2: Password Verification with Repeated Input

File: `Program-2.asm`

### Problem Statement

We were given the stored password:

```asm
PASSWORD DB 'HELLO'
```

The required behavior was:

1. Input an ASCII string from the keyboard.
2. Compare the entered string with the stored password.
3. If both strings are equal, display `Congratulations` and return to DOS.
4. If they are different, display `Failed` and ask for input again.

### What the Program Does

The program repeatedly asks the user to enter a password. It reads the keyboard input into a DOS input buffer, checks whether the length matches the stored password, and then compares the characters one by one.

If the input is correct, the program prints `Congratulations` and terminates.
If the input is wrong, the program prints `Failed` and loops back to ask again.

### Data Used in the Program

The program stores:

- the password
- the password length
- the prompt message
- the success message
- the failure message
- the keyboard input buffer

The input buffer is:

```asm
INBUF  DB 20
INLEN  DB ?
INDATA DB 20 DUP(?)
```

### Why the Input Buffer Looks Like This

DOS interrupt `21H`, function `0AH`, requires a special input structure in memory.

Each part has a specific purpose:

- `INBUF` stores the maximum number of characters the user is allowed to type.
- `INLEN` stores how many characters were actually typed.
- `INDATA` stores the typed characters themselves.

This structure is required by DOS, so the program must prepare memory exactly in this format before calling the keyboard input interrupt.

### Main Steps

1. Load the data segment into `DS`.
2. Display the prompt message.
3. Read the user input with DOS interrupt `21H`, function `0AH`.
4. Compare the entered length with the stored password length.
5. If the lengths are different, go directly to the failure message.
6. If the lengths are the same, compare each character one by one.
7. If any character differs, display `Failed` and ask again.
8. If all characters match, display `Congratulations` and exit.

### Why We Compared Length First

Checking the length first is a simple optimization and also makes the logic cleaner.

If the stored password has 5 characters and the user enters 4 or 6 characters, the strings cannot be equal. In that case, there is no reason to compare each character. The program can reject the input immediately.

This saves time and reduces unnecessary comparisons.

### Why We Used `SI`, `DI`, and `CX`

These registers were used because they fit naturally with string comparison logic:

- `SI` points to the stored password
- `DI` points to the user input buffer data
- `CX` holds the number of characters to compare

This lets the program walk through both strings in parallel, comparing one byte from each string during every loop iteration.

### Why the Program Repeats Until Correct Input

The question specifically required the program to keep asking the user until the input matches the stored string.

That is why the code contains a loop label such as `INPUT_AGAIN`. After a failed comparison, the program jumps back to that label instead of exiting. This creates a retry cycle until the correct password is entered.

### Expected Behavior

If the user types:

```text
HELLO
```

the output is:

```text
Congratulations
```

If the user types any different string, such as:

```text
HELL
```

or

```text
HELLo
```

the output is:

```text
Failed
```

and the program asks for input again.

### What We Learned from Program 2

This program gave practice with:

- DOS keyboard input
- DOS screen output
- preparing a valid input buffer
- comparing two strings manually
- using jumps to control repetition
- designing a simple authentication loop

## Overall Conclusion

Lab 2 focused on low-level string handling in assembly language. Even simple tasks such as counting letters or checking a password require detailed control over memory, registers, comparisons, and looping.

Program 1 showed how to scan and analyze a fixed string stored in memory.
Program 2 showed how to read user input, compare strings, and repeat until a condition is satisfied.

Together, these two programs strengthened understanding of:

- data segment usage
- register-based processing
- character-by-character comparison
- DOS interrupt services
- loop and jump control in assembly

## Short Reflection

This lab shows an important idea in assembly programming: nothing is automatic. A task that looks simple in a high-level language becomes a sequence of small explicit operations in assembly. Because of that, Lab 2 was useful for learning how programs really manage strings, input, output, and decision making at a low level.
