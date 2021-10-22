#Latest Python Support v1.0.2

import webbrowser

'''
Note:

    KEY:
        %% = Feature Impossible to Implement [or held for later]
        $ = Feature Implemented

    LIST OF FEATURES:
        Open Settings $
        Open Hotspot shield %%
        Open Teams $
        Open Google keep $
        Open Wawebpro $
        Check if camera is on %%
        Check if mic is on %%
        Output the screen size $
        Output Date $
        Output Day $
        Open Chrome $
        Open Edge $
        Search directly in chrome
        Search directly in edge %%
        Output current time $
        Output current time in different time zones
        See Command history %%
        Output Current month's Calendar
        Output Calendar for any month
        Take a text note %%
        See note content [by titles] %%
        Show notes [by titles] %%
        Show Battery percentage $
        Battery Low Warning [Auto] -- Default = 25% $
        Battery warning %age -- user can set %%
        CPU usage $
        Memory Usage $
        Laptop ON time
        Open and close mspaint
        Open and close notepad
        Open and close registry $
        
        Hard Drive Storage
        Path storage %%
        Profile management [Name, pwd, gender, DOB, etc...] %%
        Open and close taskmanager %% close
        Open and close Skype %%
        Open and close Word %% close
        Open and close Excel %% close
        Open and close Powerpoint %% close
        Open and close Explorer %%
        Built in calc %%
        Open and close Calc App %% close
        Open and close Tor $
        Built in dictionary %%
        Power plugged in or not $
        Remove charger at 95% charge
        Show Desktop
        Lock Computer

        start/stop wifi
        directly view output of cmd and powershell
        directly execute code in cmd and powershell

        Connect to wifi networs
        See various available wifi networks

        View running services
        Get wake time and mode of previous log-off

        Show services (Running and stopped)
        Show laptop build version

        BASIC CALCS
        Tax, loan, etc.. calcs

        Built in Engines:
            Algebra
            Geometry
            Calculus

        AM or PM?*
        Connected to net?*

        International and Local Weather and News

        Give test system alerts*

        Be able to open:
            Math Engine
            Conic Helper
            File Handler, etc...

        Get System Info (OS, version, processor, platform, cpu name, gpu name, cpu and gpu specs, Build, )

        Open device management window: devmgmt.msc
        Open msconfig
        Open Playback Device settings
        Open Vol mixer
        Display current playback device name
        Open OneDrive
        Sync all/some folders in onedrive
        Sync all/some folders in G drive
        Save

        Take screenshot and save in screenshots folder
        Print info about today in single command [display in multiple lines]:
            Date, day, time
            Month name, Year
            Special day [if any]

        Set timer
        Set alarm
        Show time from multiple time-zones
        Set reminders

        Is it morning/afternoon/evening/night/midnight?

        send emails directly*
        draw on screen
        change system time
        Open OneNote
        Take text note directly*

        Open OneNote quicknote and take notes*

        Change wallpaper
        Change theme
        Toggle between light and dark mode (system-wide)

        Set up small macros -- Allow user to pick a limited no. of steps and select limited from a ltd. set of features to implement

        Start/Stop accesibility mode
        Magnify screen size
        Turn on/off the narrator

        Open Gallery

        shutdown/sleep/hibernate system

        Display number of open applications/windows

        RESET PC***** [Highly unlikely -- Requested to ban implementation of this feature]

        Add two times:
            12 hour + 12 hour times
            12 hour + 24 hour times
            24 hour + 24 hour times

        Easter eggs:
            print a motivational message
            print a story/poem -- short [200-250 words]

        Show desktop -- hide all apps*
        Show all open apps -- picker mode
        Peek into desktop

        Open action center*
        Show taskbar*

        See if you need to keep the following as 1 single or 2 different command(s):
            Close all tabs on chrome/edge/firefox, etc.
            Close browser

        Open/Start voice recorder
        Start apps like:
            zoom
            google keep
            chrome
            edge
            explorer
            excel/word/ppt
            calendar
            Office
            Planner
            Google docs/slides/sheets
            Sharepoint
            Outlook
            Teams
            Sway
            OneNote
            Kaizala
            People
            Project
            Video
            Yammer
            Whiteboard
            To Do
            Delve
            Polly
            Stream

        Log out of:
            google
            MS

        Built In Dictionary for [In decreasing order of number of native speakers]:
            Main Priority:
            -------------------------------------
            Upper main priority:
            ToDo -- Imp
                Mandarin Chinese
                Spanish
                English
                Hindi
            -------------------------------------
            Lower main priority:
                Bengali
                Portuguese
                Russian
                Japanese
                Western Punjabi
                Marathi
            -------------------------------------
            Telugu
            Wu Chinese
            Korean
            French
            German
            Vietnamese
            Tamil
            Yue Chinese
            Urdu
            Javanese
            Italian
            Egyptian Arabic
            Gujarati
            Iranian Persian
            Bhojpuri
            Min Nan Chinese
            Hakka Chinese
            Jin Chinese
            Hausa
            Kannada
            Indonesian
            Polish
            Yoruba
            Xiang Chinese
            Malayalam
            Odia
            Maithili
            Burmese
            Eastern Punjabi
            Sunda
            Sudanese Arabic
            Algerian Arabic
            Moroccan Arabic
            Ukrainian
            Igbo
            Northern Uzbek
            Sindhi
            North Levantine Arabic
            Romanian
            Tagalog
            Dutch
            Sa'idi Arabic
            Gan Chinese
            Amharic
            Northern Pashto
            Magahi
            Thai
            Saraiki
            Khmer
            Chattisgarhi
            Somali
            Malay
            Cebuano
            Nepali
            Mesopotamian Arabic
            Assamese
            Sinhalese
            Northern Kurdish
            Hejazi Arabic
            Nigerian Fulfulde
            Bavarian
            South Azerbaijani
            Greek
            Chittagonian
            Kazakh
            Deccan
            Hungarian
            Kinyarwanda
            Zulu
            South Levantine Arabic
            Tunisian Arabic
            Sanaani Spoken Arabic
            Min Bei Chinese
            Southern Pashto
            Rundi
            Czech
            Taʽizzi-Adeni Arabic
            Uyghur
            Min Dong Chinese
            Sylheti



        print currently active accnt details:
            name of admin
            account email address

        system restore


'''

