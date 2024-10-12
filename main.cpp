#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <iomanip>

class EmployeeData {
private:
    std::string employeeFirstName, employeeLastName, loginPassword;
    long employeeId;
    double employeeSalary;
    std::tm employeeHiredDate;
    
public:
    //constructor to initialize employee data
   EmployeeData(long employeeid, std::string firstName, std::string lastName, std::string loginpassword, std::tm hiredDate, double salary)
        : employeeId(employeeid), employeeFirstName(firstName), employeeLastName(lastName), loginPassword(std::move(loginpassword)), employeeHiredDate(hiredDate), employeeSalary(salary) {}

    //Getter for employeeId
    long getEmployeeId() const {
        return employeeId;
    }

    //verify password
    bool verifyPassword(const std::string& password) const {
    return loginPassword == password; // Compare the passwords
}

    bool loginAuthorization(){
        long inputId;
        std::string inputPassword;

        std::cout << "userID :";
        std::cin >> inputId;
        std::cout << "password : ";
        std::cin >> inputPassword ;

        // Check if the input matches employeeId and loginPassword
        if (inputId == employeeId && verifyPassword(inputPassword)) {
            return true; // Login successful
        } else {
            std::cout << "Login failed! Incorrect ID or password.\n";
            return false; // Login failed
        }
    }

    void displayEmployeeDetails() const {
        std::cout << "Employee ID: " << employeeId << "\n";
        std::cout << "Employee Name: " << employeeFirstName << " " << employeeLastName << "\n";
        std::cout << "Employee Salary: " << "Rp." << employeeSalary << ".00" << "\n";
        std::cout << "Hired Date: " 
                  << std::put_time(&employeeHiredDate, "%d/%m/%Y") << "\n"; // Format: DD/MM/YYYY
    }
};

int main(){
    std::tm hireDate1 = {};
    //Day
    hireDate1.tm_mday = 15;   
    //Month      
    hireDate1.tm_mon = 5;  
    //Year
    hireDate1.tm_year = 2020 - 1900; 

    std::tm hireDate2 = {};
    hireDate2.tm_mday = 1;         
    hireDate2.tm_mon = 9;          
    hireDate2.tm_year = 2019 - 1900; 

    std::tm hireDate3 ={};
    hireDate3.tm_mday = 3;
    hireDate3.tm_mon = 10;
    hireDate3.tm_year = 2024-1900;

    EmployeeData employee1(25,"Pannes", "Diba", "B321-", hireDate1, 320000.00);
    EmployeeData employee2(31, "Aliyyah", "Haka", "A123+", hireDate2, 400000.00);
    EmployeeData employee3(109, "Wahyu", "Fajrilah", "B111C", hireDate3, 200000.00);

    std::vector<EmployeeData> employeeDatabase = {employee1, employee2, employee3};

    //attempt login
    if (employee3.loginAuthorization()){
        std::cout << "\n Access to Company Database";
        for (const auto& employee : employeeDatabase){
            employee.displayEmployeeDetails();
        }
    }
    return 0;
}