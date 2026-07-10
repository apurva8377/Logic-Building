/////////////////////////////////////////////////////////
//
//  Program Name :  Program24.java
//  Discription  :  Program to display "Jay ganesh" on console using Loop.
//  Function     :  
//  Input        :  
//  Output       :  Jay Ganesh
//                  Jay ganesh
//                  Jay ganesh
//                  jay Ganesh
//  Author       :  Apurva Vilas Shinde
//  Date         :  09/07/2026
//
//////////////////////////////////////////////////////////

// Better Approach

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

class Marvellous
{
    public void Display()
    {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}

class Program24
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        mobj.Display();
    }
}

