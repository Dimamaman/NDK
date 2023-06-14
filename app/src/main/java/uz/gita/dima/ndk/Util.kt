package uz.gita.dima.ndk

object Util {
    init {
        System.loadLibrary("util")
    }

    external fun add(a: Int, b: Int): Int

    external fun getInfo(text: String): String
}