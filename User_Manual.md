# Restaurant Billing System - User Manual

## Table of Contents
1. Introduction
2. System Requirements
3. Getting Started
4. Using the System
5. Troubleshooting
6. Frequently Asked Questions

## 1. Introduction
The Restaurant Billing System is a console-based application designed to streamline the process of taking orders and generating bills in a restaurant setting. This manual will guide you through the installation and usage of the system.

## 2. System Requirements
- Windows/Linux/Mac OS
- C compiler (GCC recommended)
- Basic understanding of console applications

## 3. Getting Started

### Installation
1. Download the source code file `restaurantBillingSystemUsingFunc.c`
2. Compile the code using a C compiler:
   ```bash
   gcc restaurantBillingSystemUsingFunc.c -o restaurantBilling
   ```
3. Run the executable:
   ```bash
   ./restaurantBilling
   ```

## 4. Using the System

### Main Menu Navigation
1. Start the program
2. Press 's' to begin ordering
3. Choose from the following options:
   - (1) Fast Food
   - (2) BBQ
   - (3) Finalize Order

### Ordering Process
1. Select item category (Fast Food or BBQ)
2. Choose item number from the displayed menu
3. Enter quantity when prompted
4. Choose from the following options:
   - (1) Edit Quantities
   - (2) Finalize Order
   - (3) Continue Ordering

### Editing Orders
1. Select "Edit Quantities" option
2. Enter new quantities for each item
3. System will automatically update the total bill

### Finalizing Order
1. Select "Finalize Order" option
2. Review the total bill amount
3. System will display the final bill and thank you message

## 5. Troubleshooting

### Common Issues and Solutions
1. Program won't start
   - Ensure proper compilation
   - Check system requirements

2. Invalid input errors
   - Use correct menu options (1-6)
   - Enter valid quantities (positive numbers)

3. Calculation errors
   - Verify quantities entered
   - Check item prices in the menu

## 6. Frequently Asked Questions

### Q: How do I modify an order?
A: Use the "Edit Quantities" option after placing items in your order.

### Q: Can I order from both Fast Food and BBQ menus?
A: Yes, you can switch between menus before finalizing your order.

### Q: How do I cancel an order?
A: You can either:
- Start a new order
- Exit the program and restart

### Q: Is there a limit to the number of items I can order?
A: Yes, each category has a maximum of 5 items (MAX_ITEMS).

## Support
For additional support or questions, please contact the system administrator. 