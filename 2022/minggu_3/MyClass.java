import java.util.Scanner;
import utils.CalculateObjectUtils.Object;
import utils.CalculateObjectUtils;

/**
 * Algo minggu 3
 */
public class MyClass {
    public static void main(String[] args) throws Exception {
        System.out.println("Program Hitung");
        Scanner scanner = new Scanner(System.in);
        
        hitungBalok(scanner);
        hitungTabung(scanner);

        scanner.close();
    }

    private static void hitungBalok(Scanner scanner) throws Exception {
        System.out.println("\n\n=== Penghitungan Balok ===");
        // panjang
        System.out.print("Masukkan panjang: ");
        int panjang = scanner.nextInt();
        // lebar
        System.out.print("Masukkan lebar: ");
        int lebar = scanner.nextInt();
        // tinggi
        System.out.print("Masukkan tinggi: ");
        int tinggi = scanner.nextInt();
        
        System.out.println("panjang=" + panjang 
            + ", lebar=" + lebar 
            + ", tinggi=" + tinggi
        );

        CalculateObjectUtils hasil = new CalculateObjectUtils(Object.Block)
            .setData(panjang, lebar, tinggi)
            .calculate();
        
        System.out.println("Luas balok = " + hasil.luas);
        System.out.println("Volume balok = " + hasil.volume);
    }

    private static void hitungTabung(Scanner scanner) throws Exception {
        System.out.println("\n\n=== Penghitungan Tabung ===");
        // radius
        System.out.print("Masukkan jari-jari: ");
        int radius = scanner.nextInt();
        // tinggi
        System.out.print("Masukkan tinggi: ");
        int tinggi = scanner.nextInt();
        
        System.out.println("radius=" + radius + ", tinggi=" + tinggi);

        CalculateObjectUtils hasil = new CalculateObjectUtils(Object.Tube)
            .setData(radius, tinggi)
            .calculate();
        
        System.out.println("Luas tabung = " + hasil.luas);
        System.out.println("Volume tabung = " + hasil.volume);
    }
}