package com.cjw.demo1_bspatch;

/**
 * Created by Administrator on 2018/3/4.
 */

public class BsPatch {

    static {
        System.loadLibrary("bspatch");
    }

    public static native void patchFile(String oldPath, String newPath, String patchPath);

}
