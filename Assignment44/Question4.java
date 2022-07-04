//Q.4. Write java program to accept directory name from user and write data of all files along with its name into one newly created file named as "Marvellous.txt".

import java.lang.*;
import java.util.*;
import java.io.File;
import java.io.FileFilter;
import java.io.*;
import java.io.IOException;

class Question4
{
	public static void main(String[] args) throws IOException
	{
		File filess = new File("Marvellos.txt");
		
		boolean result;
		
		result = filess.createNewFile();
		
		if(result)
		{
			System.out.println("File Created"+filess.getCanonicalPath());
		}
		else
		{
			System.out.println("File already exist at lication :"+filess.getCanonicalPath());
			
			return;
		}
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a path of the directory .");
		
		String fname1 = sobj.nextLine();
		
		 File directoryPath = new File(fname1);
         FileFilter textFilefilter = new FileFilter(){
         public boolean accept(File file) {
            boolean isFile = file.isFile();
            if (isFile) {
               return true;
            } else {
               return false;
            }
         }
      };
      File filesList[] = directoryPath.listFiles(textFilefilter);
      
	  for(File file : filesList) 
	  {		 
		 FileReader fr = new FileReader(file.getAbsolutePath());
		
		FileWriter fw = new FileWriter(filess,true);
		
		String str = "";
		
		str += file.getName() + "\t\n";
		
		int i;
		
		while((i = fr.read()) != -1)
		{
			str += (char)i;
		}
		str += "\n\n";
		fw.write(str);
		
		fr.close();
	    fw.close();
      }
	  System.out.println("Writing a data into file succesfully ");
	}
}