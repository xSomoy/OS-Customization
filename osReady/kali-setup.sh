# Required Variables

# # Nala Source Added
# echo "deb https://deb.volian.org/volian/ scar main" | sudo tee /etc/apt/sources.list.d/volian-archive-scar-unstable.list
# wget -qO - https://deb.volian.org/volian/scar.key | sudo tee /etc/apt/trusted.gpg.d/volian-archive-scar-unstable.gpg > /dev/null

# # VSCode Source Added
# sudo apt-get install wget gpg
# wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
# sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
# sudo sh -c 'echo "deb [arch=amd64,arm64,armhf signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" > /etc/apt/sources.list.d/vscode.list'
# rm -f packages.microsoft.gpg

# # Update and Upgrade whole system
# sudo apt update
# sudo apt upgrade -y

# # Install Nala
# sudo apt install nala

# # nala  update and upgrade
# sudo nala update && sudo nala upgrade -y

# # Basic Packages
# sudo nala install terminator neofetch cmatrix htop

# # VSCode Install
# sudo  nala install code

# Customizing Bashrc
echo "" >> ~/.bashrc
echo "#############: User Customization :#############" >> ~/.bashrc
echo "" >> ~/.bashrc
echo "# Customizing Bashrc" >> ~/.bashrc 
echo "" >> ~/.bashrc
echo "#Bash Aliases" >> ~/.bashrc