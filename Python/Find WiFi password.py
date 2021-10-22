########## Find WiFi Passwords ##########
# Utility: Handy tool for getting unsaved WiFi passwords of netwroks that you have connected to atleast once in the past.
# Passwords to novel/unknown WiFi networks can NOT be displayed 

# The subprocess module:
# > allows you to spawn new processes
# > connect to their input/output/error pipes
# > and obtain their return codes

import subprocess

# Simple banner for: 'type "exit" to exit'
print(f"{'-'*80}\nType \"exit\" to quit this shell {'-'*80}\n")

# Get Wifi network names
names = subprocess.Popen("netsh wlan show profiles", shell=True, stdout=subprocess.PIPE)
names_return = names.stdout.read()
print(names_return.decode('utf-8')[118:])

def start():
    global netname, sub, sub_return, index
    netname = input('Type network name: ') # Prompt for one of the many network names listed on screen
    sub = subprocess.Popen("netsh wlan show profiles \""+ netname +"\" key=clear", shell=True, stdout=subprocess.PIPE)
    sub_return = sub.stdout.read()
    index = sub_return.decode('utf-8').find('Key Content')

    # Keep running shell until "exit" is typed as the `network name`
    if netname != 'exit':
        if "is not found on the system" in sub_return.decode('utf-8'):
            print('WiFi name invalid')
        else:
            if not index == -1:
                print('Password: ', end = '')
                print((sub_return.decode('utf-8')[index+25:]).split()[0])
            else:
                print('Password not found!')

        print()
        start()

start()
