# Makefile for LeetCode C programs
# Supports C17 standard with gcc

CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -pedantic -g
LDFLAGS =

# Directories
SRC_DIR = .
BUILD_DIR = build
BIN_DIR = bin

# Find all C source files in the current directory
SOURCES = $(wildcard $(SRC_DIR)/*.c)
# Generate executable names (without .c extension)
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

# Default target: build all C programs
.PHONY: all
all: $(BIN_DIR) $(EXECUTABLES)

# Create bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Rule to compile individual C programs
$(BIN_DIR)/%: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
	@echo "Compiled $< -> $@"

# Run a specific program (usage: make run PROG=program_name)
.PHONY: run
run:
	@if [ -z "$(PROG)" ]; then \
		echo "Usage: make run PROG=program_name"; \
		echo "Example: make run PROG=two_sum"; \
	else \
		if [ -f $(BIN_DIR)/$(PROG) ]; then \
			./$(BIN_DIR)/$(PROG); \
		else \
			echo "Program $(PROG) not found. Build it first with: make $(BIN_DIR)/$(PROG)"; \
		fi \
	fi

# Debug a specific program with gdb (usage: make debug PROG=program_name)
.PHONY: debug
debug:
	@if [ -z "$(PROG)" ]; then \
		echo "Usage: make debug PROG=program_name"; \
		echo "Example: make debug PROG=two_sum"; \
	else \
		if [ -f $(BIN_DIR)/$(PROG) ]; then \
			gdb $(BIN_DIR)/$(PROG); \
		else \
			echo "Program $(PROG) not found. Build it first with: make $(BIN_DIR)/$(PROG)"; \
		fi \
	fi

# Clean compiled files
.PHONY: clean
clean:
	rm -rf $(BIN_DIR) $(BUILD_DIR)
	@echo "Cleaned build artifacts"

# List all available C programs
.PHONY: list
list:
	@echo "Available C programs:"
	@for file in $(SOURCES); do \
		basename $$file .c; \
	done

# Help target
.PHONY: help
help:
	@echo "LeetCode C Makefile"
	@echo ""
	@echo "Usage:"
	@echo "  make              - Build all C programs"
	@echo "  make list         - List all available C programs"
	@echo "  make run PROG=... - Run a specific program"
	@echo "  make debug PROG=...- Debug a specific program with gdb"
	@echo "  make clean        - Remove all compiled files"
	@echo ""
	@echo "Example:"
	@echo "  make                    # Build all programs"
	@echo "  make run PROG=two_sum   # Run the two_sum program"
	@echo "  make debug PROG=two_sum # Debug the two_sum program"
