package com.zander;

import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;
import java.util.GregorianCalendar;

public class Java_date_Time_Calendar {
    public static void main(String[] args) {
        //using localDate
        LocalDate dt = LocalDate.now();
        System.out.println(dt);
//using localtime formatter
        LocalTime tym = LocalTime.now();
        System.out.println(tym);
        String tymFormat = tym.format(DateTimeFormatter.ofPattern("h:m:s"));
        System.out.println(tymFormat);
//using calendar
        Calendar c = new GregorianCalendar();
        System.out.println(c.getWeekYear());
    }
}
