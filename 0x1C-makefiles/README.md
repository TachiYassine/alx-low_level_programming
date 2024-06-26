# Understanding Make, Makefiles, Rules, and Variables

## General

### What are make and Makefiles?

**`make`** is a build automation tool that automatically builds executable programs and libraries from source code by reading files called **Makefiles**. It determines which parts of a program need to be recompiled and issues the commands to recompile them.

**Makefiles** are special format files that `make` uses as a roadmap for building projects. They contain rules that specify how to compile and link the program, as well as dependencies between different parts of the project.

### When, why, and how to use Makefiles

**When to use Makefiles:**
- **When** you have a project with multiple source files.
- **When** your project needs to be built on different platforms.
- **When** you want to automate the build process to save time and reduce errors.

**Why use Makefiles:**
- **Automation:** Automatically handles complex build tasks.
- **Efficiency:** Only rebuilds parts of the project that have changed.
- **Consistency:** Ensures the same build process is followed every time.
- **Documentation:** Clearly specifies the build steps and dependencies.

**How to use Makefiles:**
1. **Create a Makefile:** Write a file named `Makefile` in your project's root directory.
2. **Define rules:** Specify how to compile and link your program.
3. **Run `make`:** Simply type `make` in the terminal to start the build process.

## Rules

### What Are Rules?
Rules are instructions in a Makefile that tell `make` how to execute tasks. Each rule consists of three parts:
1. A **target**: usually the name of a file that is generated by a program.
2. A **prerequisite**: files that the target depends on.
3. A **recipe**: the commands to create the target from the prerequisites.

### Setting and Using Rules
A basic rule in a Makefile looks like this:

```makefile
target: prerequisites
    recipe
```

#### Exemple:

```makefile
all: program

program: main.o utils.o
    gcc -o program main.o utils.o

main.o: main.c
    gcc -c main.c

utils.o: utils.c
    gcc -c utils.c

clean:
    rm -f *.o program`
```

### Explicit and Implicit Rules
#### Explicit Rules
Explicit rules specify how to build specific targets. These rules explicitly define the target, its prerequisites, and the recipe.

#### Exemple:

```makefile
main.o: main.c
    gcc -c main.c
```

### Implicit Rules
#### Implicit rules define a generic method for building targets without explicitly listing all of them. For example, make has built-in implicit rules for compiling .c files to .o files:

#### Exemple:

```makefile
%.o: %.c
    gcc -c $< -o $@
```

- In this case, % acts as a wildcard, and $< represents the prerequisite (source file), while $@ represents the target (object file).

### Common / Useful Rules
#### All
The all rule is a common convention in Makefiles, used to define the default goal to be built.

#### Exemple:

```makefile
all: program
```

#### Clean
The clean rule is used to remove files that were generated during the build process. It's not automatically run by make; you need to call it explicitly.

#### Exemple:

```makefile
clean:
    rm -f *.o program
```

### Phony Targets
####Phony targets are not actual files; they are just names for a recipe to be executed when explicitly requested. The clean target is often a phony target.

#### Exemple:

```makefile
.PHONY: clean
clean:
    rm -f *.o program
```

### Variables
#### What Are Variables?
Variables in Makefiles are used to simplify the Makefile and avoid repetition. They can hold text strings, which can be referenced in the rules.

#### Setting and Using Variables
Variables are set using the = operator. They are referenced using the $ symbol with parentheses or braces.

#### Exemple:

```makefile
CC = gcc
CFLAGS = -Wall -g
OBJ = main.o utils.o

program: $(OBJ)
    $(CC) -o program $(OBJ) $(CFLAGS)

%.o: %.c
    $(CC) -c $< -o $@ $(CFLAGS)

clean:
    rm -f *.o program
```

#### In this example:

`CC` is the compiler.
`CFLAGS` contains the compiler flags.
`OBJ` lists the object files.
