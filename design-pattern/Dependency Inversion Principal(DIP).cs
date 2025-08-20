/*
    High-level modules → business logic, বড় কাজ করা ক্লাস

    Low-level modules → technical কাজ, যেমন database, file, notification ইত্যাদি

    DIP বলে: High-level ক্লাস সরাসরি Low-level ক্লাসের উপর নির্ভর করবে না।
    বরং interface বা abstract class এর উপর নির্ভর করবে।

    class + class = connect by interface
*/


using System;
// SOLID
// S - Single Responsibility Principle - A class should have only one reason to change
// O - Open Closed Principle - A class should be open for extension but closed for modification
// L - Liskov Substitution Principle - A class should be replaceable by its subclass without affecting the functionality
// I - Interface Segregation Principle - A class should not be forced to implement interfaces it does not use
// D - Dependency Inversion Principle - A class should depend on abstraction not on concretions  
// High-level modules should not depend on low-level modules. Both should depend on abstractions (interfaces or abstract classes).


// ==========================
// Low-level Module
// ==========================
// public class EmailNotification
// {
//     public void Send()
//     {
//         Console.WriteLine("Email Send");
//     }
// }

// ==========================
// High-level Module (DIP break)
// ==========================
// public class NotificationService
// {
//     private EmailNotification _email;

//     public NotificationService()
//     {
//         // High-level module সরাসরি Low-level class এর উপর নির্ভর করছে
//         _email = new EmailNotification();
//     }

//     public void Notify()
//     {
//         _email.Send(); // High-level module (NotificationService) Low-level module (EmailNotification) এর উপর নির্ভর করছে
//     }
// }


// ==========================
// High-level Module (DIP maintain)
// ==========================
public interface INotification
{
    void Send();
}

public class EmailNotification : INotification
{
    public void Send() => Console.WriteLine("Email Send");
}

public class SMSNotification : INotification
{
    public void Send() => Console.WriteLine("SMS Send");
}

public class NotificationService
{
    private INotification _notification;

    public NotificationService(INotification notification)
    {
        _notification = notification; // High-level module now depends on abstraction
    }

    public void Notify()
    {
        _notification.Send();
    }
}



// ==========================
// Program
// ==========================
class Program
{
    static void Main(string[] args)
    {
        // DIP break
        // NotificationService service = new NotificationService();
        // service.Notify();

        // সমস্যা দেখা দেবে যদি নতুন notification যোগ করতে চাই
        // যেমন: SMSNotification বা WhatsAppNotification
        // NotificationService class modify করতে হবে

        // DIP maintain
        NotificationService service = new NotificationService(new EmailNotification());
        service.Notify();
    }
}
