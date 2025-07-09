/*

// Q. can we override static,final(no modify) method? No
// static = class related
// method = obj related

using System;

class Person
{
    public string Name;

    public Person(string name)
    {
        Name = name;
    }

    public virtual void ShowInfo()   // virtual
    {
        Console.WriteLine($"Person Name: {Name}");
    }
}

class Teacher : Person
{
    // Name , Person(), ShowInfo()
    public string Subject;

    public Teacher(string name, string subject) : base(name)
    {
        Subject = subject;
    }

    public override void ShowInfo()   // override key word mandatory
    {
        Console.WriteLine($"Teacher Name: {Name}");
        Console.WriteLine($"Subject: {Subject}");
    }
}

class Test
{
    static void Main()
    {
        Person p = new Person("Karim");
        p.ShowInfo();

        Console.WriteLine();

        Teacher t = new Teacher("Rahim", "Math");
        t.ShowInfo();
    }
}

*/


/*

1. Proper overriding, runtime polymorphism
2. Runtime polymorphism = virtual + override
3. same name, same signature
*/

// ✅ Base class → virtual
// ✅ Derived class → override
// ✅ একই signature
// ✅ Runtime polymorphism support করে
// ✅ Constructor override হয় না
