import java.util.*;

class Person {
    private String name;
    private String address;
    private String job;

    public Person(String name, String address, String job) {
        this.name = name;
        this.address = address;
        this.job = job;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public String getJob() {
        return job;
    }
}

public class kismat38 {
    public static void main(String[] args) {
        List<Person> people = new ArrayList<Person>();
        people.add(new Person("Devvrat", "10/161 Khalsi line", "SDE"));
        for (Person person : people) {
            System.out.println("name " + person.getName());
        }
    }
}
