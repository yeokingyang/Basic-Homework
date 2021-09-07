/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework11_13;
import java.util.Scanner;
import java.util.Date;
/**
 *
 * @author yeoki
 */
public class Homework11_13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Account account = new Account(9999, 3000);
		SavingsAccount savings = new SavingsAccount(9009, 1000);
		CheckingAccount checking = new CheckingAccount(1003, 25000, -20);
		
		account.setAnnualInterestRate(4.0);
		savings.setAnnualInterestRate(4.0);
		checking.setAnnualInterestRate(4.0);
	
	
		account.deposit(55000);
		savings.deposit(1500);
		checking.deposit(5500);

		
		account.withdraw(1500);
		savings.withdraw(15000);
		checking.withdraw(1500);
                
                
		System.out.println(account.toString());
		System.out.println(savings.toString());
		System.out.println(checking.toString());
	}
    }
    

class Account {
	
	private int id;
	private double balance;
	private static double annualInterestRate;
	private Date dateCreated;

	
	Account() {
		this(0, 0); 
	}

	Account(int id, double balance) {
		this.id = id;
		this.balance = balance;
		annualInterestRate = 0;
		dateCreated = new Date();
	}
	
	
	public void setId(int id) {
		this.id = id;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}


	public void setAnnualInterestRate(double annualInterestRate) {
		this.annualInterestRate = annualInterestRate;
	}

        
	public int getId() {
		return id;
	}


	public double getBalance() {
		return balance;
	}

	
	public double getAnnualInterestRate() {
		return annualInterestRate;
	}

	
	public String getDateCreated() {
		return dateCreated.toString();
	}

	
	public double getMonthlyInterestRate() {
		return annualInterestRate / 12;
	}

	
	public double getMonthlyInterest() {
		return balance * (getMonthlyInterestRate() / 100);
	}

	
	public void withdraw(double amount) {
		balance -= amount;
	}

	
	public void deposit(double amount) {
		balance += amount;
	}

	
	public String toString() {
		return "\nAccount ID: " + id + "\nDate created: " + getDateCreated()
			+ "\nBalance: $" + String.format("%.2f", balance) + 
			"\nMonthly interest: $" + String.format("%.2f", getMonthlyInterest());
	}
}

class CheckingAccount
		extends Account {
	
	private double overdraftLimit;

	
	public CheckingAccount() {
		super();
		overdraftLimit = -20;
	}

	
	public CheckingAccount(int id, double balance, double overdraftLimit) {
		super(id, balance);
		this.overdraftLimit = overdraftLimit;
	}

	
	public void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}

	
	public double getOverdraftLimit() {
		return overdraftLimit;
	}

	
	public void withdraw(double amount) {
		if (getBalance() - amount > overdraftLimit) {
			setBalance(getBalance() - amount);
		}
		else
			System.out.println("Error! Amount exceeds overdraft limit!");
	}

	
	public String toString() {
		return super.toString() + "\nOverdraft limit: $" + 
		String.format("%.2f", overdraftLimit);
	}
}


class SavingsAccount
		extends Account {
	
	public SavingsAccount() {
		super();
	}

	
	public SavingsAccount(int id, double balance) {
		super(id, balance);
	}


	public void withdraw(double amount) {
		if (amount < getBalance()) {
			setBalance(getBalance() - amount);
		}
		else
			System.out.println(
				"Error! Savings account overdrawn transtaction denied");
	}
}
