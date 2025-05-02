# 🗳️ Voting Simulation System

<div align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language">
  <img src="https://img.shields.io/badge/Functionality-Voting%20Simulation-green.svg" alt="Functionality">
  <img src="https://img.shields.io/badge/Interface-CLI-yellow.svg" alt="Interface">
</div>

## 📋 Description

Voting Simulation System is a command-line application written in C that simulates a basic voting process for six parties. It enables users to cast votes, and view the final results after secure PIN verification. The system also handles invalid access attempts by erasing vote data, making it an educational yet fun simulation of real-world voting logic.

## ✨ Features

* **Cast Vote:** Users can cast votes for one of six parties: BJP, NCP, RJD, BSP, AAM, or NOTA
* **Secure Result Viewing:** Results are accessible only through a security PIN
* **Access Retry Option:** If the PIN is incorrect, a retry code can be used
* **Winner Announcement:** Declares one or more winners based on highest vote count
* **Tamper Alert:** On failure to provide valid retry code, all votes are erased
* **Interactive CLI:** User-friendly prompts and formatting

## 💻 Technical Implementation

### Data Structure

An integer array is used to track the vote count for each party:

```c
int count[6] = {0, 0, 0, 0, 0, 0};
```

Each index represents:

* `count[0]` - BJP
* `count[1]` - NCP
* `count[2]` - RJD
* `count[3]` - BSP
* `count[4]` - AAM
* `count[5]` - NOTA

### Core Functions

* `Voting_Result(int count[])`: Displays total votes and declares the winner(s)

## 🔧 Compilation and Execution

### Prerequisites

* GCC compiler or any standard C compiler
* Terminal / Command Prompt

### Compilation

```bash
gcc -o voting_sim voting_sim.c
```

### Execution

```bash
./voting_sim    # On Linux/Mac
voting_sim.exe  # On Windows
```

## 🚀 Usage Guide

### On Start

```
------Welcome To Mayank's Voting Simulation!------
```

### Voting Menu

```
1. BJP
2. NCP
3. RJD
4. BSP
5. AAM
6. NOTA
```

* Enter the number to vote for a party
* To end voting, enter: `1234`

### Viewing Results

* Enter PIN: `5678`
* If incorrect, enter Retry Code: `2007`
* Invalid retry attempt erases all vote data

## 🔐 Security Mechanism

* **PIN Code:** 5678
* **Retry Code:** 2007
* **Tamper Prevention:** Invalid access deletes all records

## 🌟 Future Enhancements

* Store vote logs in file
* Voter ID validation before voting
* Admin panel for real-time monitoring
* Graphical display of vote counts
* Party-wise statistics and history

## 🔍 Error Handling

* Invalid vote option (not 1-6)
* Incorrect PIN detection
* Wrong retry code leads to data erasure

## 👨‍💻 Author

Created by **Mayank Kumar**

<div align="center"> <p>Made with ❤️ for learning and fun</p> </div>