# import pickle, os, datetime, webbrowser, time, calendar

def moduleinstallerr1():
    print('err\\\\WarnModule -- Module could not be installed as Python path not added to SYSTEM PATH VARIABLES')

def moduleinstallerr2():
    print('err\\\\WarnModule -- Sorry, one or more modules couldn\'t be closed from shell...please reinstall python and check the "Add python to PATH" checkbox before proceeding....THANK YOU!\n')

import os #PLEASE DO NOT COMMENT
errorinstallingmoduleslist = list()
reqdmodules = 'webbrowser;clipboard;psutil;subprocess;pickle;datetime;time;calendar;google;holidays'.split(';')

p = '\"c:\\users\\vivo jay\\pycharmprojects\\untitled3\\venv\\scripts\\python.exe\" -m pip install --upgrade pip'

# moduleinstall()
# print(errorinstallingmoduleslist)

for i in reqdmodules:
    try:
        exec('import ' + str(i))
    except:
        print('Error importing '+str(i))

time.sleep(0.1)

if len(errorinstallingmoduleslist) > 0:
    moduleinstallerr1()
else:
    print('-- module import successful --')

# try:
#     import clipboard
# except:
#     try:
#         os.system('pip install clipboard')
#     except:
#         print('err\\\\WarnClipboardload -- err\\WarnProg \n~$ Sorry, can\'t copy and paste pwds to and from the clipboard...')

def wifienable():
    os.system("netsh interface set interface 'WiFi' enabled")

def wifidisable():
    os.system("netsh interface set interface 'WiFi' disabled")

def showwifinets():
    os.system('"netsh wlan show profiles"')

# import subprocess

sysoutstr = (subprocess.run('powershell -c Get-Ciminstance -Namespace root/WMI -ClassName WmiMonitorBrightness', stdout=subprocess.PIPE).stdout.decode('utf-8'))
lowbper = 25    #Battery % below and equal to which is considered low

                # TBD: Make code to allow users to set preference for low battery power val
                #The above value will then be read and initialised onstart of program
                #Maybe by saving prefs in a sha512 hashed file
                #PWDs to be stored as sha1024 objs [preferably] if possible --> else sha512

