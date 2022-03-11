/*

Tutorial Copy Constructor em Java
https://lanera-austral.com/pt/how-to/496-java-tutorial-copy-constructor-in-java.html

Na classe Employee, você encontrará a sintaxe de como 
declarar o construtor de cópias. Criamos mais dois objetos 
employee 4 e employee5, que são uma cópia de employee2 e 
employee3, respectivamente. A partir da saída, é visível 
que as variáveis de instância de employee4 têm o mesmo 
valor que os valores das variáveis de instância de 
employee2. O mesmo vale para employee5.


*/

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

/*
Saída:

Employee Details
----------------
Employee's Name: Platini
Employee's Address: France
Employee's Age: 45
Employee's Salary: 120500.92
----------------
Employee's Name: John
Employee's Address: Los Angles
Employee's Age: 25
Employee's Salary: 34503.92
----------------
Employee's Name: Platini
Employee's Address: France
Employee's Age: 45
Employee's Salary: 120500.92
----------------
Employee's Name: John
Employee's Address: Los Angles
Employee's Age: 25
Employee's Salary: 34503.92
----------------
Employee's Name: Platini
Employee's Address: France
Employee's Age: 45
Employee's Salary: 120500.92

*/
