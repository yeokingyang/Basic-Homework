import java.io.*;
import java.util.Random;
import java.util.Scanner;



public class Lab_3 {
public static int NewRandom(int min, int max) {
    Random rand = new Random();
    int randomNum = rand.nextInt((max - min) + 1) + min;
    return randomNum;
}
public static void main(String args[])throws IOException, InterruptedException {
    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(ir);
    Bank myBank = new Bank();
    int Option = 1;
    int  Account_Number, Account_Password;
    String Name;
    double Balance, Money, OVL =-20;

    
    System.out.println("Please wait, the system is starting...");
    Thread.sleep(500);
    System.out.println("\n\nPlease Select Account Options below :");
    
    
    while (Option!=4){
        int foption=1;
        int soption=1;
        int toption=1;
        int firstoptionlogin=1;
        int secondoptionlogin=1;
        int thirdoptionlogin=1;
        
        Thread.sleep(250);
        System.out.println("\n1) Apply for Saving account");
        Thread.sleep(250);
        System.out.println("2) Apply for Checking account");
        Thread.sleep(250);
        System.out.println("3) Apply for Credit account");
        Thread.sleep(250);
        System.out.println("4) Quit\n\n");
        System.out.print("                       Enter Option [1-4]: ");
        
         Option = Integer.parseInt(br.readLine());
        
         switch(Option) {
             
            
             
case 1:  {  while(foption !=3) {
        Thread.sleep(250);
        System.out.println("1) Open a new bank account");
        Thread.sleep(250);
        System.out.println("2) Login to a bank account");
          Thread.sleep(250);
        System.out.println("3) Quit to a bank account");
          
        System.out.println();      
        System.out.print("                       Enter Option [1-3]: ");
      
        foption = Integer.parseInt(br.readLine());
    
        switch(foption) {
            
            
            
            case 1 :{ System.out.println("Enter a customer name :");
                     Name = br.readLine();
                     System.out.println("Enter a opening balance :");
                     Balance = Double.parseDouble(br.readLine());
                     Thread.sleep(250);
                     System.out.println("Creating your account....");
                     Thread.sleep(500);
                     int[] arrDetails= myBank.AddNewSavingAccount(Name, Balance);                     
                     System.out.println("Account Has been created\nAccount number: " + arrDetails[0]+"\nYour password : "+ arrDetails[1]);
                     break;
                     }
                     
            case 2 :{ System.out.println("Enter a account number :");
                     Account_Number = Integer.parseInt(br.readLine());
                                            if(myBank.SavingCheckAcc(Account_Number)==true){                    
                     System.out.println("Enter a account password :");
                     
                      int c=1;
                      firstoptionlogin=1;
                     while (c<4){
                         
                     Account_Password = Integer.parseInt(br.readLine());
                    if( myBank.SavingCheckPass(Account_Number, Account_Password)==true){
                     System.out.println("Login Succesful.\n\n");     
                                         
                                                                                   while(firstoptionlogin!=4) {
                                                                                  Thread.sleep(250);
                                                                                  System.out.println("1) Deposit to a bank account");
                                                                                  Thread.sleep(250);
                                                                                 System.out.println("2) Withdraw to bank account");
                                                                                  Thread.sleep(250);
                                                                                 System.out.println("3) Print the detailed account information including last transactions");
                                                                                  Thread.sleep(250);
                                                                                 System.out.println("4) Quit saving account");
                                                                                  Thread.sleep(250);
                                                                                  System.out.print("                       Enter Option [1-4]: ");
                                                                               firstoptionlogin = Integer.parseInt(br.readLine());
                                                                                                                             switch (firstoptionlogin){
                         
                            
                                                                                                                                 case 1 :               System.out.println("Enter a deposit amount :");
                                                                                                                                                        Money = Double.parseDouble(br.readLine());
                     
                                                                                                                                                         myBank.SavingDeposit(Account_Number, Account_Password, Money);
                                                                                                                                              break;
      
                                                                                                                                 case 2 :          System.out.println("Enter a withdraw amount :");
                                                                                                                                                     Money = Double.parseDouble(br.readLine());
                                                                                                                                                   myBank.SavingWithdraw(Account_Number, Account_Password, Money);      
                                                                                                                                                      break;
                                         
                                                                                                                                 case 3 :         myBank.SavingTransaction(Account_Number, Account_Password);          
                                                                                                                                                break;
                                         
                                                                                                                                 case 4 :  {System.out.println("Quitting Current Saving Account.....");
                         
                                                                                                                                             firstoptionlogin=4;
                                                                                                                                             c=4;
                                                                                                                                             break;            
                                                                                                                                               }
                                                                                                                                 default: System.out.println("Invalid option. Please try again.");
                                                                                                                                                          }
                                                                                                              }
                           
               
                                                                                          }
                    else{
                                                                                  System.out.println("You entered wrong password for"+" "+c +" time.");
                                                                                  c++;
                     
                       
                                                                                    if (c==4){
                                                                                   System.out.println("You entered wrong password for 3 times, Resetting the whole process........");
                                                                                      c =1;
                                                                                    break;}
                    }                                            
                    
                              }
                            }                                                                       
                       
                       else
                           System.out.println("You entered wrong account.");
                              
                       break;   
             }
            case 3 :         {System.out.println("Quitting Saving Account Menu.....");
                                  
                                     foption=3;
                                     break;            
                                       }           
            default: System.out.println("Invalid option. Please try again.");
        }
        
    }
 }
break;
           
             
case 2:  {while(soption !=3) {
        Thread.sleep(1000);
        System.out.println("1) Open a new checking bank account");
        Thread.sleep(250);
        System.out.println("2) login to a bank account");
        Thread.sleep(250);
        System.out.println("3) quit to bank account");
        Thread.sleep(250);    
        System.out.println();      
        System.out.print("                       Enter Option [1-3]: ");
        soption = Integer.parseInt(br.readLine());
        switch(soption) {
            
            
            case 1 : {System.out.println("Enter a customer name :");
                     Name = br.readLine();
                     System.out.println("Enter a opening balance :");
                     Balance = Double.parseDouble(br.readLine());
                     Thread.sleep(250);
                     System.out.println("Creating your account....");
                     Thread.sleep(500);
                     int[] arrDetails= myBank.AddNewCheckingAccount(Name, Balance, OVL);                     
                     System.out.println("Account Has been created\nAccount number: " + arrDetails[0]+"\nYour password : "+ arrDetails[1]);
                     break;}
            case 2 : {System.out.println("Enter a account number :");
                     Account_Number = Integer.parseInt(br.readLine());
                                            if(myBank.CheckingCheckAcc(Account_Number)==true){                    
                     System.out.println("Enter a account password :");
                     
                                                                                  int c=1;
                                                                                  secondoptionlogin=1;
                                                                                  while (c<4){
                                                                                  Account_Password = Integer.parseInt(br.readLine());
                                                                                  if( myBank.CheckingCheckPass(Account_Number, Account_Password)==true){
                                                                                   System.out.println("Login Succesful.\n\n");   
                     
                                                                                             while(secondoptionlogin!=4){
                                                                                             Thread.sleep(250);
                                                                                              System.out.println("1) Deposit to a bank account");
                                                                                               Thread.sleep(250);
                                                                                              System.out.println("2) Withdraw to bank account");
                                                                                               Thread.sleep(250);
                                                                                              System.out.println("3) Print the detailed account information including last transactions");
                                                                                               Thread.sleep(250);
                                                                                              System.out.println("4) Quit checking account");
                                                                                               Thread.sleep(250);
                                                                                               System.out.print("                       Enter Option [1-4]: ");
                             
                                                                                            secondoptionlogin = Integer.parseInt(br.readLine());
                         
                                                                                                                                     switch (secondoptionlogin) {
                                                                                                                                      case 1:         System.out.println("Enter a deposit amount :");
                                                                                                                                                        Money = Double.parseDouble(br.readLine());
                                                                                                                                                          myBank.CheckingDeposit(Account_Number, Account_Password, Money);
                                                                                                                                                          break;
                                             
                                                                                                                                      case 2:    System.out.println("Enter a withdraw amount :");
                                                                                                                                                Money = Double.parseDouble(br.readLine());
                                                                                                                                                myBank.CheckingWithdraw(Account_Number, Account_Password, Money);
                                                                                                                                                break;
                                                                                                                                                
                                                                                                                                      case 3:  myBank.CheckingTransaction(Account_Number, Account_Password);
                                                                                                                                                 break;
                                    
                                                                                                                                      case 4:{System.out.println("Quitting Current Checking Account....");
                                                                                                                                               secondoptionlogin=4;
                                                                                                                                               c=4;
                                                                                                                                                break;
                                                                                                                                      }
                                                                                                                                     default : System.out.println("Invalid option. Please try again.");
                                                                                                                                    }
                                                                                                                           }
                                                                                                                           
                                                                                                                                                        }
                                            else{
                                           System.out.println("You entered wrong password for"+" "+c +" time.");
                                              c++;
                     
                                               
                                            if (c==4){
                                           System.out.println("You entered wrong password for 3 times, Resetting the whole process........");
                                       c=1;
                                       break;  }
                          }
                        }
                      }
                       
                       else
                           System.out.println("You entered wrong account, Resetting the whole process.......");
                           break;
                    }       
            
            
            case 3 : {System.out.println("Quitting Checking Account Menu.....");
                                     soption=3;
                                     break;            
                                    }           
            default: System.out.println("Invalid option. Please try again.");
              }      
        }
    }
break;
       
      
case 3 : {   while(toption !=3) {
        Thread.sleep(1000);
        System.out.println("1) Open a new bank account");
        Thread.sleep(250);
        System.out.println("2) login to a bank account");
        Thread.sleep(250);
        System.out.println("3) Quit Credit Account Menu");       
        System.out.println();      
        System.out.print("                       Enter Option [1-3]: ");
        toption = Integer.parseInt(br.readLine());
        switch(toption) {
            
            
            case 1 :{ System.out.println("Enter a customer name :");
                     Name = br.readLine();
                     System.out.println("Enter a opening balance :");
                     Balance = Double.parseDouble(br.readLine());
                     Thread.sleep(250);
                     System.out.println("Creating your account....");
                     Thread.sleep(500);
                     int[] arrDetails= myBank.AddNewCreditAccount(Name, Balance);                     
                     System.out.println("Account Has been created\nAccount number: " + arrDetails[0]+"\nYour password : "+ arrDetails[1]);
                     break;
                     }
            case 2 : {System.out.println("Enter a account number :");
                     Account_Number = Integer.parseInt(br.readLine());
                                            if(myBank.CreditCheckAcc(Account_Number)==true){                    
                     System.out.println("Enter a account password :");
                     
                      int c=1;
                      thirdoptionlogin=1;
                     while (c<4){
                     Account_Password = Integer.parseInt(br.readLine());
                                           if( myBank.CreditCheckPass(Account_Number, Account_Password)==true){
                     System.out.println("Login Succesful.\n\n");   
                     
                                                                                    while(thirdoptionlogin!=5){
                                                                                    Thread.sleep(1000);
                                                                                    System.out.println("1) Deposit to a bank account");
                                                                                    Thread.sleep(250);
                                                                                    System.out.println("2) Withdraw to bank account");
                                                                                    Thread.sleep(250);
                                                                                    System.out.println("3) Pay credit to bank account");
                                                                                    Thread.sleep(250);
                                                                                    System.out.println("4) Print the detailed account information including last transactions and credit");
                                                                                    Thread.sleep(250);
                                                                                    System.out.println("5) Quit Credit Account Menu");
                                                                                    Thread.sleep(250);
                                                                                    System.out.println();      
                                                                                    System.out.print("                       Enter Option [1-5]: ");
                                                                                    thirdoptionlogin = Integer.parseInt(br.readLine());
                        
                                                                                                                   switch (thirdoptionlogin){
                                                                                                                          case 1:  System.out.println("Enter a deposit amount :");
                                                                                                                                      Money = Double.parseDouble(br.readLine());
                                                                                                                                      myBank.CreditDeposit(Account_Number, Account_Password, Money);     
                                                                                                                                      break;
                                                                                                                          case 2:    System.out.println("Enter a withdraw amount :");
                                                                                                                                       Money = Double.parseDouble(br.readLine());
                                                                                                                                      myBank.CreditWithdraw(Account_Number, Account_Password, Money);
                                                                                                                                      break;
                                      
                                                                                                                           case 3:      System.out.println("Paying credit....\n");           
                                                                                                                                        myBank.CreditPay(Account_Number, Account_Password);
                                                                                                                                        break;
                                        
                                                                                                                           case 4:  myBank.CreditTransaction(Account_Number, Account_Password);
                                                                                                                                        break;
                                        
                                                                                                                           case 5:{System.out.println("Quitting Current Credit Account....");
                                                                                                                                       thirdoptionlogin=5;
                                                                                                                                       c=4;
                                                                                                                                       break;
                                                                                                                                    }
                                                                                                                           default: System.out.println("Invalid option. Please try again.");
                                                                                  }                     
                                                                         }
                                                                                                               
                                                }              
                                           
                                           else{
                                                    System.out.println("You entered wrong password for"+" "+c +" time.");
                                                       c++;
                                            
                                                       if (c==4){
                                                       System.out.println("You entered wrong password for 3 times, Resetting the whole process........");
                                                       c=1;
                                                       break;}
                 
                                                  }
                     }
               }
                                           

                       else
                           System.out.println("You entered wrong account.");
                           break;
    }
    
       case 3 : {System.out.println("Quitting Checking Account Menu.....");
                                     toption=3;
                                     break;            
                                    }           
       default: System.out.println("Invalid option. Please try again.");
                }
               
          }       
 }        
break;
                 
           
case 4: {System.out.println("System Shutting Down...");
                       return;}
             
default: System.out.println("Invalid option. Please try again.");
          
            
         }
    }
}


static class Bank {
    
