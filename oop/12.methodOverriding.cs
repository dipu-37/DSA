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
4. Polymorphism (many forms) হলেও এটা run time-এ ঠিক হয়ে যায়(which method is called)।
5. Method Overloading → Compile Time Polymorphism →Static Binding, Fast,early but Fixed
6. Method Overriding → Runtime Polymorphism → Dynamic,late and Powerful
7. virtual - allow to override
*/

// ✅ Base class → virtual
// ✅ Derived class → override
// ✅ একই signature
// ✅ Runtime polymorphism support করে
// ✅ Constructor override হয় না
// ✅ constructor chaining - base keyword

