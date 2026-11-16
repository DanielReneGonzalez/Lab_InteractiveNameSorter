# Alphabetical Name List Builder

A command-line C++ application that allows users to interactively build, validate, and maintain an alphabetically sorted list of names in real time.

## Overview

This program continuously prompts the user to enter names one at a time, storing them dynamically in a `vector<string>`. After each valid entry, the list is automatically sorted alphabetically using `sort()` and displayed to the console. Entering a blank line cleanly terminates the program and displays the final count of recorded names.

## Features

- **Dynamic Storage:** Uses `vector<string>` to store an arbitrary number of names without a fixed size limit.
- **Full-Line Input:** Uses `getline()` to support multi-word names (e.g., first and last names) and accurately detect empty Enter key presses.
- **Input Validation:** Rejects entries that contain only whitespace characters (spaces, tabs) using `<cctype>` (`isspace`), prompting the user to re-enter a valid name.
- **Real-Time Alphabetical Sorting:** Automatically sorts the list after every valid addition via `sort()` from `<algorithm>`.
- **Modular Structure:** Separates input validation (`isWhitespaceOnly`) and console output (`displayNames`) into dedicated helper functions.

