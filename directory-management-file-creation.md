# Create 40 directories named titas10, titas20, ..., titas400
mkdir titas{1..40}0

# Remove all directories starting with "titas"
rm -r titas*

# Ping Titas's official website (if DNS resolves correctly)
ping www.titas.org.bd

# Print the current working directory
pwd
# Output: /home/md_younos

# List all files and directories in current path
ls
# Output: PSC  todo.txt

# Create a new directory named Titas
mkdir Titas

# Verify creation
ls
# Output: PSC  Titas  todo.txt

# Change to Titas directory
cd Titas

# Confirm you're in the right directory
pwd
# Output: /home/md_younos/Titas

# Create a subdirectory named Documents
mkdir Documents

# Go into Documents directory
cd Documents

# Create an HTML file using nano editor
nano index.html
# (Add HTML content manually)

# Verify file is created
ls
# Output: index.html

# Go back to Titas directory
cd ..

# Copy the HTML file from Documents to current (Titas) directory
cp Documents/*.html .

# One stray directory was named incorrectly (e.g., '40}0') — remove it if it exists
rm -r 40\}0

# Final check: what's left
ls
# Output: Documents  index.html

# Create symbolic link to /home/SGFL
ln -s /home/SGFL SGFL-Link
