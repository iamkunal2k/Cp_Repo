import java.util.*;
public class expt2a {
	String Name , address;
	float balance , rate;
	int contact , account_no;
	
	void create_acc() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Name of Accountant : ");
		Name = sc.next();
		System.out.println("Enter Account Number : ");
		account_no = sc.nextInt();
		System.out.println("Enter Contact Number : ");
		contact = sc.nextInt();
		System.out.println("Initial Balance : ");
		balance = sc.nextFloat();
		System.out.println("Rate of Interest : ");
		}

	void deposit() {
		Scanner sc = new Scanner(System.in);
		double amt = sc.nextDouble();
		balance += amt;
		System.out.println("Deposited Amount is : "+amt);
	}
	
	void withdraw() {
		Scanner sc = new Scanner(System.in);
		double amt = sc.nextDouble();
		balance -= amt;
		System.out.println("Withdrawn Amount is : "+amt);
	}
	
	void compute_Interest() {
		int time ;
		double interest;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter time in Years : ");
		time  = sc.nextInt();
		interest = balance*(1+(rate * time));
		System.out.println("Interest of years is : "+interest );
	}
	
	void Display() {
		System.out.println("Balance for account no" +account_no+  " is : " +balance);
	}
	public class expt2{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		expt2a Acc = new expt2a();
		int choice;
		System.out.println("Enter your choice : ");
		choice = sc.nextInt();
		switch(choice) {
		case 1 :
			Acc.create_acc();
			break;
		
		case 2 :
			Acc.deposit();
			break;
		
		case 3 :
			Acc.withdraw();
			break;
		
		case 4 :
			Acc.compute_Interest();
			break;
			
		case 5 :
			Acc.Display();
			break ;
		
		default :
			System.out.println("Invalid Number! ");
		}
			
		
	
	}

}
}