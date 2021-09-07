/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework11_8;
import java.util.Date;
import java.util.ArrayList;
/**
 *
 * @author yeoki
 */
public class Homework11_8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
		Account account = new Account("George", 1122, 1000);

		
		account.setAnnualInterestRate(1.5);


		account.deposit(30);
		account.deposit(40);
		account.deposit(50);

		
		account.withdraw(5);
		account.withdraw(4);
		account.withdraw(2);

		
		System.out.println("       Account Summary"); 
		System.out.println("------------------------------------");
		System.out.println("Account holder name: " + account.getName());
		System.out.println("Interest rate: " + account.getAnnualInterestRate());
		System.out.printf("Balance: $%.2f\n", account.getBalance());
		System.out.println("\n     List of transactions");
		System.out.println("------------------------------------");
		for (int i = 0; i < account.getTransactions().size(); i++) {
			System.out.println("Date: " + 
				(account.getTransactions()).get(i).getDate());
			System.out.println("Type: " + 
				(account.getTransactions()).get(i).getType());
			System.out.println("Amount: $" + 
				(account.getTransactions()).get(i).getAmount());
			System.out.println("Balance: $" + 
				(account.getTransactions()).get(i).getBalance());
			System.out.println("Description: " + 
				(account.getTransactions()).get(i).getDescription());
			System.out.println();
		}
	}
}
    
class CheckingAccount
		extends Account {
	// Data fields
	private double overdraftLimit;

	/** Construct a default CheckingAccount object */
	public CheckingAccount() {
		super();
		overdraftLimit = -20;
	}

	/** Construct a CheckingAccout with specified id, balance and overdraftLimit */
	public CheckingAccount(int id, double balance, double overdraftLimit) {
		super(id, balance);
		this.overdraftLimit = overdraftLimit;
	}

	/** Set a new overdraft limit */
	public void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}

	/** Return overdraft limit */
	public double getOverdraftLimit() {
		return overdraftLimit;
	}

	/** Decrease balance by amount */
	public void withdraw(double amount) {
		if (getBalance() - amount > overdraftLimit) {
			setBalance(getBalance() - amount);
		}
		else
			System.out.println("Error! Amount exceeds overdraft limit.");
	}

	/** Return a String decription of CheckingAccount class */
	public String toString() {
		return super.toString() + "\nOverdraft limit: $" + 
		String.format("%.2f", overdraftLimit);
	}
}



class SavingsAccount
		extends Account {
	
	/** Construct a default CheckingAccount object */
	public SavingsAccount() {
		super();
	}

	/** Construct a SavingsAccount with specified id, balance */
	public SavingsAccount(int id, double balance) {
		super(id, balance);
	}

	/** Decrease balance by amount */
	public void withdraw(double amount) {
		if (amount < getBalance()) {
			setBalance(getBalance() - amount);
		}
		else
			System.out.println(
				"Error! Savings account overdrawn transtaction rejected");
	}
}


class Account {
	
	private String name;
	private int id;
	private double balance;
	private static double annualInterestRate;
	private Date dateCreated;
	private ArrayList<Transaction> transactions;

	
	Account() {
		name = "";
		id = 0;
		balance = 0;
		annualInterestRate = 0;
		dateCreated = new Date(); 
		transactions = new ArrayList<Transaction>();
	}

	
	Account(int id, double balance) {
		name = "";
		this.id = id;
		this.balance = balance;
		dateCreated = new Date();
		transactions = new ArrayList<Transaction>();
	}

	
	Account(String name, int id, double balance) {
		this(id, balance);
		this.name = name;
	}

	
	public void setName(String name) {
		this.name = name;
	}

	
	public String getName() {
		return name;
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
		transactions.add(new Transaction('W', amount, balance, 
			"Withdrawal from account"));
	}

	
	public void deposit(double amount) {
		balance += amount;
		transactions.add(new Transaction('D', amount, balance, 
			"Deposit to account"));
	}

	
	public ArrayList<Transaction> getTransactions() {
		return transactions;
	}
}

class Transaction {
	
	private java.util.Date date;
	private char type;
	private double amount;
	private double balance;
	private String description;


	public Transaction(char type, double amount, 
		double balance, String description) {
		date = new java.util.Date();
		this.type = type;
		this.amount = amount;
		this.balance = balance;
		this.description = description;
	}

	
	public String getDate() {
		return date.toString();
	}
	
	public void setType(char type) {
		this.type = type;
	}

	
	public char getType() {
		return type;
	}

	
	public void setAmount(double amount) {
		this.amount = amount;
	}

	
	public double getAmount() {
		return amount;
	}

	
	public void setBalance(double balance) {
		this.balance = balance;
	}

	
	public double getBalance() {
		return balance;
	}

	
	public void setDescription(String description) {
		this.description = description;
	}

	
	public String getDescription() {
		return description;
	}
}