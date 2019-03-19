**passive**

Google
site:"domain.com" -site:"www.domain.com" #search for subdomains, exclude main

**active**

DNS enumeration  
host www.domain.com #check ip of domain web server

#foward.sh, forward DNS lookup script  
#reverse.sh reverse DNS lookup script

zone transfer  
host -t ns domain.com #show name servers  
host -l domain.com ns1.domain.com. #try the different name servers for leakage

#zone-transfer.sh, simple zone transfer script
