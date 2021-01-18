
//Given a string IP, return "IPv4" if IP is a valid IPv4 address, "IPv6" if IP is a valid IPv6 address or "Neither" if IP is not a correct IP of any type.

//A valid IPv4 address is an IP in the form "x1.x2.x3.x4" where 0 <= xi <= 255 and xi cannot contain leading zeros. For example, "192.168.1.1" and "192.168.1.0" are valid IPv4 addresses but "192.168.01.1", while "192.168.1.00" and "192.168@1.1" are invalid IPv4 addresses.

//A valid IPv6 address is an IP in the form "x1:x2:x3:x4:x5:x6:x7:x8" where:

//1 <= xi.length <= 4
//xi is a hexadecimal string which may contain digits, lower-case English letter ('a' to 'f') and upper-case English letters ('A' to 'F').
//Leading zeros are allowed in xi.
//For example, "2001:0db8:85a3:0000:0000:8a2e:0370:7334" and "2001:db8:85a3:0:0:8A2E:0370:7334" are valid IPv6 addresses, while "2001:0db8:85a3::8A2E:037j:7334" and "02001:0db8:85a3:0000:0000:8a2e:0370:7334" are invalid IPv6 addresses






bool ipv4(string ipv4)
{
   
    int i=0;
    int point =3;
    int sum=0;
  
    // 172.16.254.1
    if(ipv4[0]=='0' && ipv4[1]!='.')
    {
        return false;
    }
        
    while (i<ipv4.size()) {
        
        if((ipv4[i] < '0' || ipv4[i] >'9') && ipv4[i] !='.')
        {
            return false;
        }
        else if(ipv4[i] >= '1' && ipv4[i]<='9')
        {
            sum+=ipv4[i] - 48;
            sum=sum*10;
            i++;
            
        }
        else if(ipv4[i]=='0')
        {
            
                if(ipv4[i-1]=='.' && ipv4[i+1] !='.')
            {
                
               if( ipv4[i+1]!='\0')
               {
                   return false;
               }
            }
            i++;
            
        }
        
        
        
        if(ipv4[i]=='.' )
        {
            i++;
            point--;
            
            if(ipv4[i]=='\0' || ipv4[i]=='.')
            {
                return false;
            }
            
          
            sum=sum/10;
            if(sum<0 || sum >255)
            {
                return false;
            }
            sum=0;
            
            
        }
        if(ipv4[i]=='\0')
       {
           sum=sum/10;
           if( sum >255)
           {
               return false;
           }
           i++;
           if(point!=0)
           {
               return false;
           }
           
       }
       
        
    }
    return true;
}


bool ipv6(string ipv6)
{
    
    //2001:0db8:85a3:0000:0000:8a2e:0370:7334
 
    int i=0;
    int j=0;
    int point=7;
    
    while (i<=ipv6.size()) {
	
        if(i==ipv6.size())
        {
            if(point!=0)
            {
                return false;
            }
            if(i-j >=5)
            {
                return false;
            }
            i++;
             
        }
       
       else if( (ipv6[i] >='0' && ipv6[i]<='9')  )
        {
            i++;
        }
        else if  ((ipv6[i] >='a' && ipv6[i]<='f'))
        {
            i++;
        }
        else if ((ipv6[i] >='A' && ipv6[i]<='F'))
        {
            i++;
        }
     
        else if(ipv6[i]==':')
        {
            point--;
            if(ipv6[i-1]==':')
            {
                return false;
            }
            if(ipv6[i+1]=='\0')
            {
                return false;
            }
           if(i-j >= 5)
           {
               return false;
           }
            
            j=i+1;
            i++;
        }
        else{
            return false;
        }
        
        
        
    }
    return true;
    
}


string validIPAddress(string ip) {

      
    string ans="Neither";
    int flag=0;
    if(ip.size()>=15)
    {
        for(int i=0;i<5;i++)
        {
            if(ip[i]==':')
            {
                flag=1;
            }
        }
    }
    
    if((ip.size()<=15&& ip.size()>=7 ) && flag==0)
    {
        
        if(ipv4(ip))
        {
           
            ans="IPv4";
           
            return ans;
        }
        
        return ans;
    }
    
    if(flag==1)
    {
        if(ipv6(ip))
        {
           
            ans="IPv6";
           
            return ans;
        }
        
        return ans;
    }
  
    return ans;
    
}
