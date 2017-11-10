# Ninja Training Box
=

This trainingbox provides a training environment to workthrough Cisco's Talos Security's [How to Be Ninja](http://blog.talosintelligence.com/2009/07/how-do-i-become-ninja.html)

This is an introduction to looking at source code / binaries and exploiting vulnerabilities. 
This box specifically focuses on Step 4. 
The link for the training source code no longer works, but they can be accessed on the Wayback Machine here [Wayback](https://web.archive.org/web/20130630235940/http://community.corest.com/~gera/InsecureProgramming/
)

The source code on the way back machine is wonky, I'm not sure how it actually compiled before. I've ported the examples over into directories on this git page.
On startup, the VM automatically downloads and compiles the files.

The source code is all located in /home/gr0k/{appropriate folder}
The binaries compile in /home/gr0k/{appropriate folder}/bin

The machine default installs gcc and gdb for analysis. 
The source code is compiled with -g so debugging symbols are included, you're welcome to recompile without them if you're looking for more of a challenge.

The default username / password is gr0k/password. You can change it by copy/pasting and editing it in the YAML when you start the VM on openstack.
I haven't used variables yet though, so all the files will still install to the /home/gr0k folder.

# Practice Directories
=
1. Stack Warmup (5)
2. Advanced Buffer Overflows (10)
3. Format Strings (5)
4. Signals (4)
5. Esoteric (5)
6. Stack Guarded (6)
7. Numeric (5)

Have fun, happy hacking.

-gr0k