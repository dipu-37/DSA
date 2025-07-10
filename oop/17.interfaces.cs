using System;

interface IMobileUser
{
    void SendMessage();
    void MakeCall();
}
class Rahim : IMobileUser
{
    public void SendMessage()
    {
        Console.WriteLine("Rahim: Sending SMS...");
    }

    public void MakeCall()
    {
        Console.WriteLine("Rahim: Making a call...");
    }
}

class Karim : IMobileUser
{
    public void SendMessage()
    {
        Console.WriteLine("Karim: Sending WhatsApp message...");
    }

    public void MakeCall()
    {
        Console.WriteLine("Karim: Making a video call...");
    }
}
class Program
{
    static void Main()
    {
        IMobileUser user;

        user = new Rahim();
        user.SendMessage();
        user.MakeCall();

        Console.WriteLine();

        user = new Karim();
        user.SendMessage();
        user.MakeCall();
    }
}
