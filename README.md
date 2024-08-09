Overview
The Bus Reservation System is a console-based application developed in C. It provides functionalities for users to manage bus bookings, including creating accounts, logging in, viewing buses, booking and canceling tickets, and checking bus statuses. The system uses file handling to store and retrieve user and booking information.

Features
User Management:

Create an account with a username and password.
Log in to the system with existing credentials.
Bus Management:

View available buses and their details.
Book tickets for selected buses.
Cancel existing bookings.
Check the status of various buses.
File Handling:

create_account.txt: Stores user account information.
project.txt: Stores booking details.
buses.txt: Lists available bus routes.
Bus-specific files (e.g., sagar.txt, lake.txt) for seat reservations.
Getting Started
Prerequisites
A C compiler (e.g., GCC) to compile the code.
Basic understanding of C programming and file handling.

Code Structure
main(): Entry point of the application. Handles user choices for login and account creation.
login(): Allows users to log in with their credentials.
create(): Handles account creation.
displaychoice(): Shows main menu options for managing bookings.
book(): Facilitates booking of tickets.
replace(): Updates seat reservations in bus-specific files.
sagar(), lake(), rishab(), rrr(), abhishek(): Functions to handle bookings for different bus routes.
displaychoice2(): Displays available buses and handles user choices.
File Formats
create_account.txt: Each line contains a username followed by a password.
project.txt: Contains booking details in the format: source, destination, date, first name, last name.
buses.txt: Lists bus routes and their details.
Bus-specific files: Each file contains seat information for a specific bus route.
Example Usage
Create an Account:

Run the program and select option 2 to create an account.
Enter a username and password when prompted.
Log In:

Select option 1 to log in.
Enter your username and password.
Book a Ticket:

After logging in, choose to view available buses.
Select a bus route and choose a seat number to book.
View and Cancel Tickets:

Use the menu options to view and cancel your tickets.
