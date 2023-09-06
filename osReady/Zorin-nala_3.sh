sudo apt update
#sudo apt upgrade
sudo apt install software-properties-common -y
sudo add-apt-repository ppa:deadsnakes/ppa -y
sudo apt install python3.10
wget https://deb.volian.org/volian/pool/main/n/nala-legacy/nala-legacy_0.11.0_amd64.deb
sudo dpkg -i nala-legacy_0.11.0_amd64.deb
sudo apt --fix-broken install -y
sudo dpkg -i nala-legacy_0.11.0_amd64.deb
