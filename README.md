# Product-Billing-System-using-Linked-List-in-C

A powerful menu-driven **Product Billing and Inventory Management System** developed in **C Programming** using **Linked Lists** and **Dynamic Memory Allocation**.
This project demonstrates CRUD operations, billing generation, inventory management, and data handling using structures and pointers in C.

The application allows users to:

* Add new products
* View available products
* Search products
* Update product details
* Delete products
* Generate customer bills
* Manage product stock dynamically

---

# ✨ Features

## 🛒 Product Management

Add products with:

* Product ID
* Product Name
* Quantity
* Price

---

## 📋 View Products

Displays all available products stored in the linked list.

---

## 🔍 Search Product

Search products using product name.

---

## ✏️ Update Product Details

Modify:

* Product ID
* Quantity
* Price

---

## ❌ Delete Product

Delete products using product ID.

---

## 🧾 Billing System

Generate customer bill with:

* Product Name
* Quantity Purchased
* Price Per Item
* Total Amount

Automatically updates stock quantity after purchase.

---

## ⚡ Dynamic Memory Allocation

Uses:

* malloc()
* free()

for efficient memory management.

---

## 🧠 Linked List Implementation

Products are stored dynamically using singly linked lists.

---

# 🛠️ Technologies Used

* C Programming
* Linked Lists
* Dynamic Memory Allocation
* GCC Compiler
* Linux/Unix Environment

---

# 📂 Project Structure

```text
.
├── main.c
├── header.h
└── README.md
```

---

# 📌 Working Principle

1. User selects an option from menu
2. Program performs required operation
3. Linked list dynamically stores product details
4. Billing system calculates total amount
5. Stock quantity updates automatically

---

# 🔥 Key Concepts Demonstrated

✔️ Structures in C

✔️ Linked Lists

✔️ Dynamic Memory Allocation

✔️ CRUD Operations

✔️ Function Prototypes

✔️ Pointer Manipulation

✔️ Menu Driven Programming

✔️ Inventory Management

---

# ⚙️ Setup & Installation Guide

## 📥 Clone the Repository

```bash
git clone https://github.com/sandipoguvarshitha/inventory-management-and-billing-system.git

cd inventory-management-and-billing-system
```

---

# 🛠️ Requirements

## Linux Environment Recommended

This project works on:

* Ubuntu
* Debian
* Kali Linux
* Fedora
* Arch Linux

It can also run on:

* Windows (MinGW / CodeBlocks)
* macOS

---

# Required Compiler

## Install GCC Compiler

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential
```

### Fedora

```bash
sudo dnf install gcc
```

### Arch Linux

```bash
sudo pacman -S gcc
```

---

# ▶️ Compile the Program

```bash
gcc main.c -o billing
```

---

# ▶️ Run the Application

## Linux/macOS

```bash
./billing
```

## Windows

```bash
billing.exe
```

---

# 💻 Sample Menu

```text
1.addproduct
2.view product
3.search product
4.update product
5.delete product
6.billing system
7.exit
```

---

# 💬 Example Billing

```text
enter product id for billing
101

enter quantity to buy
2

===== BILL =====
Product: Laptop
Quantity: 2
Price per item: 50000
Total Amount: 100000
================
```

---

# 🧩 Product Structure

```c
typedef struct product
{
    int id;
    char name[20];
    int quantity;
    int price;
    struct product *next;
}st;
```

---

# 📚 Important Functions Used

| Function | Purpose                     |
| -------- | --------------------------- |
| malloc() | Allocate memory dynamically |
| free()   | Free allocated memory       |
| strcmp() | Compare product names       |
| scanf()  | Read user input             |
| printf() | Display output              |

---

# 🚀 Future Enhancements

* File Handling for Data Storage
* GST Calculation
* Multiple Product Billing
* Admin Login System
* Product Categories
* Search by Product ID
* Date & Time in Bills
* Customer Details
* Database Integration

---

# ⚠️ Important Notes

* Product IDs should be unique
* Billing updates stock automatically
* If quantity exceeds stock, purchase is denied
* Data is stored temporarily during execution
* Data will be lost after program exits unless file handling is added

---

# 👨‍💻 Learning Outcomes

This project helps understand:

* Linked List Implementation
* Dynamic Memory Allocation
* Inventory Management Systems
* Billing Logic
* CRUD Operations
* Pointer Concepts in C
* Menu Driven Applications

---

# ⭐ Support

If you found this project useful:

⭐ Star the repository

🍴 Fork the project

🛠️ Contribute improvements

---

# 👨‍💻 Author

Developed using C Programming Language and Linked List Data Structure.
