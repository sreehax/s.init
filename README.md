# s.init (Simple init)
s.init is a simple, fast init for linux. 
### How it works
It is compatible with sysvinit and OpenRC, or any init that uses scripts stored in `/etc/init.d`. However, like systemd, s.init parallelizes /etc/init.d scripts on bootup.
### Controlling the system
to shutdown the system: `s.init shutdown`
to reboot the system: `s.init reboot`
and more...
### License
s.init is licensed under the MIT License
