import twilio
from twilio.rest import Client
import Rpi.GPIO as GPIO

pin=18
GPIO.setmode(GPIO.BCM)
GPIO.setup(pin,GPIO.IN)
while[1]:
    state=GPIO.input(pin)
if(state==1):
    account_sid=’AC984c57e10539ffa913799bf557O4c6e8’
    auth_token=’ddd376e655b3d55c419d572dc8194c1a7’
    client=Client(account_sid,auth_token)
    message=client.messages.create(
    body=”Water level is low. Please refill!”,
    from_=”+1415765225”,to=’+91835043185’)
    print(message.sid)
    print('Tank is empty')
    break
else:
    print('Full')
