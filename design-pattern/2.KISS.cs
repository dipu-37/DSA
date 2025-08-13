using System;
// KISS - Keep It Simple Stupid

public class PriceCalulator{
  public double Price {get; set;}
  public double DiscountPercentage {get; set;}
  public double TaxPercentage {get; set;}
  public double CalculateDiscount(){
    return Price * DiscountPercentage/100;
  }
  public double CalculateTax(){
    return Price * TaxPercentage/100;
  }
  
  public double Calculate()
    {
        double discount = CalculateDiscount();
        double tax = CalculateTax();
        return Price - discount + tax;
    }
}
class Program {
  public static void Main (string[] args) {
    PriceCalulator calc = new PriceCalulator();
    calc.Price =100;
    calc.DiscountPercentage = 20;
    calc.TaxPercentage = 10;
    Console.WriteLine(calc.Calculate());
  }
}