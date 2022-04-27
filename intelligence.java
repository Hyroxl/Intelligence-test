import java.util.Scanner;
public class Main {
	static void intelligence(boolean is_a_failure, String name) {
		if (is_a_failure == true) {
			int randomnum2 = (int)(Math.random()* 5);
			if (randomnum2 == 0) {
				System.out.println(name + " is stupid");
			} else if (randomnum2 == 1) {
				System.out.println(name + " is maidenless");
			} else if (randomnum2 == 2) {
				System.out.println(name + " needs to touch grass");
			} else if (randomnum2 == 3) {
				System.out.println("your mom");
			} else if (randomnum2 == 4) {
				System.out.println(name + " is short");
			}
		} else {
				System.out.println(name + " is smart");
		}
	}
	public static void main(String[] args) {
		Scanner usernameinput = new Scanner(System.in);
		System.out.println("Whats their Name?:");
		String Username = usernameinput.nextLine();
		int randomnum = (int)(Math.random() * 101);
		System.out.println("their score is " + randomnum);
		if (randomnum <= 50) {
			intelligence(true, Username);
		} else if (randomnum > 50) {
			intelligence(false, Username);
		} 	
	}
}
