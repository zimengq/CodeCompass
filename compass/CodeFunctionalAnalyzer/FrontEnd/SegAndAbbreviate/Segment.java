package SegAndAbbreviate;

import java.util.ArrayList;
import java.util.Arrays;

import static SegAndAbbreviate.Segment.NameConvention.*;

public class Segment {
    String rawName ;
    enum NameConvention{
        CAMEL , UNDERSCORE, DEFAULT
    }
    ArrayList<String> nameList = new ArrayList<>();
    NameConvention style;
    public Segment(String name){
        rawName = name;
        style = styleDetection(name);
        ArrayList<String> nameSegments = convertToSegement(name,style);
        for (String segment : nameSegments){
            nameList.add(getAbbreviation(segment));
        }

    }

    String getAbbreviation(String original){
        String ret = original;
        //TODO
        return ret;
    }

    Boolean upper(char x){
        return (x >= 'A') && (x <= 'Z');
    }

    ArrayList<String> convertToSegement(String name,NameConvention style){
        switch (style){
            case CAMEL:
                ArrayList<String> list = new ArrayList<>();
                char[] characters = name.toCharArray();
                int startI = 0,endI = 1;
                for (int i = 1; i < characters.length; i++){
                    endI = i;
                    boolean split = upper(characters[i]);
                    if (split){
                        if (upper(characters[i - 1])) { //bad style
                            if (i == characters.length - 1 || upper(characters[i + 1]))
                                split = false;
                        }
                    }
                    if (split && startI < endI){
                        list.add(name.substring(startI,endI));
                        startI = i;
                    }
                }

                if (startI < characters.length) {
                    list.add(name.substring(startI,characters.length));
                }

                return list;
            case UNDERSCORE:
                return new ArrayList<>(Arrays.asList(name.split("_")));
            case DEFAULT:
                return new ArrayList<>(Arrays.asList(name.split("_")));
            default: return null;
        }
    }

    NameConvention styleDetection(String name){
        if (name.contains("_"))
            return UNDERSCORE;
        if (!name.toLowerCase().equals(name))
            return CAMEL;
        return DEFAULT;
    }

    @Override
    public String toString() {
        String ret = "";
        for (String segment : nameList){
            ret = ret.concat(segment + "|");
        }
        ret = ret.concat("["+style.toString()+"]");
        return ret;
    }
}
