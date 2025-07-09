

/*
Type of inheritance 

1. single 
2. Multilevel
3. Hierarchical
4. Multiple(class) // not support
5.Multiple(interface) // support


*/

// 1. Single inheritance 
// class Person
// {
//     public string Name;
//     public int Age;

//     public void ShowPersonInfo()
//     {
//         Console.WriteLine($"Name : {Name}, Age : {Age}");
//     }
// }

// class Teacher : Person
// {
//     // Name , Age , ShowPersonInfo()
//     public string Subject;

//     public void ShowTeacherInfo()
//     {
//         ShowPersonInfo();
//         Console.WriteLine($"Teachers : {Subject}");
//     }

// }

// class Test
// {
//     public static void Main()
//     {
//         Person p1 = new Person();
//         p1.Age = 30;
//         p1.Name = "Razibul Hasan Dipu";
//         p1.ShowPersonInfo();

//         Teacher t1 = new Teacher();
//         t1.Age = 40;
//         t1.Name = "Asif";
//         t1.Subject = "cse";

//         t1.ShowTeacherInfo();

//         p1.ShowPersonInfo();
//     }
// }


// 2. Multilevel inheritance :  class C : B, class B : A

// class Person
// {
//     public string Name;
// }

// class Teacher : Person
// {
//     public string Subject;
// }

// class HeadTeacher : Teacher
// {
//     public int Experience;

//     public void ShowInfo()
//     {
//         Console.WriteLine($"Name : {Name}");
//         Console.WriteLine($"Subject : {Subject}");
//         Console.WriteLine($"Experience : {Experience}");
//     }
// }


// class Test
// {
//     public static void Main()
//     {
//         HeadTeacher ht = new HeadTeacher();
//         ht.Name = " Mr. Dipu";
//         ht.Subject = "Physics";
//         ht.Experience = 15;

//         ht.ShowInfo();
//     }
// }


// 3. hierarchical Inheritance 

// using System;

// class Person
// {
//     public string Name;
// }

// class Teacher : Person
// {
//     public string Subject;

//     public void ShowTeacher()
//     {
//         Console.WriteLine($"Teacher Name: {Name}");
//         Console.WriteLine($"Teaches: {Subject}");
//     }
// }

// class Student : Person
// {
//     public int Roll;

//     public void ShowStudent()
//     {
//         Console.WriteLine($"Student Name: {Name}");
//         Console.WriteLine($"Roll No: {Roll}");
//     }
// }

// class Program
// {
//     static void Main()
//     {
//         // Teacher object
//         Teacher t = new Teacher();
//         t.Name = "Mr. Alam";
//         t.Subject = "Math";
//         t.ShowTeacher();

//         Console.WriteLine();

//         // Student object
//         Student s = new Student();
//         s.Name = "Sakib";
//         s.Roll = 101;
//         s.ShowStudent();
//     }
// }





// 4. Multiple( interface) 

// interface IPrinter
// {
//     void Print();
// }

// interface IScanner
// {
//     void Scan();
// }

// class Person : IPrinter, IScanner
// {
//     // Print() , Scan();
//     public string Name;
//     public int Age;

//     public Person(string name, int age)
//     {
//         Name = name;
//         Age = age;
//     }

//     // Implementation IPrinter

//     public void Print()
//     {
//         Console.WriteLine($"Printing Person Info : {Name}, Age : {Age}");
//     }

//     // Implementing IScanner 

//     public void Scan()
//     {
//         Console.WriteLine($"{Name} is being scanned");
//     }
// }

// class Test
// {
//     public static void Main()
//     {
//         Person p = new Person("Razib", 25);

//         // Using as IPrinter
//         p.Print();

//         // Using as IScanner
//         p.Scan();
//     }
// }