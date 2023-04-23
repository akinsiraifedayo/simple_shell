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
2. If you do not have a c compiler yet then install gcc:

```bash
sudo apt update
sudo apt install gcc
```

3. Compile your code with debugging symbol
```bash
$ gcc -g *.c -o hsh
```

4. Run your shell
```bash
./hsh
```

5. Run your basic commands of the shell like ls, mkdir and the likes

## Usage

Once you have started the program, you can use it to run commands and programs just like any other shell. Here are some examples:
```bash
ls -l
pwd
echo "Hello, world!"
```

6. Exit the simple shell
```bash
exit
```
## Built in commands
alias - Create an alias for a command.
cd - Change directory to a specified path.
exit - Exit the current shell session.
exit status - A numerical value returned by a command to indicate success or failure.
$? - A special shell variable that holds the exit status of the last executed command.
$$ - A special shell variable that holds the process ID of the current shell.
getline - A function in C for reading input from a stream.
ls - List the contents of a directory.
mkdir - Create a new directory.
PATH - A list of directories that the shell searches through when trying to find a command.
rm - Remove a file or directory.
setenv - Set an environment variable.
unsetenv - Unset an environment variable.
touch - Create a new empty file.
&& - Execute the command on the right only if the command on the left completes successfully.
|| - Execute the command on the right only if the command on the left fails.
; - Execute the command on the left and then the command on the right.
and many other basic linux commands not listed.

## Authors
[Ifedayo AKinsira-Olumide]
[Okore Amarachukwu]
