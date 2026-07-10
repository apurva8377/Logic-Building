/////////////////////////////////////////////////////////
//
//  Program Name  : Program44.c
//  Description   : It is used to Check 1st no. is divisible by 2nd no. or not.
//  Input         : 12   2       Ouput : true
//  Input         : 12   3       Ouput : true
//  Input         : 12   5       Ouput : false
//  Input         : 12   12      Ouput : true
//  Input         : 12   7       Ouput : flase
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDivisible()
//  Description :       It is used to display 
//  Input         :     12   2       Ouput : true
//  Input         :     12   3       Ouput : true
//  Input         :     12   5       Ouput : false
//  Input         :     12   12      Ouput : true
//  Input         :     12   7       Ouput : flase
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is completely divisible by %d\n",iValue1, iValue2);
    }
    else
    {
        printf("%d is not divisible %d\n",iValue1, iValue2);
    }

    return 0;
}