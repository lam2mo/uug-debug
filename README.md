# UUG Debugging Talk

These are the support files for the JMU UUG debugging demo, originally given Sep
26, 2018.

## jGRASP Tutorial

Load [DebugDemo.java](java/DebugDemo.java) in jGRASP. Step through the `sum` and
`str` methods then attempt to debug the `sort` method.

## GDB Tutorial

Three simple examples are given in the [c](c) folder. For a more complex
example, try GDB on your CS 261 projects!

## GDB Dashboard

To install: `wget -P ~ git.io/.gdbinit`

Github repo:
[github.com/cyrus-and/gdb-dashboard](https://github.com/cyrus-and/gdb-dashboard)

## VS Code

Pre-tutorial setup:

1) Connect to stu in VS Code

2) Open terminal and run the following command:

    git clone https://github.com/lam2mo/uug-debug.git

3) Open the resulting "uug-debug/c" folder in VS Code
   (make sure you include the "/c" part!)
   (and choose to "trust the authors")

4) Open terminal and run "make" to build all programs

5) Verify that you can see the "Run and Debug" panel

   (if not, install the "C/C++" extension)

