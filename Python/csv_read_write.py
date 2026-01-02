#!/usr/bin/env python3
"""
CSV Read and Write Program
This program demonstrates how to read from and write to CSV files using Python's csv module.
"""

import csv
import os


def write_csv(filename, data, headers=None):
    """
    Write data to a CSV file.
    
    Args:
        filename (str): Name of the CSV file to write
        data (list): List of lists or list of dictionaries containing data to write
        headers (list): Optional list of header names (used when data is list of lists)
    
    Returns:
        bool: True if successful, False otherwise
    """
    try:
        if not data:
            print(f"✗ Error: No data provided to write")
            return False
        
        with open(filename, 'w', newline='', encoding='utf-8') as csvfile:
            if isinstance(data[0], dict):
                # If data is a list of dictionaries
                writer = csv.DictWriter(csvfile, fieldnames=data[0].keys())
                writer.writeheader()
                writer.writerows(data)
            else:
                # If data is a list of lists
                writer = csv.writer(csvfile)
                if headers:
                    writer.writerow(headers)
                writer.writerows(data)
        
        print(f"✓ Successfully wrote data to {filename}")
        return True
    
    except Exception as e:
        print(f"✗ Error writing to CSV file: {e}")
        return False


def read_csv(filename, as_dict=False):
    """
    Read data from a CSV file.
    
    Args:
        filename (str): Name of the CSV file to read
        as_dict (bool): If True, return list of dictionaries; otherwise return list of lists
    
    Returns:
        list: List of rows (either as lists or dictionaries) or None if error
    """
    try:
        if not os.path.exists(filename):
            print(f"✗ Error: File '{filename}' not found")
            return None
        
        data = []
        with open(filename, 'r', newline='', encoding='utf-8') as csvfile:
            if as_dict:
                reader = csv.DictReader(csvfile)
                data = list(reader)
            else:
                reader = csv.reader(csvfile)
                data = list(reader)
        
        print(f"✓ Successfully read {len(data)} rows from {filename}")
        return data
    
    except Exception as e:
        print(f"✗ Error reading CSV file: {e}")
        return None


def display_csv_data(data, title="CSV Data"):
    """
    Display CSV data in a formatted way.
    
    Args:
        data (list): List of lists or list of dictionaries
        title (str): Title to display above the data
    """
    print(f"\n{'=' * 60}")
    print(f"{title}")
    print('=' * 60)
    
    if not data:
        print("No data to display")
        return
    
    if isinstance(data[0], dict):
        # Display dictionary data
        headers = list(data[0].keys())
        print(" | ".join(headers))
        print("-" * 60)
        for row in data:
            print(" | ".join(str(row.get(h, '')) for h in headers))
    else:
        # Display list data
        for row in data:
            print(" | ".join(str(cell) for cell in row))
    
    print('=' * 60)


def append_csv(filename, data):
    """
    Append data to an existing CSV file.
    
    Args:
        filename (str): Name of the CSV file
        data (list): List of lists or list of dictionaries to append
    
    Returns:
        bool: True if successful, False otherwise
    """
    try:
        if not os.path.exists(filename):
            print(f"✗ Error: File '{filename}' not found. Use write_csv() to create a new file.")
            return False
        
        if not data:
            print(f"✗ Error: No data provided to append")
            return False
        
        # For dictionary data, read fieldnames first before opening in append mode
        fieldnames = None
        if isinstance(data[0], dict):
            with open(filename, 'r', newline='', encoding='utf-8') as readfile:
                reader = csv.DictReader(readfile)
                fieldnames = reader.fieldnames
        
        with open(filename, 'a', newline='', encoding='utf-8') as csvfile:
            if fieldnames:
                writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
                writer.writerows(data)
            else:
                writer = csv.writer(csvfile)
                writer.writerows(data)
        
        print(f"✓ Successfully appended data to {filename}")
        return True
    
    except Exception as e:
        print(f"✗ Error appending to CSV file: {e}")
        return False


def demo():
    """
    Demonstration of CSV read and write operations.
    """
    print("\n" + "=" * 60)
    print("CSV Read and Write Program - Demonstration")
    print("=" * 60)
    
    # Example 1: Writing and reading with list of lists
    print("\n--- Example 1: Using List of Lists ---")
    
    filename1 = "students.csv"
    headers = ["Name", "Age", "Grade", "City"]
    students_data = [
        ["Alice Johnson", 20, "A", "New York"],
        ["Bob Smith", 22, "B+", "Los Angeles"],
        ["Charlie Brown", 21, "A-", "Chicago"],
        ["Diana Prince", 23, "A+", "Boston"],
        ["Eve Wilson", 20, "B", "Seattle"]
    ]
    
    # Write CSV
    write_csv(filename1, students_data, headers)
    
    # Read CSV
    read_data = read_csv(filename1)
    display_csv_data(read_data, "Students Data (List Format)")
    
    # Example 2: Writing and reading with list of dictionaries
    print("\n--- Example 2: Using List of Dictionaries ---")
    
    filename2 = "products.csv"
    products_data = [
        {"Product": "Laptop", "Price": 1200, "Quantity": 5, "Category": "Electronics"},
        {"Product": "Mouse", "Price": 25, "Quantity": 50, "Category": "Electronics"},
        {"Product": "Keyboard", "Price": 75, "Quantity": 30, "Category": "Electronics"},
        {"Product": "Monitor", "Price": 300, "Quantity": 15, "Category": "Electronics"}
    ]
    
    # Write CSV
    write_csv(filename2, products_data)
    
    # Read CSV as dictionaries
    read_data_dict = read_csv(filename2, as_dict=True)
    display_csv_data(read_data_dict, "Products Data (Dictionary Format)")
    
    # Example 3: Appending data to existing CSV
    print("\n--- Example 3: Appending Data ---")
    
    new_students = [
        ["Frank Miller", 22, "B+", "Denver"],
        ["Grace Lee", 21, "A", "Miami"]
    ]
    
    append_csv(filename1, new_students)
    
    # Read updated data
    updated_data = read_csv(filename1)
    display_csv_data(updated_data, "Updated Students Data (After Append)")
    
    # Example 4: Appending dictionary data
    print("\n--- Example 4: Appending Dictionary Data ---")
    
    new_products = [
        {"Product": "Webcam", "Price": 80, "Quantity": 20, "Category": "Electronics"},
        {"Product": "Headphones", "Price": 60, "Quantity": 40, "Category": "Electronics"}
    ]
    
    append_csv(filename2, new_products)
    
    # Read updated products
    updated_products = read_csv(filename2, as_dict=True)
    display_csv_data(updated_products, "Updated Products Data (After Append)")
    
    print("\n" + "=" * 60)
    print("Demonstration completed!")
    print(f"CSV files created: {filename1}, {filename2}")
    print("=" * 60 + "\n")


if __name__ == "__main__":
    demo()
