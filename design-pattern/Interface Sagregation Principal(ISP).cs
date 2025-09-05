using System;
// SOLID
// S - Single Responsibility Principle - A class should have only one reason to change
// O - Open Closed Principle - A class should be open for extension but closed for modification
// L - Liskov Substitution Principle - A class should be replaceable by its subclass without affecting the functionality
// I - Interface Segregation Principle - A class should not be forced to implement interfaces it does not use
// D - Dependency Inversion Principle - A class should depend on abstraction not on concretions  
// High-level modules should not depend on low-level modules. Both should depend on abstractions (interfaces or abstract classes).

// single responsibility principle maintained
public interface IsendNotification
{
    void Send();
}
public interface IlogNotification
{
    void Log();
}
public interface IsaveNotification
{
    void Save();
}
public class EmaiNotification : IsendNotification, IlogNotification, IsaveNotification
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

public class SMSNotification : IsendNotification, IlogNotification, IsaveNotification
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
public class whatsAppNotification : IsendNotification, IlogNotification, IsaveNotification
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
// fix interface segregation principle
public class PushNotification : IsendNotification, IlogNotification
{
    public void Send()
    {
        Console.WriteLine("Push Send");
    }
    public void Log()
    {
        Console.WriteLine("Push Log");
    }
    // public void Save(){
    //   // no need to implement this method
    // }
}



public class NotificationContext
{
    private IsendNotification _sendNotification { get; set; }
    private IlogNotification _logNotification { get; set; }
    private IsaveNotification _saveNotification { get; set; }
    public NotificationContext(IsendNotification sendNotification, IlogNotification logNotification, IsaveNotification saveNotification)
    {
        _sendNotification = sendNotification;
        _logNotification = logNotification;
        _saveNotification = saveNotification;
    }
    public void Process()
    {
        _sendNotification.Send();
        _logNotification.Log();
        if (_saveNotification != null)
        {
            _saveNotification.Save();
        }
    }
}
class Program
{
    public static void Main(string[] args)
    {
        // IsendNotification emailNotification = new EmaiNotification();
        // emailNotification.Send();
        // IlogNotification emailNotificationLog = new EmaiNotification();
        // emailNotificationLog.Log();
        // IsaveNotification emailNotificationSave = new EmaiNotification();
        // emailNotificationSave.Save();
        NotificationContext notificationContext = new NotificationContext(new EmaiNotification(), new EmaiNotification(), new EmaiNotification());
        notificationContext.Process();
        notificationContext = new NotificationContext(new SMSNotification(), new SMSNotification(), new SMSNotification());
        notificationContext.Process();
        notificationContext = new NotificationContext(new whatsAppNotification(), new whatsAppNotification(), new whatsAppNotification());
        notificationContext.Process();
        notificationContext = new NotificationContext(new PushNotification(), new PushNotification(), null);
        notificationContext.Process();
    }
}