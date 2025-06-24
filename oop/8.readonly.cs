/*


using System;

class Person
{
    public string name;
    public int age;

    public readonly String NID;

    public Person(string name, int age, string NID)
    {
        this.name = name;
        this.age = age;
        this.NID = NID;
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Name :{name} , Age : {age} , NID : {NID}");
    }

}

class Test
{
    public static void Main()
    {
        Person p1 = new Person("dipu", 25, "1413373031");
        p1.name = "Razibul";
        // p1.NID = "847";  not possible because readonly
        p1.DisplayInfo();
    }
}


1. const vs readonly 
   const = Compile time  (PI)
   readonly = Run time 

*/