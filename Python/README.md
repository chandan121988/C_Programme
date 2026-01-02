# Python Programs

This directory contains Python programming examples and utilities.

## CSV Read and Write Program

### File: `csv_read_write.py`

A comprehensive Python program demonstrating CSV (Comma-Separated Values) file operations including reading, writing, and appending data.

### Features

1. **Write CSV Files**
   - Write data from lists of lists
   - Write data from lists of dictionaries
   - Automatic header generation

2. **Read CSV Files**
   - Read as lists of lists
   - Read as lists of dictionaries
   - Error handling for missing files

3. **Append to CSV Files**
   - Append data to existing CSV files
   - Support for both list and dictionary formats

4. **Display CSV Data**
   - Formatted console output
   - Supports both data formats

### Usage

#### Run the demonstration:
```bash
python3 csv_read_write.py
```

#### Use in your own code:
```python
from csv_read_write import write_csv, read_csv, append_csv

# Write data with headers
data = [
    ["Name", "Age", "City"],
    ["John", 25, "NYC"],
    ["Jane", 30, "LA"]
]
write_csv("output.csv", data[1:], headers=data[0])

# Read data
data = read_csv("output.csv")

# Append new rows
new_data = [["Bob", 28, "Chicago"]]
append_csv("output.csv", new_data)
```

### Requirements
- Python 3.x
- No external dependencies (uses built-in `csv` module)

### Example Output

The demonstration creates two sample CSV files:
- `students.csv` - Student information with names, ages, grades, and cities
- `products.csv` - Product catalog with names, prices, quantities, and categories

### Functions

- `write_csv(filename, data, headers=None)` - Write data to a new CSV file
- `read_csv(filename, as_dict=False)` - Read data from a CSV file
- `append_csv(filename, data)` - Append data to an existing CSV file
- `display_csv_data(data, title)` - Display CSV data in formatted console output
- `demo()` - Run a comprehensive demonstration of all features
