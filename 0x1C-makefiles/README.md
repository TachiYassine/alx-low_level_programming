# Make and Makefiles

## General

### What are make and Makefiles?
`make` is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles. A Makefile contains a set of directives used by the `make` build automation tool to generate a target/goal.

### When, why, and how to use Makefiles?
**When**: Use Makefiles when you have multiple files and complex build processes. They are particularly useful in large projects with many dependencies.

**Why**: Makefiles help in automating the build process, ensuring consistency, reducing the chance of human error, and saving time.

**How**: Write a Makefile that specifies how your project should be built. Define targets, dependencies, and commands. Then run `make` to perform the build process as specified in the Makefile.

## Makefiles

### What are rules and how to set and use them?
Rules in a Makefile define how to build targets. A rule consists of a target, dependencies, and a recipe. 

**Syntax**:
target: dependencies
command


**Example**:
```makefile
hello: hello.c
    gcc -o hello hello.c

- In this example, hello is the target, hello.c is the dependency, and gcc -o hello hello.c is the command to build the target.

- What are explicit and implicit rules?
Explicit Rules: Specifically define how to build a target. They list the exact commands needed.

**Example**:
```makefile
program: program.c
    gcc -o program program.c

- Implicit Rules: Allow make to use its built-in rules to figure out how to build a target. They provide a generic way of building targets without specifying the commands.

**Example**:
```makefile
%.o: %.c
    gcc -c $< -o $@

- What are the most common/useful rules?
All Rule: Often used to specify the default target.

all: target1 target2

- Clean Rule: Used to remove generated files.

clean:
    rm -f *.o program


