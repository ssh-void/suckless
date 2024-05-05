cd ~
echo "===================== update ======================"
sudo xbps-install -S && sudo xbps-install -u xbps && sudo xbps-install -Syu
#sudo xbps-install -Sy xorg base-devel fribidi-devel harfbuzz-devel opendoas make libX11-devel libXft-devel libXinerama-devel ffmpeg ntfs-3g ugrep nerd-fonts noto-fonts-emoji noto-fonts-cjk feh lsd webkit2gtk-devel gcr-devel gstreamer1-devel lxappearance vim neovim clipmenu mpv mpd alsa-utils ncmpcpp cava newsboat zathura mupdf ranger ueberzug qutebrowser sakura w3m alacritty nodejs gimp bash-completion linux-lts yt-dlp aria2  neofetch scrot flameshot qemu virt-manager libvirt vte3 vde2 bridge-utils cmake ninja meson curl time screenkey ImageMagick NetworkManager arandr bat breeze clang-analyzer clang cmatrix lolcat-c figlet colordiff timeshift emacs ffplay flac fzf gdb git go zig gstreamer-vaapi gvim harfbuzz-devel htop hugo imlib2-devel inkscape instaloader jq intel-media-driver kdenlive libev-devel libjpeg-turbo-devel libmpc-devel linux-lts-headers man-db mpc pandoc papirus-folders papirus-icon-theme pcre-devel pdftag pkgconf-devel python3-adblock python3-pip rnnoise rsync simple-mtpfs slop stow tcc terminus-font texlive texlive-core tty-clock v4l2loopback void-docs-browse wireshark-qt wireshark wlroots-devel xdg-desktop-portal-wlr xdotool zathura-pdf-mupdf wbg tmux xcb-util-renderutil-devel xcb-util-image-devel pkgconf uthash pcre-devel libconfig-devel lf firefox cloc nim figlet-fonts dunst noto-fonts-ttf passmenu pass wkhtmltopdf cvs audacity unbound readline-devel readline file-devel poppler-utils plata-theme 
cd ~
mkdir suckless/ 
cd suckless/
sudo xbps-install -Syu make vim tmux htop firefox nerd-fonts noto-fonts-emoji noto-fonts-cjk google-fonts-ttf numlockx cloc scrot 
sudo xbps-install -Syu bash-completion
git clone https://git.suckless.org/dmenu
git clone https://git.suckless.org/dwm
git clone https://git.suckless.org/st
git clone https://git.suckless.org/slstatus
sudo xbps-install -S xorg base-devel libX11-devel libXft-devel libXinerama-devel fribidi-devel harfbuzz-devel gcc python feh libXrandr-devel ffmpeg mpv yt-dlp
cd st/ 
make
sudo make clean install
cd ../dwm 
make && sudo make clean install
cd ../dmenu && make && sudo make clean install
cd ../slstatus && make && sudo make clean install
cd ~
touch .xinitrc
echo "dwm" > .xinitrc