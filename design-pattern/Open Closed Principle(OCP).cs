using System;
// SOLID
// S - Single Responsibility Principle - A class should have only one reason to change
// O - Open Closed Principle - A class should be open for extension but closed for modification
// L - Liskov Substitution Principle - A class should be replaceable by its subclass without affecting the functionality
// I - Interface Segregation Principle - A class should not be forced to implement interfaces it does not use
// D - Dependency Inversion Principle - A class should depend on abstraction not on concretions  

public interface Inotification
{
    void Log();
    void Send();
    void Save();
}
public class EmaiNotification : Inotification
{
    public void Send()
    {
        Console.WriteLine("Email Send");
    }
    public void Log()
    {
        Console.WriteLine("Email Log");
    }
    public void Save()
    {
        Console.WriteLine("Email Save");
    }
}

public class SMSNotification : Inotification
{
    public void Send()
    {
        Console.WriteLine("SMS Send");
    }
    public void Log()
    {
        Console.WriteLine("SMS Log");
    }
    public void Save()
    {
        Console.WriteLine("SMS Save");
    }
}
public class whatsAppNotification : Inotification
{
    public void Send()
    {
        Console.WriteLine("WhatsApp Send");
    }
    public void Log()
    {
        Console.WriteLine("WhatsApp Log");
    }
    public void Save()
    {
        Console.WriteLine("WhatsApp Save");
    }
}

// NotificationContext is a context class which is used to process the notification
// fix dry principle - Don't repeat yourself
public class NotificationContext
{
    private Inotification _notification;
    public NotificationContext(Inotification notification)
    {
        _notification = notification;
    }
    public void Process()
    {
        _notification.Send();
        _notification.Log();
        _notification.Save();
    }
}

// voilation of interface segregation principle
public class PushNotification : Inotification{
    public void Send(){
        Console.WriteLine("Push Send");
    }
    public void Log(){
        Console.WriteLine("Push Log");
    }
    public void Save(){
      // no need to implement this method
    }
}


class Program
{
    public static void Main(string[] args)
    {
        NotificationContext notificationContext = new NotificationContext(new EmaiNotification());
        notificationContext.Process();
        notificationContext = new NotificationContext(new SMSNotification());
        notificationContext.Process();
        notificationContext = new NotificationContext(new whatsAppNotification());
        notificationContext.Process();

        // Inotification emailNotification = new EmaiNotification();
        // emailNotification.Send();
        // emailNotification.Log();
        // emailNotification.Save();
        // Inotification smsNotification = new SMSNotification();
        // smsNotification.Send();
        // smsNotification.Log();
        // smsNotification.Save();

        // Inotification whatsAppNotification = new whatsAppNotification();
        // whatsAppNotification.Send();
        // whatsAppNotification.Log();
        // whatsAppNotification.Save();
    }
}