    private SavingAccount[] accounts;
    private CheckingAccount [] caccounts;
    private CreditAccount [] creaccounts;
    private int numOfSavingAccounts;
    private int numOfCheckingAccounts;
    private int numOfCreditAccounts;
    
    public Bank() {
        accounts = new SavingAccount[10];
        caccounts = new CheckingAccount[10];
        creaccounts = new CreditAccount[10];
        numOfSavingAccounts = 0;
        numOfCheckingAccounts = 0;
        numOfCreditAccounts = 0;
    }
    public int [] AddNewSavingAccount(String Name, Double Balance) {
        SavingAccount b = new SavingAccount(Name, Balance);
        accounts[numOfSavingAccounts] = b;
        numOfSavingAccounts++;
        int Acc = b.getAccountNum()[0];
        int Pass = b.getAccountNum()[1];
        int[]details = {Acc, Pass};
        return details;
    }
    
    public int [] AddNewCheckingAccount(String Name, Double Balance, Double OVL) {
        CheckingAccount c = new  CheckingAccount(Name, Balance, OVL);
        caccounts[numOfCheckingAccounts] = c;
        numOfCheckingAccounts++;
        int Acc = c.getAccountNum()[0];
        int Pass = c.getAccountNum()[1];
        int[]details = {Acc, Pass};
        return details;
    }
    