def sysout():
    global sysoutstr
    print(sysoutstr)
    print(sysoutstr[50:54])

powerdisclaimerdisplayedval, inputcount = 0, 1

# ++++++++++++++++++++
def deltamasteraudiovol(dmasvolval):
    from ctypes import cast, POINTER
    from comtypes import CLSCTX_ALL
    from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
    import math  # Get default audio device using PyCAW
    devices = AudioUtilities.GetSpeakers()
    interface = devices.Activate(
    IAudioEndpointVolume._iid_, CLSCTX_ALL, None)
    volume = cast(interface, POINTER(IAudioEndpointVolume)) # Get current volume
    currentVolumeDb = volume.GetMasterVolumeLevel() # Get current volume in dBs
    try:
        volume.SetMasterVolumeLevel(currentVolumeDb + float(dmasvolval/4), None)
    except:
        print('~$ Vol change error, pls try other values...')

def setmasteraudiovol(absmvol):
    global minvolval

    from ctypes import cast, POINTER
    from comtypes import CLSCTX_ALL
    from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
    import math  # Get default audio device using PyCAW
    devices = AudioUtilities.GetSpeakers()
    interface = devices.Activate(
        IAudioEndpointVolume._iid_, CLSCTX_ALL, None)
    volume = cast(interface, POINTER(IAudioEndpointVolume))  # Get current volume
    currentVolumeDb = volume.GetMasterVolumeLevel() # Get current volume in dBs
    try:
        print(currentVolumeDb)
        volume.SetMasterVolumeLevel(minvolval + float(dmasvolval / 4), None)
        print(volume)
    except:
        print('~$ Vol change error, pls try other values...')

minvolval = None
shellpromptstr = '~> '

def volcal():
    global minvolval

    from ctypes import cast, POINTER
    from comtypes import CLSCTX_ALL
    from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
    import math  # Get default audio device using PyCAW

    currentVolumeDb = volume.GetMasterVolumeLevel() # Get current volume in dBs
    minvolval = currentVolumeDb

    del currentVolumeDb


Ival = 'nI'

