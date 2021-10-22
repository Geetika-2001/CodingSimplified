import subprocess

theme = input('Enter theme ([l]ight/[d]ark): ')
if theme == 'l':
    allowlight = '1'
    command = ['reg.exe', 'add', 'HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize', \
           '/v', 'AppsUseLightTheme', '/t', 'REG_DWORD', '/d', allowlight, '/f']
    subprocess.run(command)
elif theme == 'd':
    allowlight = '0'
    command = ['reg.exe', 'add', 'HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize', \
           '/v', 'AppsUseLightTheme', '/t', 'REG_DWORD', '/d', allowlight, '/f']
    subprocess.run(command)
else:
    print('Invalid entry')
