using System;

// ==========================
// Database Abstraction
// ==========================
public interface IDatabase
{
    void SaveData(string data);
    string GetData(int id);
}

// ==========================
// Low-level Modules (Concrete Databases)
// ==========================
public class SQLDatabase : IDatabase
{
    public void SaveData(string data)
    {
        Console.WriteLine($"SQL Database: Saving '{data}'");
    }

    public string GetData(int id)
    {
        return $"SQL Database: Data for id {id}";
    }
}

public class MongoDatabase : IDatabase
{
    public void SaveData(string data)
    {
        Console.WriteLine($"Mongo Database: Saving '{data}'");
    }

    public string GetData(int id)
    {
        return $"Mongo Database: Data for id {id}";
    }
}

// ==========================
// High-level Module (User Service)
// ==========================
public class UserService
{
    private readonly IDatabase _database;

    // DIP: High-level module depends on abstraction
    public UserService(IDatabase database)
    {
        _database = database;
    }

    public void AddUser(string name)
    {
        _database.SaveData(name);
        Console.WriteLine($"UserService: Added user '{name}'");
    }

    public void ShowUser(int id)
    {
        string data = _database.GetData(id);
        Console.WriteLine($"UserService: Retrieved {data}");
    }
}

// ==========================
// Program
// ==========================
class Program
{
    static void Main(string[] args)
    {
        // SQL Database ব্যবহার করে
        IDatabase sqlDb = new SQLDatabase();
        UserService sqlService = new UserService(sqlDb);
        sqlService.AddUser("Alice");
        sqlService.ShowUser(1);

        Console.WriteLine();

        // Mongo Database ব্যবহার করে
        IDatabase mongoDb = new MongoDatabase();
        UserService mongoService = new UserService(mongoDb);
        mongoService.AddUser("Bob");
        mongoService.ShowUser(2);
    }
}


// DIP Menaing: UserService high-level module concrete database class এর উপর নির্ভর করছে না।

// Flexible: নতুন database যোগ করলে UserService modify করতে হবে না।

// SOLID principles follow হচ্ছে:

// S: Single Responsibility → UserService শুধু user operations handle করে

// O: Open/Closed → নতুন database class যোগ করতে পারি, modify করতে হবে না

// L: Liskov Substitution → IDatabase এর যেকোনো implementation ব্যবহার করা যাবে

// I: Interface Segregation → database interface ছোট, দরকারি methods בלבד

// D: Dependency Inversion → high-level module abstraction এর উপর নির্ভর করছে