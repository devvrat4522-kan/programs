public class self_31 {
    public static void main(String[] args) {
        // Developer dp = new Developer("devvrat", "00AVC", "TCS");
        // Manager dp1 = new Manager("komal", "00AVC3", "Google");
        employee dp;
        dp = employee.getEmployee("manager", "devvrat", "00AVC", "TCS");
        dp.insert();
        dp.delete();
        dp.print();
        System.out.println("####################");
        dp = employee.getEmployee("developer", "kukku", "00AVC1", "google");
        dp.insert();
        dp.delete();
        dp.print();
    }
}
