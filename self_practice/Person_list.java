import java.util.*;

class Person {
    String name;
    String address, job, ofc;

    Person(String nm, String add, String j, String of) {
        name = nm;
        address = add;
        job = j;
        ofc = of;
    }
}

public class Person_list {
    public static void main(String[] args) {
        Person p1 = new Person("dev", "ufg", "hjk", "sffe");
        Person p2 = new Person("devil", "ufg", "hjk", "sffe");
        Person p3 = new Person("devi", "ufg", "hjk", "sffe");
        Person p4 = new Person("dev singh", "ufg", "hjk", "sffe");

        List<Person> ls = new ArrayList<>();
        ls.add(p1);
        ls.add(p2);
        ls.add(p3);
        ls.add(p4);
        for (int i = 0; i < ls.size(); i++) {
            System.out.println(ls.get(i).address);
        }
    }

}
