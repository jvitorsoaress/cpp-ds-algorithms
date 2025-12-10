using System; 

public class URI1002{
    static void Main(string[] args) {
        double PI = 3.14159;
        double raio = double.Parse(Console.ReadLine());
        double area = PI * Math.Pow(raio, 2);

        Console.WriteLine("A=" + area.ToString("F4"));
    }
}