# Understanding Make, Makefiles, Rules, and Variables

## General

### What are make and Makefiles?

**`make`** is a build automation tool that automatically builds executable programs and libraries from source code by reading files called **Makefiles**. It determines which parts of a program need to be recompiled and issues the commands to recompile them.

**Makefiles** are special format files that `make` uses as a roadmap for building projects. They contain rules that specify how to compile and link the program, as well as dependencies between different parts of the project.

### When, why, and how to use Makefiles

**When to use Makefiles:**
- <span style="color: blue; font-size: 14px;">When you have a project with multiple source files.</span>
- <span style="color: green; font-size: 14px;">When your project needs to be built on different platforms.</span>
- <span style="color: red; font-size: 14px;">When you want to automate the build process to save time and reduce errors.</span>

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

### What are rules and how to set and use them?

Rules in a Makefile tell `make` how to perform tasks such as compiling source code or linking object files. A rule consists of three parts:
1. **Target:** The file to be created or updated.
2. **Prerequisites:** The files that the target depends on.
3. **Recipe:** The commands to create or update the target.

... *****i will continue this later
