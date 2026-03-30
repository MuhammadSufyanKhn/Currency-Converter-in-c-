# 💱 Currency Converter in C++

A simple **console-based Currency Converter** program written in **C++**.
This application allows users to convert amounts between four currencies:

* USD (US Dollar)
* PKR (Pakistani Rupee)
* INR (Indian Rupee)
* GBP (British Pound)

The program uses predefined exchange rates and allows repeated conversions until the user chooses to exit.

---

## 📌 Features

* Convert between **USD, PKR, INR, and GBP**
* Input validation for incorrect currency selection
* Displays results with **2 decimal precision**
* Option to perform multiple conversions in one run

---

## 🧮 Supported Currency Codes

| Currency        | Code       |
| --------------- | ---------- |
| US Dollar       | `U` or `u` |
| Pakistani Rupee | `P` or `p` |
| Indian Rupee    | `I` or `i` |
| British Pound   | `G` or `g` |

---

## ⚙️ Exchange Rates 

### USD Rates

* 1 USD = 278.81 PKR
* 1 USD = 86.14 INR
* 1 USD = 0.82 GBP

### PKR Rates

* 1 PKR = 0.0035 USD
* 1 PKR = 0.30 INR
* 1 PKR = 0.0029 GBP

### INR Rates

* 1 INR = 0.011 USD
* 1 INR = 3.23 PKR
* 1 INR = 0.0095 GBP

### GBP Rates

* 1 GBP = 1.21 USD
* 1 GBP = 105.04 INR
* 1 GBP = 340.01 PKR

---

## 🛠️ Requirements

* C++ Compiler (GCC, MinGW, or any standard compiler)
* C++11 or later
* Terminal / Command Prompt

---

## ▶️ How to Compile and Run

### Step 1: Save the file

Save the code as:

```
currency_converter.cpp
```

### Step 2: Compile the program

Using **g++**:

```
g++ currency_converter.cpp -o converter
```

### Step 3: Run the program

On Windows:

```
converter
```

On Linux / Mac:

```
./converter
```

---

## 💻 Example Run

```
******************** Currency Converter ******************

Select your currency : U
Enter the amount : 100
Select the currency to convert to : P

Equivalent amount : 27881.00 /-PKR

Do you want to convert again? (y or n) : y
```

---

## 📂 Project Structure

```
Currency-Converter/
│
├── currency_converter.cpp
└── README.md
```

