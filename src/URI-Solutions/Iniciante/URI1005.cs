using System; 

public class URI1005{
    static void Main(string[] args) {
        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());
        double P1 = 3.5;
        double P2 = 7.5;
        double MEDIA = (A * P1 + B * P2) / (P1 + P2);

        Console.WriteLine("MEDIA = " + MEDIA.ToString("F5"));
    }
}