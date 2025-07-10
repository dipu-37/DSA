/*
using System;

class Person
{
    public string name;
    public int age;

    // Default Constructor
    public Person()
    {
        name = "Dipu";
        age = 20;
        Console.WriteLine("Default constructor called.");
    }

    // Parameterized Constructor
    public Person(string name, int age)
    {
        this.name = name;
        this.age = age;
        Console.WriteLine("Parameterized constructor called.");
    }

    // copy constructor
    public Person(Person P2)
    {
        name = P2.name;
        age = P2.age;
        Console.WriteLine("Copy Constructor");
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Name: {name}, Age: {age}");
    }
}

class Test
{
    static void Main()
    {
        Person p1 = new Person();             // calls default constructor
        p1.DisplayInfo();

        Console.WriteLine();

        Person p2 = new Person("Dipu", 23);   // calls parameterized constructor
        p2.DisplayInfo();

        Console.WriteLine();

        Person p3 = new Person(p2);          // calls copy constructor
        p3.DisplayInfo();


    }
}



/*
constructor :
 1.method -- name is same as class name
 2.no return type
 3.object initialization 
 4.constructor overloading  = Yes
 5. ❌ Constructor কখনো override হয় না।
*/