    public int [] AddNewCreditAccount (String Name, Double Balance){
        CreditAccount cre = new CreditAccount (Name, Balance);
        creaccounts[numOfCreditAccounts]= cre;
        numOfCreditAccounts++;
        int Acc = cre.getAccountNum()[0];
        int Pass = cre.getAccountNum()[1];
        int[]details = {Acc, Pass};
        return details;
    }
      

    
       
    public boolean SavingCheckAcc(int Account_Number){
                for (int i =0; i<numOfSavingAccounts; i++) { 
                    int a = accounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                System.out.println("Saving Account Number is available");
                return true;
                      }
               
    }
        return false;
    }
    
        public boolean CheckingCheckAcc(int Account_Number){
                for (int i =0; i<numOfCheckingAccounts; i++) { 
                    int a = caccounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                System.out.println("Checking Account Number is available");
                return true;
                      }
                
    }
        return false;
    }
        
     public boolean CreditCheckAcc(int Account_Number){
                for (int i =0; i<numOfCreditAccounts; i++) { 
                    int a = creaccounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                System.out.println("Credit Account Number is available");
                return true;
                      }
                
    }
        return false;
    }
    
    
    
    
     public boolean SavingCheckPass(int Account_Number, int pass){
                for (int i =0; i<numOfSavingAccounts; i++) { 
                    int a = accounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                         int p = accounts[i].getAccountNum()[1];
              
                        if( pass == p) {
                    return true;
                }

           }
     }
                return false;
     }               
     
     
     
     public boolean CheckingCheckPass(int Account_Number, int pass){
                for (int i =0; i<numOfCheckingAccounts; i++) { 
                    int a = caccounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                         int p = caccounts[i].getAccountNum()[1];
              
                        if( pass == p) {
                    return true;
                }
                       
           }
     }
                return false;
     }               
    
    
        public boolean CreditCheckPass(int Account_Number, int pass){
                for (int i =0; i<numOfCreditAccounts; i++) { 
                    int a = creaccounts[i].getAccountNum()[0];
                      if (Account_Number == a) {
                         int p = creaccounts[i].getAccountNum()[1];
              
                        if( pass == p) {
                    return true;
                }
                       
           }
     }
                return false;
     }             
    
      
    public void SavingWithdraw(int Account_Number, int pass, double Money) {
        for (int i =0; i<numOfSavingAccounts; i++) {     
            int a = accounts[i].getAccountNum()[0];
            if (Account_Number == a) {
                int p = accounts[i].getAccountNum()[1];
      
                    accounts[i].withdraw(Money);
                    return;
         
            }
        }
    }
    
    public void CheckingWithdraw(int Account_Number, int pass, double Money) {
        for (int i =0; i<numOfCheckingAccounts; i++) {     
            int a = caccounts[i].getAccountNum()[0];
            if (Account_Number == a) {
               
                int p = caccounts[i].getAccountNum()[1];
              
              
                    caccounts[i].withdraw(Money);
                    return;
                
                }              
        }  
    }
    
     public void CreditWithdraw(int Account_Number, int pass, double Money) {
        for (int i =0; i<numOfCreditAccounts; i++) {     
            int a = creaccounts[i].getAccountNum()[0];
            if (Account_Number == a) {
               
                int p = creaccounts[i].getAccountNum()[1];
              
        
         
                    creaccounts[i].withdraw(Money);
                    return;
         
                }       
        }

    }  
     
       public void CreditPay(int Account_Number, int pass) {
        for (int i =0; i<numOfCreditAccounts; i++) {     
            int a = creaccounts[i].getAccountNum()[0];
            if (Account_Number == a) {
               
                int p = creaccounts[i].getAccountNum()[1];
              
       
                    creaccounts[i].creditpay();
                    return;
                 
                }              
      

        }  
    }   
      
      
    
    public void SavingDeposit(int Account_Number, int pass, double Money) {  
        for (int i =0; i<numOfSavingAccounts; i++) {     
            int a = accounts[i].getAccountNum()[0];
            if (Account_Number == a) {
                int p = accounts[i].getAccountNum()[1];
                if( pass == p) {
                    accounts[i].deposit(Money);
                    return;   
                }
              
        }  
       
    }
  }
    
    public void CheckingDeposit(int Account_Number, int pass, double Money) {  
        for (int i =0; i<numOfCheckingAccounts; i++) {     
            int a = caccounts[i].getAccountNum()[0];
            if (Account_Number == a) {
                int p = caccounts[i].getAccountNum()[1];
                if( pass == p) {
                    caccounts[i].deposit(Money);
                    return;   
                }
              
        }  
      
    }
  }
    
    public void CreditDeposit(int Account_Number, int pass, double Money) {  
        for (int i =0; i<numOfCreditAccounts; i++) {     
            int a = creaccounts[i].getAccountNum()[0];
            if (Account_Number == a) {
                int p = creaccounts[i].getAccountNum()[1];
                if( pass == p) {
                    creaccounts[i].deposit(Money);
                    return;   
                }
              
        }  

    }
  }
        
    public void SavingTransaction(int Account_Number, int pass) {
        for(int i = 0;i<numOfSavingAccounts; i++) {
            int a = accounts[i].getAccountNum()[0];
            if (Account_Number ==  a ) {
                int p = accounts[i].getAccountNum()[1];
                if( pass == p) {
                    System.out.println(accounts[i].getAccountInfo());
                    System.out.println("                        Last transaction: " + accounts[i].getTransactionInfo(accounts[i].getNumberOfTransactions()-1));
                    System.out.println("                        Monthly Interest: " + accounts[i].getMonthlyInterest());
                    System.out.println("                        Date Created: " + accounts[i].getDateCreated());
                    return;
                }
            }
        }
        System.out.println("                       You have entered a wrong Account number or Password.");
    }

     public void CheckingTransaction(int Account_Number, int pass) {
        for(int i = 0;i<numOfCheckingAccounts; i++) {
            int a = caccounts[i].getAccountNum()[0];
            if (Account_Number ==  a ) {
                int p = caccounts[i].getAccountNum()[1];
                if( pass == p) {
                    System.out.println(caccounts[i].getAccountInfo());
                    System.out.println("                        Last transaction: " + caccounts[i].getTransactionInfo(caccounts[i].getNumberOfTransactions()-1));
                    System.out.println("                        Monthly Interest: " + caccounts[i].getMonthlyInterest());
                     System.out.println("                        Overdraftlimit: " + caccounts[i].getOverdraftLimit());
                    System.out.println("                        Date Created: " + caccounts[i].getDateCreated());
                    return;
                }
            }
        }
        System.out.println("                       You have entered a wrong Account number or Password.");
    }
    
    
      public void CreditTransaction(int Account_Number, int pass) {
        for(int i = 0;i<numOfCreditAccounts; i++) {
            int a = creaccounts[i].getAccountNum()[0];
            if (Account_Number ==  a ) {
                int p = creaccounts[i].getAccountNum()[1];
                if( pass == p) {
                    System.out.println(creaccounts[i].getAccountInfo());
                    System.out.println("                        Last transaction: " + creaccounts[i].getTransactionInfo(creaccounts[i].getNumberOfTransactions()-1));
                    System.out.println("                        Monthly Interest: " + creaccounts[i].getMonthlyInterest());
                     System.out.println("                        Credit: "          + creaccounts[i].getCredit());
                    System.out.println("                        Date Created: " + creaccounts[i].getDateCreated());
                    return;
                }
            }
        }
        System.out.println("                       You have entered a wrong Account number or Password.");
    }
     
     
