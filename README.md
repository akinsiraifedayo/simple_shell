# Simple Shell

A simple shell implementation built in C.

## Table of Contents

- [Description](#description)
- [Installation](#installation)
- [Usage](#usage)
- [Built-in Commands](#built-in-commands)
- [Authors](#authors)

## Description

This is a simple shell program written in C that can run on Unix-like operating systems. It is capable of executing commands and programs, and also supports some built-in commands.

The program works by first reading the input from the user using the `getline()` function, and then tokenizing the input into separate arguments using `strtok()`. It then checks if the command is a built-in command or an external program. If it is a built-in command, it is executed by the shell itself. Otherwise, it is executed by creating a new process using `fork()` and executing the program using `execve()`.

## Installation

To install and run the program, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/<username>/simple-shell.git
```

