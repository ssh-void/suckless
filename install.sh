sudo xbps-install -S && sudo xbps-install -u xbps && sudo xbps-install -Syu
sudo xbps-install -S xorg-minimal base-devel xrandr setxkbmap libX11-devel libXft-devel libXinerama-devel fribidi-devel harfbuzz-devel gcc python feh libXrandr-devel nerd-fonts 
sudo rm /var/service/agetty-tty3
sudo rm /var/service/agetty-tty4
sudo rm /var/service/agetty-tty5
sudo rm /var/service/agetty-tty6
fc-cache -fv
sudo sed -i 's/GRUB_TIMEOUT=5/GRUB_TIMEOUT=0/' /etc/default/grub
sudo sed -i 's/GETTY_ARGS="--noclear"/GETTY_ARGS="--noclear --autologin rpi"/' /etc/runit/runsvdir/current/agetty-tty1/conf
sudo grub-mkconfig -o /boot/grub/grub.cfg
sudo xbps-remove -RoO
sudo reboot

