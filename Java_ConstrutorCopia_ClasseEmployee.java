package CopyConstructor;

public class Employee {
   String employeeName;
   String address;
   int age;
   double salary;

   /*Default Constructor */
   Employee(){
   employeeName = "Platini";
   address = "France";
   age = 45;
   salary = 120500.92;
  }

   /* Parameterized Constructor */
   Employee(String empName,String addr,int ag,double sal){
   employeeName = empName;
   address = addr;
   age = ag;
   salary = sal;
  }

   /* Copy Constructor */ 
   Employee(Employee emp){
   employeeName = emp.employeeName;
   address = emp.address;
   age = emp.age;
   salary = emp.salary;
  }

   void showDetails(){
   System.out.println("Employee's Name: "+employeeName);
   System.out.println("Employee's Address: "+address);
   System.out.println("Employee's Age: "+age);
   System.out.println("Employee's Salary: "+salary);
}
}