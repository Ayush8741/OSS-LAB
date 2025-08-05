# Calculator Documentation

## Repository chosen: **maxicombina/c-calculator**

### Function Overview

1. **`void tokenize(const char* expr, Token tokens[], int* token_count)`**

   * Scans input string character-by-character
   * Converts numbers, operators, parentheses into a sequence of tokens

2. **`void shunting_yard(Token tokens[], int token_count, Token output_queue[], int* output_count)`**

   * Implements Dijkstra’s shunting-yard algorithm
   * Converts infix tokens to Reverse Polish Notation (RPN), respecting operator precedence and parentheses

3. **`int evaluate_rpn(Token output_queue[], int output_count)`**

   * Processes the RPN sequence using a stack
   * Handles supported operators: `+`, `-`, `*`, `/`, `%`, `^`
   * Performs integer arithmetic and returns result

4. **`int calculate(const char* expr)`**

   * High-level wrapper: calls `tokenize()`, then `shunting_yard()`, then `evaluate_rpn()`
   * Returns the computed integer result or handles error messages

5. **Utility routines** (within `calculator.c`)

   * Stack push/pop functions
   * Queue operations and simple static-size buffers

---

### Features

- Infix to postfix (RPN) conversion using the Shunting-Yard algorithm
- Stack-based evaluation of postfix expressions
- Support for operators: `+`, `-`, `*`, `/`, `%`, `^`
- Parentheses and operator precedence
- No floating-point support (integer-only)
- No unary minus or variables

---

### Clone the repository

```bash
git clone https://github.com/maxicombina/c-calculator.git
cd c-calculator
````

---

### Project Structure

```
c-calculator/
├── main.c           # Entry point
├── calculator.c     # Tokenization, parsing, evaluation
├── calculator.h     # Function declarations & token struct
└── README.md        # Documentation
```

---

### Limitations

* No float/double (only integer arithmetic)
* No unary operators (e.g., cannot write `-5`, must use `0 - 5`)
* No variable assignment or functions
* Fixed-size token and stack arrays

---
