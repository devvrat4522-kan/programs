class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        try {
            this.age = age;
            if (age < 0)
                throw new InvalidEntryException("Invalid age ");
        } catch (InvalidEntryException e) {
            System.out.println(e);
        }
    }

    public String get_name() {
        return name;
    }

    public int get_age() {
        return age;
    }
}

public class kismat12 {
    public static void main(String[] args) {
        Person pt = new Person("devvrat", -1);
        System.out.println(pt.get_name());
        System.out.println(pt.get_age());
    }
}
