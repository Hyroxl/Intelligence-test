import java.util.Scanner;
public class Main {
	static void intelligence(boolean is_a_failure, String name) {
		if (is_a_failure == true) {
			System.out.println(name + " is stupid");
		} else {
			System.out.println(name + " is smart");
		}
	}
	public static void main(String[] args) {
		Scanner usernameinput = new Scanner(System.in);
		System.out.println("Whats their Name?");
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
