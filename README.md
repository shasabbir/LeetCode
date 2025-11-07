# LeetCode Solutions - Multi-Language Workspace

A clean, optimized workspace for solving algorithm and data structure problems (like LeetCode) using **C** and **Python** in GitHub Codespaces.

## 🚀 Quick Start

### Using GitHub Codespaces

1. Click the **Code** button on this repository
2. Select **Codespaces** tab
3. Click **Create codespace on main** (or your branch)
4. Wait for the environment to load (usually 1-2 minutes)
5. Start coding! 🎉

The devcontainer will automatically:
- Install GCC (C17), Python 3.11+, Make, GDB
- Install pytest and black for Python
- Configure VS Code with C/C++ and Python extensions
- Set up formatters and linters

## 📁 Repository Structure

```
.
├── .devcontainer/
│   └── devcontainer.json    # Codespaces configuration
├── Makefile                 # Build system for C programs
├── pytest.ini               # Pytest configuration
├── *.py                     # Python solutions
├── *.c                      # C solutions
└── test_*.py                # Python test files
```

## 🐍 Python Workflow

### Running Python Solutions

```bash
# Run a solution directly
python 121.py

# Run a specific solution
python 88.py
```

### Running Python Tests with Pytest

```bash
# Run all tests
pytest

# Run tests with verbose output
pytest -v

# Run specific test file
pytest test_121.py

# Run tests matching a pattern
pytest -k "test_two_sum"

# Run tests by marker
pytest -m easy        # Run only easy problems
pytest -m "not slow"  # Skip slow tests
```

### Formatting Python Code with Black

```bash
# Format a single file
black 121.py

# Format all Python files
black .

# Check formatting without changes
black --check .
```

### Creating Python Tests

Create test files with the naming pattern `test_*.py` or `*_test.py`:

```python
# test_121.py
import pytest
from 121 import maxProfit

@pytest.mark.easy
@pytest.mark.array
def test_max_profit():
    assert maxProfit([7,1,5,3,6,4]) == (1, 7)
    assert maxProfit([7,6,4,3,1]) == (1, 7)
```

## 🔧 C Workflow

### Writing C Programs

Create C files in the root directory with a `main()` function:

```c
// two_sum.c
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Your solution here
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    
    printf("Indices: [%d, %d]\n", result[0], result[1]);
    free(result);
    return 0;
}
```

### Building C Programs

```bash
# Build all C programs
make

# Build a specific program
make bin/two_sum

# List all available C programs
make list

# Clean compiled files
make clean
```

### Running C Programs

```bash
# Run a compiled program
make run PROG=two_sum

# Or run directly
./bin/two_sum
```

### Debugging C Programs with GDB

```bash
# Debug with gdb
make debug PROG=two_sum

# Or debug directly
gdb ./bin/two_sum
```

#### Common GDB Commands

```
(gdb) break main          # Set breakpoint at main
(gdb) run                 # Run the program
(gdb) next                # Execute next line
(gdb) step                # Step into function
(gdb) print variable      # Print variable value
(gdb) continue            # Continue execution
(gdb) quit                # Exit gdb
```

## 🛠️ Development Tools

### Installed Tools

- **GCC**: C compiler with C17 standard support
- **Make**: Build automation tool
- **GDB**: GNU debugger for C programs
- **Python 3.11+**: Python interpreter
- **pytest**: Python testing framework
- **black**: Python code formatter

### VS Code Extensions

The workspace includes pre-configured extensions:
- **C/C++ Extension Pack**: IntelliSense, debugging, code browsing
- **Python Extension**: IntelliSense, linting, debugging
- **Pylance**: Fast Python language server
- **Black Formatter**: Automatic Python code formatting
- **Makefile Tools**: Syntax highlighting for Makefiles

### Compiler Flags

The Makefile uses these GCC flags:
- `-std=c17`: Use C17 standard
- `-Wall`: Enable all common warnings
- `-Wextra`: Enable extra warnings
- `-pedantic`: Strict ISO C compliance
- `-g`: Include debug symbols for GDB

## 📚 Example Workflow

### For a New Problem

1. **Create the solution file**:
   - For Python: `touch 1_two_sum.py`
   - For C: `touch 1_two_sum.c`

2. **Implement the solution**

3. **Test your solution**:
   - Python: Create `test_1_two_sum.py` and run `pytest`
   - C: Add test cases in `main()`, then `make && make run PROG=1_two_sum`

4. **Format your code**:
   - Python: `black 1_two_sum.py`
   - C: Code is formatted on save (if configured)

5. **Commit your solution**: `git add . && git commit -m "Solve: Two Sum"`

## 💡 Tips

### For Python
- Use meaningful variable names (black will format, but names matter!)
- Add docstrings to functions
- Use type hints where appropriate
- Write tests for edge cases

### For C
- Always free allocated memory
- Check for NULL pointers
- Use `valgrind` for memory leak detection (if needed)
- Initialize variables before use

### General
- Keep solutions in separate files for easy organization
- Use descriptive file names (e.g., `26_Remove_Duplicates_from_Sorted_Array.py`)
- Test edge cases: empty inputs, single elements, large inputs
- Comment complex algorithms

## 🎯 Pytest Markers

Use markers to organize your tests:

```python
@pytest.mark.easy         # Easy difficulty
@pytest.mark.medium       # Medium difficulty
@pytest.mark.hard         # Hard difficulty
@pytest.mark.array        # Array problems
@pytest.mark.string       # String problems
@pytest.mark.linked_list  # Linked list problems
@pytest.mark.tree         # Tree problems
@pytest.mark.graph        # Graph problems
@pytest.mark.dp           # Dynamic programming
@pytest.mark.math         # Math problems
@pytest.mark.slow         # Slow-running tests
```

## 📖 Additional Resources

- [LeetCode](https://leetcode.com/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Python Documentation](https://docs.python.org/3/)
- [Pytest Documentation](https://docs.pytest.org/)
- [GDB Quick Reference](https://www.sourceware.org/gdb/documentation/)

## 🤝 Contributing

Feel free to:
- Add new solutions
- Improve existing solutions
- Add more test cases
- Enhance documentation

## 📄 License

This repository is for educational purposes.

---

**Happy Coding!** 🚀
