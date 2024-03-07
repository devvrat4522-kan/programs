class Person1 {
    String name;
    int age;

    Person1(String name, int age) throws InvalidEntryException1 {
        if (age < 0) {
            throw new InvalidEntryException1("Invalid Entry ", new IllegalArgumentException(" invalid argument"));
        }
        this.name = name;
        this.age = age;
    }
}

public class kismat13 {
    public static void main(String[] args) throws Exception {
        // try {
        Person1 person = new Person1("dev", -4);
        // } catch (InvalidEntryException1 e) {
        // System.out.println(e.getMessage());
        // }
        System.out.println("Object created ");
    }
}
