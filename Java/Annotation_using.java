package com.zander;

@Deprecated
class Mydepre {
    public void useless(){
        System.out.println("This is useless class");
    }
}

public class Annotation_using {
//    @SuppressWarnings( "Deprecation" ) //used to suppress the warnings for deprecated classes
    public static void main(String[] args) {
        Mydepre d1 = new Mydepre();
        d1.useless();
    }
}