def start():
    ### Program window task killer
    def forceshellterminate():

        PROCNAME = ['pythonw.exe', 'pycharm64.exe']

        # try:
        for i in PROCNAME:

            print(i in (p.name() for p in psutil.process_iter()))
                # print(i)
                # try:
                #     print('TASKKILL /F /IM '+i)
                #     # os.system('TASKKILL /F /IM '+i)
                # except:
                #     pass



            # PROCNAME = 'cmd.exe'
            # if PROCNAME in (p.name() for p in psutil.process_iter()):
            #     os.system('TASKKILL /F /IM '+PROCNAME)

        # except:
        #     print('err\\\\Exit -- warnProg\n~$ Please use Python IDLE or command prompt to run the exit command')
        #     start()

    global ttdata, ttweekd1, ttweekd2, ttweekd3, ttweekd4, ttweekd5, tday, tttimings, tints, tnums
    global chour, cmin, phyturl, chemturl, mathurl, phyurl, chemurl, phyjurlns, phyjurls, phyjurl, lowbatper
    global phyp, chemtp, phytp, popsites, weeknd, spotifyurl, wsappurl, c, powerdisclaimerdisplayedval
    global errorinstallingmoduleslist, reqdmodules, shellpromptstr

    popsites = ''.split(';')

    #School class urls
    chemurl = 'https://teams.microsoft.com/l/team/19%3af66fdfa30ba4454ab47fae373e9d3867%40thread.tacv2/conversations?groupId=40369ecf-adcb-4292-8e23-2e2d5bdaf7b9&tenantId=87832aca-93a8-4b2d-975e-a6eed5171daa'
    phyurl = 'https://us04web.zoom.us/j/3170120137'
    mathurl = 'https://teams.microsoft.com/l/team/19%3a61d7873ea45445b598d4645a1694c928%40thread.tacv2/conversations?groupId=ee82d950-f474-4d17-9ca1-cd9f99862b7b&tenantId=87832aca-93a8-4b2d-975e-a6eed5171daa'

    engurl = 'https://teams.microsoft.com/l/team/19%3ab609af7c878b46b4bea29ff4735590d9%40thread.tacv2/conversations?groupId=30bb9842-4baa-43e5-a2e5-a402cdfd3131&tenantId=87832aca-93a8-4b2d-975e-a6eed5171daa'
    csurl = 'https://teams.microsoft.com/l/channel/19%3a3e4ce89296f64f19a69bf5cadb249439%40thread.tacv2/General?groupId=370cce87-d9ed-45c2-96bf-74005ffda34b&tenantId=87832aca-93a8-4b2d-975e-a6eed5171daa'

    #Tuition CBSE urls
    chemturl = 'https://us04web.zoom.us/j/5976660704'
    phyturl = 'https://us04web.zoom.us/j/2082047216'

    #JEE Phy class urls
    phyjurls = 'https://meet.google.com/jgq-ptcd-fqp'
    phyjurlns = 'https://meet.google.com/zzr-xpuf-zoi'

    #Raak2 Sir's off2 websi2e
    phyoff = r"https://challengersclasses.com/"

    #Misc url
    spotifyurl = 'https://open.spotify.com/'
    wsappurl = 'https://web.whatsapp.com/'

    phyp, chemtp, phytp = '840551', '826992', '098810'    #Initialize pwds

    weekndsongurllist = ['https://open.spotify.com/album/4yP0hdKOZPNshxUOjY0cZj?highlight=spotify:track:7szuecWAPwGoV1e5vGu8tl']

    if (psutil.sensors_battery().percent <= lowbper and not psutil.sensors_battery().power_plugged == True) and powerdisclaimerdisplayedval == 0:

        print('Low battery Warning! -- Battery is charged to ', psutil.sensors_battery().percent, '%', sep='')
        time.sleep(0.5)
        os.system('mshta \"javascript:var sh=new ActiveXObject( \'WScript.Shell\' ); sh.Popup( \'Battery Level Low, please consider charging!\', 10, \'Battery Warning\', 64 );close()\"')
        lbrightnesspermval = input('Lower brightness to increase battery life for now?\n[Type \'y\' for yes and \'n\' for no]')

        powerdisclaimerdisplayedval = 1

        print(lbrightnesspermval)

        if lbrightnesspermval == 'y':
            os.system('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1,30)')
        else:
            pass

    c = input(str(inputcount)+shellpromptstr)

    day = ['friday']
    ttdata = []

    tday = datetime.datetime.today().weekday()
    chour = datetime.datetime.now().hour
    cmin = datetime.datetime.now().minute
    

    ttweekd1 = 'Maths, Maths, English, BREAK, Physics, Chemistry, CS'.replace(' ', '').split(',')
    ttweekd2 = 'Physics, English, Maths, BREAK, CS, CS, Chem, PhyT, MathT'.replace(' ', '').split(',')
    ttweekd3 = 'CS, English, English, BREAK, Maths, Chemistry, Physics, MathT, ChemT'.replace(' ', '').split(',')
    ttweekd4 = 'Chemistry, Chemistry, English, BREAK, CS, Maths, Physics, MathJ'.replace(' ', '').split(',')
    ttweekd5 = 'Physics, Physics, Maths, BREAK, English, CS, Chemistry, PhyT, MathT, PhyJ'.replace(' ', '').split(',')

    ttsat = 'ChemJ, MathJ'.replace(' ', '').split(',')
    ttsun = 'PhyJ, ChemT'.replace(' ', '').split(',')

    ttdata.append(ttweekd1)
    ttdata.append(ttweekd2)
    ttdata.append(ttweekd3)
    ttdata.append(ttweekd4)
    ttdata.append(ttweekd5)

    ttdata.append(ttsat)
    ttdata.append(ttsun)

    tttimings = '9:00-9:45, 10:00-10:30, 10:35-11:05, 11:05-11:25, 12:25-13:10, 13:10-13:50'.replace(' ','').split(',')
    ttttimings1 = '4:00'.replace(' ','').split(',')

    dkpath = 'C:'+str(os.environ["HOMEPATH"])+'\\desktop\\'

    def fileop():
        global ttdata, ttdatal
        if os.path.exists('ttdata.txt') == True:
            f = open(dkpath+'ttdata.txt', 'rb')
            if not len(f.read()) == 0:
                f.seek(0)

        else:
            try:
                f.close()
            except:
                pass
            
            f = open(dkpath+'ttdata.txt', 'wb+')
            ttdatal = pickle.dump(ttdata, f)
            f.close()

        f = open(dkpath+'ttdata.txt', 'rb')
        ttdatal = pickle.load(f)

    fileop()
    c = c.lower()


    def curclass():
        global tttimings, t, tnums, tints, tnums
        t = tttimings; tints, tnums = [], []

        for i in range(0, len(t)):
            tints.extend(t[i].split('-'))
        
        for i in range(0, len(tints)):
            tnums.append(tints[i].split(':'))

        for i in range(0, len(tnums)):
            for j in range(0, len(tnums[i])):
                (tnums[i][j]) = int((tnums[i][j]))

        while not (datetime.datetime.now().hour == 13 and datetime.datetime.now().minute == 9):
            pass
        else:
            openweb('chrome', csurl)

    def pwdloadclip(pwd):
        clipboard.copy(pwd)  # The clipboard content will be updated to the correct pwd

    def check():
        global ttdatal, tday, exval, stopval, openweb, openproglist, closeproglist, spotifyurl, wsappurl, c
        global res, monthval, yearval, Ival, inputcount
        exval, stopval = 0, 0

        inputcount += 1

        bp = psutil.sensors_battery().percent
        plugged = int(psutil.sensors_battery().power_plugged)

        showin = 0

        if (bp >= 95 and bp != 100 and plugged == 1 and Ival == 'nI'):
            os.system('mshta \"javascript:var sh=new ActiveXObject( \'WScript.Shell\' ); sh.Popup( \'Battery almost full!, consider removing charger...\', 10, \'Battery Warning\', 64 );close()\"')
            Ival = input('Battery almost full, consider removing charger... [\'-- User Warning\']\n[\'PLEASE TYPE \'I\' to ignore\']')

            if Ival != 'I':
                Ival = 'nI'
            else:
                pass


        elif c.replace(' ', '') == 'showin':
            showin = 0
        elif c.replace(' ', '') == 'hidein':
            showin = 1

        if showin == 1:
            print(c)
        else:
            pass

        if tday == 6:
            phyjurl = phyjurls
        else:
            phyjurl = phyjurlns

        if c == 'exit':
            exval = 1

        elif c == 'tt':
            fileop()
            print('success\n')
            print('Today\'s time table:')

            if not tday == 5:
                if not tday == 6:
                    print(ttdatal[tday])


        elif c == 'class':
            curclass()

        elif c == 'my chrome ext' or c == 'my ext' or c == 'my cext':
            webbrowser.open('https://chrome.google.com/webstore/user/library')

        elif c == 'cmd' or c == 'command prompt' or c == 'dos' or c == 'dos prompt' or c == 'prompt' or c == 'cli':
            os.system('start cmd.exe')

        elif c == 'stop':
            stopval = 1

        elif c == 'teams':
            os.system('''""C:\\Users\\Vivo Jay\\AppData\\Local\\Microsoft\\Teams\\Update.exe" --processStart "Teams.exe""''')

        elif c == 'start tor' or c == 'tor':
            try:
                os.startfile('C:\\Users\\Vivo Jay\\Desktop\\Tor Browser\\Browser\\firefox.exe')
            except:
                print('tor not found')

        elif c == 'end tor':
            os.system('taskkill /f /im firefox.exe')

        elif c == 'radio':
            print('Coming Soon... `Radio` feature is still in development')
        
        elif c == 'musicmenu':
            print('Music Menu is still in development')
            print('Only partial features are available. Things can be expected not to run or break while trying to run...\n')
            print('Thank you for your patience...\n')
            print()

        elif c == 'setup':
            # Open Teams
            openproglist = ''' ""C:\\Program Files (x86)\\Google\\Chrome Beta\\Application\\chrome_proxy.exe" --profile-directory=Default --app-id=hmjkmjkepdijhoojdojkdfohbdgmmhki"; ""C:\\Users\\Vivo Jay\\AppData\\Local\\Microsoft\\Teams\\Update.exe" --processStart "Teams.exe""; "start msedge"; "" '''.strip().replace('; ', ';').split(';')

            print(openproglist)
            # print(openproglist)

            try:
                os.system('wmic process where name="taskmgr.exe" call terminate')
            except:
                print('lol')

            for b in openproglist:
                try:
                    print(b)
                    os.system(b)
                except:
                    print('error', b)
            try:
                # webbrowser.open(spotifyurl)
                webbrowser.open(wsappurl)
                webbrowser.open('https://drive.google.com/drive/my-drive ')
            except:
                print('\nwarn\\\\NonChromeBrowserUnavailableinVer\n~$ This version does not support browsers other than chrome at the moment;\
                 \n[Feature might be available in one of the upcoming version(s) ;-D...]\n')

            os.system('"C:\\Users\\Vivo Jay\\Downloads\\TIME TABLE NEW (1).docx"')


        elif c == 'explorer':
            os.system('"C:\Program Files (x86)\XYplorerFree\XYplorerFree.exe"')

        elif c == 'open zoom':
            try:
                os.system('"start zoom"')
            except:
                os.system('"C:\\Users\\Vivo Jay\\AppData\\Roaming\\Zoom\\bin"')

        elif c == 'batteryper' or c == 'battery%':
            print(psutil.sensors_battery().percent)

        elif c == 'plugged' or c == 'charging' or c == 'plugged?' or c == 'charging?' or c == 'plugged in' or c == 'plugged in?':
            print(psutil.sensors_battery().power_plugged)

        elif c == 'today':
            #timeinfo = time.tzname[0] + ': ' + datetime.datetime.now().strftime('%A, %d %b %Y; %I:%M %p') + '\n\n'
            try:
                timeinfo = time.tzname[0] + ': ' + datetime.datetime.now().strftime('%A, %d %b %Y; %I:%M:%S %p') + '\n'
            except:
                timeinfo = datetime.datetime.now().strftime('%A, %d %b %Y; %I:%M:%S %p') + '\n'

            print(timeinfo)

        elif c == 'cpu freq':
            print('Current CPU usage:', psutil.cpu_freq().current)
            print('Max CPU usage:', psutil.cpu_freq().max)
            print('Min CPU usage:', psutil.cpu_freq().min)

        elif c == 'current cpu freq' or c == 'cur cpu freq' or c == 'curr cpu freq':
            print(psutil.cpu_freq().current)

        elif c == 'max cpu freq':
            print(psutil.cpu_freq().max)

        elif c == 'min cpu freq':
            print(psutil.cpu_freq().min)

        elif c == 'show wifi networks' or c == 'wifi networks' or c == 'wifi nets':
            showwifinets()

        elif c == 'brightness':
            print(sysoutstr)

        elif c == 'year calendar;year calendar;calendar year;cal year'.split(';'):
            print(calendar.calendar(datetime.datetime.now().year))

        elif c == 'phyj':
            webbrowser.open(phyoff)

        elif c == 'reddit':
            webbrowser.open('www.reddit.com')

        elif c == '//res':
            perm = input('You have invoked the restart command\ndo you wish to restart immediately?\n ["yes"/"no"] (Type the exact word): ')
            if perm == 'yes':
                print('Restarting...')
                os.system('shutdown -r -t 00')

        elif c == '//sht':
            perm = input('You have invoked the restart command\ndo you wish to restart immediately?\n ["yes"/"no"] (Type the exact word): ')
            if perm == 'yes':
                print('Shutting down...')
                os.system('shutdown -s -t 00')

        elif c == 'screen size':
            try:
                import ctypes #PLEASE DO NOT COMMENT
                user32 = ctypes.windll.user32
                screensize = ('Width:', str(user32.GetSystemMetrics(0)), 'Height:', str(user32.GetSystemMetrics(1)))
                print(screensize)

            except:
                try:
                    os.system('pip install ctypes')
                    user32 = ctypes.windll.user32
                    screensize = ('Width:', str(user32.GetSystemMetrics(0)), 'Height:', str(user32.GetSystemMetrics(1)))
                    print(screensize)

                except:
                    moduleinstallerr1()


        elif c == 'cpu avg load':
            print('Load in last minute:', psutil.getloadavg()[0])
            print('Load in last 5 minutes:', psutil.getloadavg()[1])
            print('Load in last 15 minutes:', psutil.getloadavg()[2])

        elif c == 'cpu core count':
            print(psutil.cpu_count())

        elif c == 'time' or c in 'T;t'.split(';'):
            print(datetime.datetime.today().hour, datetime.datetime.today().minute, sep=':')

        elif c == 'precise time' or c == 'ptime' or c == 'prec time' or c == 'p time':
            print(datetime.datetime.today().time())

        elif c =='ppt' or c == 'powerpoint':
            os.system('"start powerpnt.exe"')

        elif c == 'word':
            os.system('"start winword.exe"')

        elif c == 'excel':
            os.system('"start excel.exe"')

        elif c == 'onenote':
            os.system('"start onenote"')

        elif c == 'camera' or c == 'cam':
            campermval = input('Do you really want to start the camera?\n[Type \'y\' for yes or \'n\' for no]')
            if campermval == 'y':
                os.system('start microsoft.windows.camera:')
            else:
                print('Could not open camera -- Permission was denied!')

        elif c.lower().replace(' ', '') == 'p12time' or c.lower().replace(' ', '') == '12ptime':
            print(datetime.datetime.strptime(str(datetime.datetime.today().time()).split('.')[0], "%H:%M:%S").strftime("%I:%M:%S %p"))

        elif c == 'phyj' or c == 'phyjee':
            webbrowser.open(phyjurls)

        elif c == 'spotify':
            webbrowser.open(spotifyurl)

        elif c == 'skype' or c == 'open skype':
            print(r'"%userprofile%\AppData\Local\Microsoft\WindowsApps\Skype.exe"')
            os.system(r'"%userprofile%\AppData\Local\Microsoft\WindowsApps\Skype.exe"')
        
        elif c == 'notepad' or c == 'np':
            subprocess.Popen('notepad.exe', shell=True)

        elif c == 'drive' or c == 'gdrive':
            webbrowser.open('https://drive.google.com/drive/my-drive')

        elif c =='whatsapp' or c == 'wsapp':
            webbrowser.open(wsappurl)

        elif c == 'chrome':
            os.system('"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome"')

        elif c == 'edge':
            os.system('"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge"')

        elif c == 'settings' or c == 'setting':
            os.system('"start ms-settings:"')

        elif c == 'calc':
            os.system('calc')

        elif c == 'chrome ext' or c == 'cext' or c == 'ext':
            webbrowser.open('https://chrome.google.com/webstore/category/extensions')
        
        elif c == 'end taskmgr':
            os.system('wmic process where name="taskmgr.exe" call terminate')

        elif c == 'task manager' or c == 'taskmgr' or c == 'tskmgr' or c == 'task mgr' or c == 'tsk mgr' or c == '$t':
            os.system('taskmgr')

        elif c == 'about system':
            import platform
            print("System Information\n")
            uname = platform.uname()
            print(f"System: {uname.system}")
            print(f"Node Name: {uname.node}")
            print(f"Release: {uname.release}")
            print(f"Version: {uname.version}")
            print(f"Machine: {uname.machine}")
            print(f"Processor: {uname.processor}")

        elif c.startswith('disk space') == True or c.startswith('diskspace') == True:
            pass
            #TBD

        elif c == 'test':
            def startProgram():
                SW_MINIMIZE = 6
                info = subprocess.STARTUPINFO()
                info.dwFlags = subprocess.STARTF_USESHOWWINDOW
                info.wShowWindow = SW_MINIMIZE
                wppath = input('Please enter path for wallpaper: ')
                subprocess.Popen(r'start', wppath, startupinfo=info)

            startProgram()

        elif c == 'mem' or c == 'memory':
            print('Total:', psutil.virtual_memory()[0])
            print('Available:', psutil.virtual_memory()[1])
            print('Percent (%):', psutil.virtual_memory()[2])
            print('Used:', psutil.virtual_memory()[3])
            print('Free:', psutil.virtual_memory()[4])

        elif c.startswith('brightness') == True:
            c = c.replace(' ', '')
            c = c[10:]

            #TBD Below:
            if c.isnumeric() == True:
                c = int(c)
                os.system('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1, ' + str(c) + ')')

            elif c in ['medium', 'med']:
                os.system('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1, 60)')

            elif c in ['lo', 'low']:
                subprocess.Popen('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1, 35)', shell=False)

            elif c in ['high', 'hi']:
                os.system('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1, 85)')

            elif c in ['full', 'max']:
                os.system('powershell -c (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1, 100)')

        elif c == 'date':
            print(datetime.datetime.today().date())

        elif c == 'day':
            dayofweek = datetime.datetime.today().strftime("%A")
            print(dayofweek)

        elif c == 'cal' or c == 'calendar':
            print(calendar.TextCalendar(calendar.MONDAY).formatmonth(datetime.datetime.now().year, datetime.datetime.now().month))

        elif c == 'mom width':
            print('infinite')

        elif c.endswith('cal') == True or c.endswith('calendar') == True and not(c in 'next cal;next calendar;year cal;year calendar').split(';'):
            res = [int(i) for i in c.split() if i.isdigit()]

            if res == []:
               print(c.split('cal')[0][0:3])
            else:
                #pass # TBD

                res = []
                for i in c:
                    if i.isdigit() == True:
                        res.append(i)
                        loc = c.find(i)
                        #print(loc)
                        #print(c[loc])
                        c = c[:(loc-1)] + c[loc:] # Printing string after removal of 'loc' th char
                        #print("The string after removal of i'th character : " + c)

                #print(c)

                yearval = ''.join(res)
                yearval = int(yearval)

            monthval = c[:3]
            monthval = (time.strptime(monthval,'%b').tm_mon)

            print(calendar.TextCalendar(calendar.MONDAY).formatmonth(yearval, monthval))

        elif c == 'hide input':
            showinval = 0

        elif c == 'show input':
            showinval = 1

        elif c == 'end cortana':
            os.system('taskkill /f /im cortana.exe')
        
        elif c == 'apps':
            if not os.path.isfile('UWPpkgnfo.txt'):
                subprocess.call('powershell -c get-appxpackage | ConvertTo-Json > UWPpkgnfo.txt', shell=False)

            with open('UWPpkgnfo.txt', encoding = 'utf-8-sig') as f:
                global appsInfo
                import json
                appsInfo = json.load(f)

        elif c == 'mail':
            print('TODO!!!')

        elif c == 'prev cal' or c == 'prev calendar':
            print(calendar.TextCalendar(calendar.MONDAY).formatmonth(datetime.datetime.now().year, datetime.datetime.now().month-1))

        elif c == 'next cal' or c == 'next calendar':
            print(calendar.TextCalendar(calendar.MONDAY).formatmonth(datetime.datetime.now().year, datetime.datetime.now().month+1))

        elif c == '12time' or c == '12 time' or c == 'time12' or c == 'time 12' or c in '12;12t;t12;t\';\'t'.split(';'):
            print(datetime.datetime.strptime(str(datetime.datetime.today().time()).split('.')[0], "%H:%M:%S").strftime("%I:%M %p"))

        elif c.startswith('s ') == True:
            chrome_path = 'C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s'
            webbrowser.get(chrome_path).open(r"https://www.google.com/search?q="+c[2:])

        elif c.startswith('% ') == True:
            webbrowser.open(c[1:])

        elif c.startswith('%') == True:
            webbrowser.open(c[1:])

        elif c == 'calibrate vol' or c == 'calibrate vol' or c == 'calib volume' or c == 'calib vol' or c == 'cal vol' or c == 'vol cal' or c == 'volume calibrate' and not (c == 'vol' or c == 'volume') :
            global volcalval
            volcalval = input('Please manually set volume to 0% -- Do not mute! -- type \'set\' when done:\n')
            while c.lower() != 'set' or c != 'exit':
                volcalval = input('> Please calibrate... [Type \'exit\' to exit volume calibration mode]')

            if c == 'set':
                volcal()
            elif c == 'exit':
                print('Exiting calibration mode-- \n')

        elif c == 'regedit' or c in 'reg;registry;edit reg;edit registry'.split(';'):
            os.system('regedit')

        elif c.startswith('volume') == True:
            c = c.replace(' ', '')
            c = c[6:]


            #TBD Below:
            if c.isnumeric() == True:
                c = int(c)
                deltamasteraudiovol(c)

            elif c in ['medium', 'med']:
                deltamasteraudiovol(c)
            elif c in ['lo', 'low']:
                deltamasteraudiovol(c)

            elif c in ['high', 'hi']:
                deltamasteraudiovol(c)

        else:
            pass

    check()

    if exval == 0 and stopval == 0:
        start()
    elif exval == 1:
        forceshellterminate()
    else:
        pass

start()
