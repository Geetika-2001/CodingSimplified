import datetime
import pytz
# datetime.date() - (Day , Month, Year, Weekday)
# datetime.time() - (Hours, Minutes, Seconds, Microseconds)
# datetime.datetime() - (D, M, Y, W, H, M, S, MS)
today = datetime.date.today()  # Gives the present date
print(today)
print_date = datetime.date(2003, 7, 1)  # Prints the date provided
print(print_date)
days_since_birth = (today - print_date).days  # No. of days alive
print(days_since_birth)
tdelta = datetime.timedelta(days=10)  # Used to get number of days
print(today + tdelta)
hdelta = datetime.timedelta(hours=10)  # Used to get number of hours
print(today + hdelta)
print(today.day)  # Prints todays date
print(today.month)  # Prints the present month
print(today.year)  # Prints the present year
print(today.weekday())  # Prints the index of the day
time = datetime.time(0, 27, 45, 15)  # The present time inputted
print(time)
print(datetime.datetime.now())  # Prints the description of today
datetime_today = datetime.datetime.now(tz=pytz.UTC))
datetime_pacific = datetime_today.astimezone(pytz.timezone('USA/Pacific'))
print(datetime_pacific)
