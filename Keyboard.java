import java.util.Scanner;
public class Keyboard {

	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String str,keyboard;
		int len;
		keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
		while(sc.hasNext()){
			str = sc.nextLine();
			len = str.length();
			for(int i = 0;i<len;i++ ){
				if(str.charAt(i)==' ')System.out.print(" ");
				else
				System.out.print(keyboard.charAt(keyboard.indexOf(str.charAt(i))-1));
			}
			System.out.println();
		
		}

	}

}