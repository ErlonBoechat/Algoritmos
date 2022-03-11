package CopyConstructor;

public class ConstructorDemo {

    public static void main(String[] args) {
       
        System.out.println("Employee Details");
        System.out.println("----------------");
        Employee employee1 = new Employee();
        employee1.showDetails();
        System.out.println("----------------");
        String employeeName = "John";
        String address = "Los Angles";
        int age = 25;
        double salary = 34503.92;
        
        Employee employee2 = new Employee(employeeName,address,age,salary);
        employee2.showDetails();
        System.out.println("----------------");

        Employee employee3 = new Employee();
        employee3.showDetails();
        System.out.println("----------------");

        Employee employee4 = new Employee(employee2);
        employee4.showDetails();
        System.out.println("----------------");

        Employee employee5 = new Employee(employee3);
        employee5.showDetails();
    }
    
}