package uz.gita.dima.ndk;

public class Demo {

    static {
        System.loadLibrary("demo");
    }

    public native int getVersion();
}
