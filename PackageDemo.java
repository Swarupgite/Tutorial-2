import Marvellous.Maths;
import Marvellous.Infosystem.Arithematic;

class packageDemo
{
    public static void main(String Arg[])
    {
        Maths mobj = new Maths();
        int iRet = 0;
        iRet = mobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);
        iRet = mobj.Substraction(10,11);
        System.out.println("Substraction is : "+iRet);

    }
}