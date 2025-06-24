/*

using System;

class Person
{
    private string name;
    private int age;

    public void SetName(string name)
    {
        this.name = name;
    }

    public string GetName()
    {
        return name;
    }

    public void SetAge(int age)
    {
        this.age = age;
    }

    public int GetAge()
    {
        return age;
    }

    public Person()
    {
        
    }

    // Parameterized Constructor
    public Person(string name, int age)
    {
        this.name = name;
        this.age = age;
        Console.WriteLine("Parameterized constructor called.");
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


        Person p1 = new Person("Dipu", 23);
        p1.DisplayInfo();

        // p1.name,p1.age --not access able in test class

        p1.SetName("Razibul");
        string name = p1.GetName();
        Console.WriteLine(name);
        p1.DisplayInfo();


        Person p2 = new Person();
        p2.SetAge(30);
        Console.WriteLine(p2.GetAge());

    }
}


*/

/*

1. to access private members
2. Prevents unauthorized or unintended changes to important data

*/