static class SavingAccount{
    protected int User_Password;
    protected int accountNum;
    protected String customerName;
    protected double balance;
    protected double[] transactions;
    protected String[] transactionsSummary;
    protected int numOfTransactions;
    protected  static int noOfAccounts=0;
    private static double annualInterestRate = 4.5;
    private java.util.Date dateCreated;
     
    public SavingAccount() {
        dateCreated = new java.util.Date();
    }
       
    public double getAnnualInterestRate() {
        return annualInterestRate;
    }   
      
      public String getDateCreated() {
        return this.dateCreated.toString();
    }
    
      
      
    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }  
      
     public double getMonthlyInterestRate() {
        return (annualInterestRate / 100) / 12 ;
    }

    public double getMonthlyInterest() {
        return balance * getMonthlyInterestRate();
    }
  
    
    public String getAccountInfo(){          
        return "                        Account number: " + accountNum + "\n                        Customer Name: " + customerName + "\n                        Balance:" + balance +"\n";
    }
    public String getTransactionInfo(int n) {
        String transaction = transactionsSummary[n];
        return transaction;
        }
    public SavingAccount(String abc, double xyz){        
        this();
        customerName = abc;        
        balance = xyz;        
        noOfAccounts ++;
        User_Password = NewRandom(1000, 9999);
        accountNum = NewRandom(800000000, 999999999);       
        transactions = new double[100];                         
        transactionsSummary = new String[100];               
        transactions[0] = balance;                      
        transactionsSummary[0] = "A balance of : $" + Double.toString(balance) + " was deposited successfully.";       
        numOfTransactions = 1;             
    }
    public int [] getAccountNum(){
        int account = accountNum;
        int Pass = User_Password;
        int [] details = {account, Pass};
        return details;
    }
    public int getNumberOfTransactions() {           
        return numOfTransactions;          
    }         
    public void deposit(double amount){         
        if (amount<=0) {         
            System.out.println("Amount to be deposited should be positive");        
        } else {          
            balance = balance + amount;            
            transactions[numOfTransactions] = amount;            
            transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was deposited.";            
            numOfTransactions++;
            System.out.println("                       Amount deposited successfully");
        }         
    }
    public void withdraw(double amount) {                   
        boolean c = true;
        if (amount<=0){                
            System.out.println("Amount to be withdrawn should be positive"); 
        } 
        else {  
            if (balance < amount) {  
                System.out.println("Insufficient balance");
               
                    
            } else {  
                balance = balance - amount;
                transactions[numOfTransactions] = amount;
                transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was withdrawn.";
                numOfTransactions++;
                System.out.println("                       Amount Withdrawn successfully");
            }
        }
    }
}


