package utils;

public final class CalculateObjectUtils {
    public static enum Object {
        Block,
        Tube
    }
    
    // state
    private Object object;

    // result
    public double luas = 0;
    public double volume = 0;

    // data
    private int panjang;
    private int lebar;
    private int tinggi;
    private int radius;

    public CalculateObjectUtils(Object object) {
        this.object = object;
    }

    // Balok
    public CalculateObjectUtils setData(int panjang, int lebar, int tinggi) {
        this.panjang = panjang;
        this.lebar = lebar;
        this.tinggi = tinggi;
        return this;
    }

    // Tabung
    public CalculateObjectUtils setData(int radius, int tinggi) {
        this.radius = radius;
        this.tinggi = tinggi;
        return this;
    }

    public CalculateObjectUtils calculate() throws Exception {
        try {
            switch (object) {
                case Block:
                    this.volume = panjang * lebar * tinggi;
                    this.luas = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
                    break;
            
                case Tube:
                    this.volume = 3.14 * radius * radius * tinggi;
                    this.luas = 2 * 3.14 * radius * (radius + tinggi);
                    break;
            }
        } catch (Exception e) {
            String message;
            if (object == Object.Block)
                message = "set block data first!";
            else message = "set tube data first!";

            throw new Exception(message);
        }

        return this;
    }
}