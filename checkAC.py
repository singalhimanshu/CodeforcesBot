import requests
import time
from notify import notification

URL = " https://codeforces.com/api/user.status?handle=himansingh241&from=1&count=1"

req = requests.get(url=URL)
data = req.json()
prevSubmissionId = data['result'][0]["id"]

while (True):
    time.sleep(5)
    req = requests.get(url=URL)
    data = req.json()

    verdict = data['result'][0]['verdict']
    problem = data['result'][0]['problem']['index']
    newSubmissionId = data['result'][0]["id"]
    # For debugging purposes
    # s = f"Problem: {problem}, Verdict: {verdict} oldId: {prevSubmissionId} newId: {newSubmissionId}"
    # print(s)
    if (newSubmissionId != prevSubmissionId and verdict != 'TESTING'):
        # print('changed')
        prevSubmissionId = newSubmissionId
        s = f"Problem: {problem}, Verdict: {verdict}"
        # For debugging purposes
        # print(s)
        notification(s, 'Codeforces')

