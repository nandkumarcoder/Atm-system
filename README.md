# ATM Banking System

A simple console-based ATM banking system implemented in C. This program allows users to perform basic banking operations such as deposits, withdrawals, transfers, and balance inquiries.

## Features

- **Deposit Money**: Add money to your account.
- **Withdraw Money**: Withdraw money from your account (if sufficient balance is available).
- **Transfer Money**: Transfer money to another account (if sufficient balance is available).
- **Check Balance**: View the current account balance and transaction details.
- **Exit**: Exit the program.

## How It Works

1. The user enters their name and account number at the start.
2. A menu is displayed with options for various banking operations.
3. The user selects an option, performs the operation, and the program updates the account balance accordingly.
4. The program runs in a loop until the user chooses to exit.

## Prerequisites

- A C compiler (e.g., GCC) installed on your system.

## Compilation and Execution

1. Compile the program:
   ```bash
   gcc bank.c -o bank
   ```
2. Run the compiled program:
   ```bash
   ./bank
   ```

## Menu Options

1. **Deposit Amount**: Enter the amount to deposit, and it will be added to your total balance.
2. **Withdraw Amount**: Enter the amount to withdraw. If the amount is less than or equal to the total balance, the withdrawal is successful.
3. **Transfer Amount**: Enter the amount to transfer. If the amount is less than or equal to the total balance, the transfer is successful.
4. **Check Balance**: Displays the current balance, total deposits, total withdrawals, and total transfers.
5. **Exit**: Exits the program and displays a summary of the account.

## Example

### Input:
```
Enter name: John
Enter Ac no: 12345

***************** WELCOME TO BANKING SYSTEM ******************

1 Deposit amount:
2 Withdrawal amount:
3 Transfer amount:
4 Check balance:
5 Exit:
Enter your choice: 1
Enter the amount you want to deposit: 500
```


## File Structure

- `bank.c`: The main program file containing all the banking operations.

## Notes

- The initial account balance is set to 1000.
- Ensure valid inputs for all operations to avoid unexpected behavior.
- The program is designed for educational purposes and does not include advanced error handling or security features.



## License

This project is licensed under the MIT License.

## Acknowledgments

- This project is a basic implementation of an ATM banking system for learning purposes.
