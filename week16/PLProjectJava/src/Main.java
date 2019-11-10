import java.util.LinkedList;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Main {

	public static void main(String[] args) {
		LinkedList<String> NameList=new LinkedList<String>();
		String currentDirectory=System.getProperty("user.dir");
		File file=new File(currentDirectory+"/"+args[0]);
		
		try {
			Scanner scan=new Scanner(file);
			while(scan.hasNextLine()) {
				NameList.add(scan.nextLine());
			}
			
		}catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		try {
			NameList.sort(null);
			//System.out.println(NameList);
			String search=args[1];
			boolean found=false;
			String looking;
			int lineNumber=0;
			while(!found) {
				looking=NameList.pop();
				lineNumber++;
				if(looking.equals(search))
					found=true;
			}
			try {
				String biggerOne=NameList.pop();
				lineNumber++;
				System.out.println("Larger Name: "+biggerOne+" and it's line number: "+lineNumber);
			}
			catch(Exception e) {
				System.out.println("There is no larger name");
			}
		}
		catch(Exception e) {
			System.out.println("The name is not in the list");
		}
	}

}
