class Multi5
{
    public static void main(String Args[]) throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        Demo obj1 = new Demo();
        obj1.start();
        obj1.join();
        System.out.println("End of main thread");
        
    }
}

class Demo extends Thread
{
    public void run()
    {
        for(int i = 1; i < 10; i++)
        {
            try
            {
                System.out.println("Value of i is : "+i);
                Thread.sleep(10000);

            }
            catch(Exception obj)
            {}
        }
        
    }
}