# Naruto Language (Compiler Lab Project)

Naruto Language function library (C) - Compiler Lab project (25+ custom functions).

## Project Title
**Naruto Language – Custom Function Library (C)**

## Objective
This compiler lab project creates a **custom “language”** by replacing common programming functions (math, logic, I/O, and strings) with **Naruto-themed function names**.  
Instead of writing `a + b`, the user can call `Rasengan(a,b)`.  
This helps demonstrate how a language can map **keywords/tokens** to actual operations.

## Files Included
- **Naruto.h**  
  Header file that contains all Naruto-themed functions (the language library).
- **main.c**  
  Demo program showing how to use the Naruto functions.

## Function Mapping (Examples)
| Standard Function | Naruto Function | Purpose |
|---|---|---|
| Add | Rasengan(a,b) | a + b |
| Subtract | Chidori(a,b) | a - b |
| Multiply | KageBunshin(a,b) | a * b |
| Divide | Byakugan(a,b) | a / b |
| Modulus | Sharingan(a,b) | a % b |
| Power | SageMode(a,b) | pow(a,b) |
| Round | Madara(a) | round(a) |
| Floor | HashiRama(a) | floor(a) |
| Ceil | Itachi(a) | ceil(a) |
| Print | NinjaScroll(x) | output |
| Input | GatherIntel() | read number |
| Concat | LinkJutsu(a,b) | join strings |
| Substring | SliceJutsu(s,i,j) | slice string |

> Note: The full table of 25+ functions is included in the submitted document.

## Requirements
- GCC compiler (or any C compiler)
- Math library (`-lm`) for power/sqrt/round/floor/ceil functions

## How to Compile
Open terminal in the project folder and run:

```bash
gcc main.c -o naruto -lm
