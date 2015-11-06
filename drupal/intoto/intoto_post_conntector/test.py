#!/usr/bin/python

import requests
import json
import sys

_headers = {'content-type': 'application/json'}
url = 'http://0025-ormil.dev.into.to/react/contact_us_form'

#_data = {"name": "Roi Kedem", "phone": "035587745", "email" : "roiroi@roiroi.com", "message":"here is my message blablabla"}
_data = {"name": sys.argv[1], "phone": "035587745", "email" : "roiroi@roiroi.com", "message":"here is my message blablabla for " + sys.argv[1]}

#r = requests.post(url, params=params, data=json.dumps(data), headers=headers)
r = requests.post(url, data = _data)
#r = requests.post(url, data={'@number': 12524, '@type': 'issue', '@action': 'show'})
print r.text
