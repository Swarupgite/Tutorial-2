class Wrapper
{
    public static void main(String Args[])
    {
        int no = 11;

        Integer iobj = no;  // boxing

        System.out.println(no);
        System.out.println(iobj);

        int i = iobj;  // Unboxing
        System.out.println(i);
    }
}