static class CheckingAccount extends SavingAccount{
    private double overdraftLimit;
  
  
     
    public CheckingAccount() {   
        overdraftLimit = -20;
    }

    public double getOverdraftLimit() {
		return overdraftLimit;
	}
        
    public void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}
       
  

    public CheckingAccount(String abc, double xyz, double overdraftLimit){        
        this();
          customerName = abc;        
        balance = xyz;        
        noOfAccounts ++;
        User_Password = NewRandom(1000, 9999);
        accountNum = NewRandom(800000000, 999999999);       
        transactions = new double[100];                         
        transactionsSummary = new String[100];               
        transactions[0] = balance;                      
        transactionsSummary[0] = "A balance of : $" + Double.toString(balance) + " was deposited successfully.";       
        numOfTransactions = 1;             
        overdraftLimit = -20;                
        transactionsSummary[0] = "A balance of : $" + Double.toString(balance) + " was deposited successfully.";       
                  
    }
 
     
    public void deposit(double amount){         
        if (amount<=0) {         
            System.out.println("Amount to be deposited should be positive");        
        } else {          
            balance = balance + amount;            
            transactions[numOfTransactions] = amount;            
            transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was deposited.";            
            numOfTransactions++;
            System.out.println("                       Amount deposited successfully");
        }         
    }
    public void withdraw(double amount) {                   
      
        if (amount<=0){                
            System.out.println("Amount to be withdrawn should be positive"); 
        } 
        else {  
            if (balance - amount > overdraftLimit) {  
                System.out.println("Using overdraft Limit");
                balance = balance - amount;
                transactions[numOfTransactions] = amount;
                transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was withdrawn.";
                numOfTransactions++;
                System.out.println("                       Amount Withdrawn successfully");
                    
            } else {  
               System.out.println("Error! Amount exceeds overdraft limit.");        
            }
            
        }
        
        
    }
}


