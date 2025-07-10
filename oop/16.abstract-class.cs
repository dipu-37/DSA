using System;

abstract class MobileUser
{
    // abstract method - only method signature, no body
    public
        abstract void SendMessage();

    // optional: common non-abstract method
    public
        void Call()
    {
        Console.WriteLine("Calling from mobile...");
    }
}

class Rahim : MobileUser
{
    public
        override void SendMessage()
    {
        Console.WriteLine("Rahim: Sending message - 'Hello, I am Rahim!'");
    }
}

class Karim : MobileUser
{
    public
        override void SendMessage()
    {
        Console.WriteLine("Karim: Sending message - 'Hi, this is Karim.'");
    }
}

class Program
{
    public static void Main()
    {
        MobileUser user;

        user = new Rahim();
        user.Call();        // Common method from abstract class
        user.SendMessage(); // Rahim's overridden version

        Console.WriteLine();

        user = new Karim();
        user.Call();        // Common method from abstract class
        user.SendMessage(); // Karim's overridden version
    }
}
