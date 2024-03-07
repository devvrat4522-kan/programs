public abstract class employee {
    public String name;
    public String id;
    public String office;
    public String designation;
    public static int count = 0;

    public employee() {
        count++;
    }

    public employee(String name, String id, String office, String designation) {
        this.name = name;
        this.id = id;
        this.office = office;
        this.designation = designation;
        count++;
    }

    public void print() {
        System.out.println("Name: " + name);
        System.out.println("Id: " + id);
        System.out.println("Office: " + office);
        System.out.println("Designation: " + designation);
        // System.out.println("Count: " + count);
    }

    // factory method

    public static employee getEmployee(String type, String name, String id, String office) {
        if (type == "developer")
            return new Developer(name, id, office);
        else if (type == "manager")
            return new Manager(name, id, office);
        else
            return null;
    }

    public static int getEmployeeCount() {
        return count;
    }

    abstract public void insert();

    abstract public void delete();
}

class Developer extends employee {
    public void insert() {
        System.out.println("Developer inserted");
    }

    public void delete() {
        System.out.println("Developer deleted");
    }

    public Developer(String name, String id, String office) {
        super(name, id, office, "Developer");
    }
}

class Manager extends employee {
    public void insert() {
        System.out.println("Manager inserted");
    }

    public void delete() {
        System.out.println("Manager deleted");
    }

    public Manager(String name, String id, String office) {
        super(name, id, office, "Manager");
    }

}