static class CreditAccount extends SavingAccount{
    private double credit;

  
    public CreditAccount() {
        credit=0;
    }
    
       
    public void setCredit(double credit) {
		this.credit = credit;
	}  
 
    public double getCredit() {
		return credit;
	}
 
  
    public CreditAccount(String abc, double xyz){        
        this();      
        customerName = abc;        
        balance = xyz;        
        noOfAccounts ++;
        User_Password = NewRandom(1000, 9999);
        accountNum = NewRandom(800000000, 999999999);       
        transactions = new double[100];                         
        transactionsSummary = new String[100];               
        transactions[0] = balance;                      
        transactionsSummary[0] = "A balance of : $" + Double.toString(balance) + " was deposited successfully.";       
        numOfTransactions = 1;             
        credit = 0;            
        transactionsSummary[0] = "A balance of : $" + Double.toString(balance) + " was deposited successfully.";   
    }

         
    public void deposit(double amount){         
        if (amount<=0) {         
            System.out.println("Amount to be deposited should be positive");        
        } else {          
            balance = balance + amount;            
            transactions[numOfTransactions] = amount;            
            transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was deposited.";            
            numOfTransactions++;
            System.out.println("                       Amount deposited successfully");
        }         
    }
    public void withdraw(double amount) {                   
  
        if (amount<=0){                
            System.out.println("Amount to be withdrawn should be positive"); 
        } 
        else {  
            if (amount <= 10000 && credit < 10000 && balance < amount ) {  
                System.out.println("Balance not enough, using credit....");
               balance = balance-amount; 
               if (balance < 0)
                 balance = -balance;
               credit = credit + balance;
               balance = 0;      
                transactions[numOfTransactions] = amount;
                transactions[numOfTransactions] = credit;
                transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was withdrawn using credit.";
                transactionsSummary[numOfTransactions] = "$." + Double.toString(credit) + " is in credit.";
                numOfTransactions++;     
            } 
            else if (credit>=10000){
                 System.out.println("Your Credit exceeded the limit please pay it");
            }
            else if (amount>10000){
                  System.out.println("Amount withdrawn exceeded balance and credit provided");
            }
            
            else {  
                balance = balance - amount;
                transactions[numOfTransactions] = amount;
                transactionsSummary[numOfTransactions] = "$." + Double.toString(amount) + " was withdrawn.";
                numOfTransactions++;
                System.out.println("                       Amount Withdrawn successfully");
            }
        }
    }
    
       public void creditpay() {                   
  
     
            if (balance<credit) {  
               System.out.println("Not enough Balance left to fully pay credit");
                    
            }
            else if(credit==0) {
                 System.out.println("You have no credit.");
            }
            
            else {  
                balance = balance - credit;
                transactions[numOfTransactions] = credit;
                transactionsSummary[numOfTransactions] = "$." + Double.toString(credit) + "Amount of Credit payed";
                 credit =0;
                numOfTransactions++;
                System.out.println("                       Credit payed successfully");
            }
        }
    }
       
}

}
