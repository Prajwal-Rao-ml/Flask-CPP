from requests import get

API_BASE_URI = 'https://api.agify.io/'

API_PATH = {
    'NAME' : '?name='
}

def get_age_information(name):
    age_information =  get(API_BASE_URI+API_PATH['NAME']+f"{name}")

    return age_information.json()
