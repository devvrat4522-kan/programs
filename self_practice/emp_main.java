public class emp_main {
    public static void main(String[] args) {
        employee emp = new Developer("devvrat", "B512", "TCS");
        employee emp1 = new Developer("devvrat2", "B511", "TCS");
        employee emp2 = new Developer("devvrat3", "B513", "TCS");
        employee emp3 = new Manager("devvrat4", "B517", "TCS");
        employee emp5 = employee.getEmployee("Manager", "dabbu", "B511", "TCS");
        emp5.insert();
        emp5.print();
        emp5.insert();
        emp5.delete();
        System.out.println(employee.getEmployeeCount());
    }
}
