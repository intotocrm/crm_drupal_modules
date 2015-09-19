#!/usr/bin/python
fp = open("contacts_manipulated_ips_v01.txt")
s = fp.read()
#u = s.decode('utf8')
u = s.decode('utf16')
e = u.encode('utf8')
fp2=open("ips_converted_to_utf8.csv",'w')
fp2.write(e)
fp2.close()


