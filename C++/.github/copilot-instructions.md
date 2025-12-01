## Repo-specific Copilot instructions

This repository is a collection of small C++ exercises and example programs organized by folders (each folder is typically a separate program or problem set). The goal of these instructions is to help an AI coding agent be immediately productive when editing, adding, or testing code here.

### Big picture / architecture (what matters)
- Each top-level directory (for example `Graph/`, `LinkedList/`, `Module_02/`, `module_03/`, `mid_assignment/`, `p_01/`) contains an independent C++ program or small set of related programs. There is no single build system or monolithic binary.
- Source files are standalone examples: changing one file should not assume a global build system. Look for `input.txt`/`output.txt` files in the same folder; these are example inputs/outputs used by the exercise.

### Developer workflows (how to build, run, and test)
- There is no top-level Makefile or CMake in this workspace. Compile single files with g++ (recommended flags):

```bash
g++ -std=c++17 -O2 -Wall -Wextra -pedantic -o prog source.cpp
./prog < input.txt
```

- Example: to run `Module_02/heap.cpp` with its sample input (if present):

```bash
g++ -std=c++17 Module_02/heap.cpp -O2 -o heap
./heap < Module_02/input.txt
```

- Use `valgrind ./prog` or AddressSanitizer when checking memory issues. For ASan, compile with `-fsanitize=address -g`.

### Project-specific conventions and patterns
- File extensions vary: both `.cpp` and `.cxx` are used (e.g., `module_03/basicClass.cxx`). Treat them both as regular C++ source files.
- Many examples read from standard input and write to standard output. Sample input files are named `input.txt` and sample outputs `output.txt` next to sources — prefer running programs with redirected input to reproduce behavior.
- Filenames use mixed styles (CamelCase like `Sort_It.cpp`, and underscore separated like `mid_assignment/Choose_Three.cpp`). When searching for related code, search by directory and by `input.txt` rather than exact filename casing.

### Integration points and external dependencies
- No external package manager or third-party libraries are present. If you need to add a dependency, document the change in a README and prefer header-only or system libraries that are easy to install on Linux.

### Code editing guidance (concrete, repository-specific)
- Small, focused edits: because each folder is an independent exercise, scope pull requests to a single folder where possible.
- Preserve the sample `input.txt`/`output.txt` files — they are de facto tests. If you update program I/O behavior, update the corresponding `output.txt` and note this in the commit message.
- When adding a new example program, include a short `README.md` in the folder that explains how to compile and run it (one sample g++ command and which `input.txt` to use).

### Examples from this repository
- `Graph/basic.cpp` — a single-file example. Edit in place and test by compiling that file alone.
- `LinkedList/firstNode.cxx` — demonstrates `.cxx` usage; treat the same as `.cpp` for builds.
- `Module_02/input.txt` / `Module_02/output.txt` — use these as the canonical test vectors for `Module_02/heap.cpp`.

### When creating tests or example runs
- Create a small shell snippet in the folder (e.g., `run.sh`) that compiles and runs the program against `input.txt` and writes to `stdout` so humans and CI can reproduce results quickly.

### What not to assume
- Do not assume a package manager, CI config, or monorepo build system exists. Do not change files across multiple folders in a single patch without explicit user guidance.

### Quick checklist for PRs
1. Limit changes to one folder if possible. 2. Ensure program still compiles with `g++ -std=c++17`. 3. Update `output.txt` if program output changes. 4. Add a tiny README or `run.sh` if adding a new exercise.

If anything in these instructions is unclear or you'd like more detail about a directory or workflow, tell me which folder or file and I'll update the guidance accordingly.
