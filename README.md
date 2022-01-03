Toy codes using STM32F103C8T6.

## Usage of copy_project.bat

Handy tool to copy codes from other projects. Remove keil project-related files and keep the codes.

- Step 1 :Create a new project directory.

- Step 2: Put copy_project.bat in the new directory

- Step 3: Double clicked copy_project.bat.

  - It will remove directories:  "DebugConfig", "Listings" and "Objects"

  - It will rename "xxx.uvoptx", "xxx.uvprojx" and "xxx.uvguix" with current project directory name.

    (The one you used in step 1)