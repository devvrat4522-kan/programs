// class SelfCheckedException extends Exception {
//     public SelfCheckedException(String message) {
//         super(message);
//     }
// }

// // Employee interface
// interface Employee {
//     String getName();
//     void setName(String name);
//     String getAddress();
//     void setAddress(String address);

//     // Factory method
//     static Employee getEmployee(String type, String name, String address) {
//         if ("Programmer".equalsIgnoreCase(type)) {
//             return new ProgrammerImpl(name, address);
//         } else if ("Manager".equalsIgnoreCase(type)) {
//             return new ManagerImpl(name, address);
//         } else {
//             throw new IllegalArgumentException("Invalid employee type");
//         }
//     }
// }

// // Programmer interface extending Employee
// interface Programmer extends Employee {
//     // Add programmer-specific methods if needed
// }


// Employee interface
interface Employee {
    String getName();
    void setName(String name);
    String getAddress();
    void setAddress(String address);

    // Factory method
    static Employee getEmployee(String type, String name, String address) {
        if ("Programmer".equalsIgnoreCase(type)) {
            return new ProgrammerImpl(name, address);
        } else if ("Manager".equalsIgnoreCase(type)) {
            return new ManagerImpl(name, address);
        } else {
            throw new IllegalArgumentException("Invalid employee type");
        }
    }
}

// Programmer interface extending Employee
interface Programmer extends Employee {
    // Add programmer-specific methods if needed
}

// Manager interface extending Employee
interface Manager extends Employee {
    // Add manager-specific methods if needed
    int getProgrammersCount() throws SelfCheckedException;
}

// ProgrammerImpl class implementing Programmer interface
class ProgrammerImpl implements Programmer {
    private String name;
    private String address;

    public ProgrammerImpl(String name, String address) {
        this.name = name;
        this.address = address;
    }

    @Override
    public String getName() {
        return name;
    }

    @Override
    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String getAddress() {
        return address;
    }

    @Override
    public void setAddress(String address) {
        this.address = address;
    }
}
class ManagerImpl implements Manager {
    private String name;
    private String address;

    public ManagerImpl(String name, String address) {
        this.name = name;
        this.address = address;
    }

    @Override
    public String getName() {
        return name;
    }

    @Override
    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String getAddress() {
        return address;
    }

    @Override
    public void setAddress(String address) {
        this.address = address;
    }
 @Override
    public int getProgrammersCount() throws SelfCheckedException {
        // Return some integer value, or throw SelfCheckedException
        throw new SelfCheckedException("Method not supported for ProgrammerImpl");
    }
}

// Example usage
public class Main {
    public static void main(String[] args) {
        Employee programmer = Employee.getEmployee("Programmer", "John", "123 Main St");
        Employee manager = Employee.getEmployee("Manager", "Alice", "456 Oak St");

        // Example of type casting
        if (manager instanceof Manager) {
            try {
                int programmersCount = ((Manager) manager).getProgrammersCount();
                System.out.println("Programmers count: " + programmersCount);
            } catch (SelfCheckedException e) {
                e.printStackTrace();
            }
        }
    }
}

