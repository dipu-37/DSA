using System;
public interface IPaymentStrategy
{
    void Pay(double amount);
}

public class BkashPayment : IPaymentStrategy
{
    public void Pay(double amount)
    {
        Console.WriteLine($"Paying {amount} BDT using Bkash.");
    }
}

public class NagadPayment : IPaymentStrategy
{
    public void Pay(double amount)
    {
        Console.WriteLine($"Paying {amount} BDT using Nagad.");
    }
}

public class RocketPayment : IPaymentStrategy
{
    public void Pay(double amount)
    {
        Console.WriteLine($"Payment {amount} BDT using Rocket.");
    }
}

// context class 
public class ApplyPayment
{
    private string customerId;
    private IPaymentStrategy ps;

    public ApplyPayment(string customerId, IPaymentStrategy ps)
    {
        this.customerId = customerId;
        this.ps = ps;
    }

    public void ProcssPayment(double amount)
    {
        Console.WriteLine($"Processing payment for customer {customerId}");
        ps.Pay(amount);
    }


}

class Programs
{
    static void Main(string[] args)
    {
        // IPaymentStrategy ps;
        // ps = new BkashPayment();
        // ps.Pay(100);

        // Bkash payment

        ApplyPayment Bkash = new ApplyPayment("CUST0001", new BkashPayment());
        Bkash.ProcssPayment(1000);

        // Nagad Payment 
    }

}

/*
Strategy Pattern = Polymorphism + Context Class + Runtime Behavior Switch

*/