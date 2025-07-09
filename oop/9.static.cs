/*



using System;

class Person
{
    public string name;
    public int age;
    public static int totalPerson = 0;
    public static string villageName = "BarunhHall";

    public readonly String NID;

    public Person(string name, int age, string NID)
    {
        this.name = name;
        this.age = age;
        this.NID = NID;
        totalPerson++;
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Name :{name} , Age : {age} , NID : {NID}");
    }

    public static void DisplayTotalPerson()
    {
        Console.WriteLine($"Display Total Person : {totalPerson}");
    }

}

class Test
{
    public static void Main()
    {
        Person p1 = new Person("dipu", 25, "1413373031");
        Person p2 = new Person("Asif", 24, "1413373031");
        Person p3 = new Person("Mithu", 26, "1413373031");

        // static variable access
        Console.WriteLine($"Total Person : {Person.totalPerson}");
        Console.WriteLine($"Common village Name : {Person.villageName}");

        // static method 
        Person.DisplayTotalPerson();


    }
}

*/


/*

1. static -- class related not object
2. common variable or method = static
3. static constructor = static block

*/





