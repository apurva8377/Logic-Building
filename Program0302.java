/////////////////////////////////////////////////////////
//
//  Program Name  : Program0302.java
//  Description   : Problems on Data Structures
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

import java.security.Key;
import java.util.*;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0302
{
    public static void main(String A[])
    {
        Hashtable<String, Integer> hobj = new Hashtable<String, Integer>();

        hobj.put("PPA", 27000);
        hobj.put("LB", 28000);
        hobj.put("LSP", 29000);
        hobj.put("PYTHON", 29000);
        
        System.out.println(hobj);

        System.out.println(hobj.keys());

        Enumeration eobj = hobj.keys();

        String key = null;

        while(eobj.hasMoreElements())
        {
            key = (String)eobj.nextElement();
            System.out.println("Kay : "+key);
            System.out.println("Value : "+hobj.get(key));
        }
    }
}


