/////////////////////////////////////////////////////////
//
//  Program Name  : Program0299.java
//  Description   : Problems on Array
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0299
{
    public static void main(String A[])
    {
        LinkedList<Double> vobj = new LinkedList<Double>();

        vobj.add(10.2);
        vobj.add(30.7);
        vobj.add(12.6);
        vobj.add(78.9);
        vobj.add(90.7);

        System.out.println(vobj);

        vobj.addFirst(10.0);
        vobj.addLast(100.0);

        vobj.remove(2);

        System.out.println(vobj);

        Iterator iobj = vobj.iterator();

        while (iobj.hasNext()) 
        {
            System.out.println(iobj.next());   
        }

        vobj.clear();
    }
}


