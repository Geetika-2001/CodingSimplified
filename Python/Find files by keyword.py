import os

def stop():
    print('________ Search exited ________')

def check(path, keyword):
    global res, rescount, PATH, kwd, directory
    try:
        directory = '||'.join(os.listdir(PATH))
        res = directory

        print('Search for >> "', kwd.lower(), '"\n', sep = '')
        res = [i for i in res.split('||') if kwd.lower() in i.lower()]
        rescount = len(res)

        if not rescount == 0:
            print(rescount, ' instance(s) of "', keyword.lower(),'" found', sep = '')
        else:
            print('No instance of "', keyword,'" found', sep = '')

        print()

        for i in res:
            print('\t'+str(i))

        print()
    except:
        print('Could not search. Invalid folder path entered\n')
    
    if not path == 'xxx':
        PATH = input('Enter path or xxx to exit: ')
        if not PATH == 'xxx':
            kwd = input('Enter keyword: ')
            check(PATH, kwd)
        else:
            stop()
    else:
        stop()

PATH = input('Enter path or xxx to exit: ')
if not PATH == 'xxx':
    kwd = input('Enter keyword: ')
    check(PATH, kwd)
else:
    stop()
