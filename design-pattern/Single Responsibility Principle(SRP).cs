using System;
// SOLID
// S - Single Responsibility Principle - A class should have only one reason to change
// O - Open Closed Principle - A class should be open for extension but closed for modification
// L - Liskov Substitution Principle - A class should be replaceable by its subclass without affecting the functionality
// I - Interface Segregation Principle - A class should not be forced to implement interfaces it does not use
// D - Dependency Inversion Principle - A class should depend on abstraction not on concretions  

public class Payment{
    public void PayTution(){
        Console.WriteLine("Pay Tution");
    }
}
public class Notification{
    public void EmailNotification(){
        Console.WriteLine("Email Notification");
    }
}
public class Courese{
    public void EnrollCourese(){
        Console.WriteLine("Enroll Course");
    }
}
public class Student
{
    public void showinfo()
    {
        Console.WriteLine("Student");
    }
    public void addStudent()
    {
        Console.WriteLine("Add Student");
    }
    // public void EnrollCourese()
    // {
    //     Console.WriteLine("Enroll Course");
    // }
    // public void PayTution()
    // {
    //     Console.WriteLine("Pay Tution");
    // }
    // public void EmailNotification(){
    //     Console.WriteLine("Email Notification");
    // }
}
class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Hello World");
    }
}


/*
    আগে Student ক্লাসে অনেক দায়িত্ব ছিল (Student Info, Add, Course Enroll, Payment, Notification)।

    আলাদা আলাদা ক্লাস (Payment, Notification, Courese, Student) তৈরি করেছেন।
    Payment → শুধু টিউশন ফি দেয়

    Notification → শুধু নোটিফিকেশন পাঠায়

    Course → শুধু কোর্স এনরোল করে

    Student → শুধু ছাত্র সম্পর্কিত কাজ করে

    এভাবে করলে SRP মেনে চলে ✅
*/