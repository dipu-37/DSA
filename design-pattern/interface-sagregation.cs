// বড় interface
// interface IWorker
// {
//     void Work();
//     void Eat();
// }

// class Robot : IWorker
// {
//     public void Work()
//     {
//         Console.WriteLine("Robot working...");
//     }

//     public void Eat()
//     {
//         // Robot তো খেতে পারে না!
//         throw new NotImplementedException();
//     }
// }

interface IWorkable
{
    void Work();
}

interface IEatable
{
    void Eat();
}

class Human : IWorkable, IEatable
{
    public void Work() => Console.WriteLine("Human working...");
    public void Eat() => Console.WriteLine("Human eating...");
}

class Robot : IWorkable
{
    public void Work() => Console.WriteLine("Robot working...");
}



// problem - 02; ..................................................................................>

// interface IPaymentGateway
// {
//     void PayWithBkash();
//     void PayWithCard();
//     void PayWithCrypto();
// }

// class BasicUser : IPaymentGateway
// {
//     public void PayWithBkash() { ... }
//     public void PayWithCard() { ... }
//     public void PayWithCrypto() { throw new NotImplementedException(); } // ❌
// }

interface IBkashPayment { void PayWithBkash(); }
interface ICardPayment { void PayWithCard(); }
interface ICryptoPayment { void PayWithCrypto(); }

class BasicUser : IBkashPayment, ICardPayment
{
    public void PayWithBkash() { ... }
    public void PayWithCard() { ... }
}
