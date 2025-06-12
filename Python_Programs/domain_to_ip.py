# Import the socket module, which provides access to networking functions
import socket


# Define a function that converts a domain name to its IP address
def domain_to_ip():
    # Ask the user to enter a domain name (e.g., google.com)
    domain = input("Enter a domain name: ")

    try:
        # Try to resolve the domain name to an IP address using DNS lookup
        ip_address = socket.gethostbyname(domain)

        # If successful, print the result
        print(f"The IP address of {domain} is {ip_address}")

    # Handle errors like invalid domain names or no network connection
    except socket.gaierror:
        print("Invalid domain name or network error.")


# Ensure the function runs only when this script is executed directly
if __name__ == "__main__":
    domain_to_ip()
