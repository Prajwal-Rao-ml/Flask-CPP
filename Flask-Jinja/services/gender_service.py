from requests import get

API_BASE_URL = 'https://api.genderize.io/'

API_ENDPOINTS = {
    'NAME': '?name='
}

def call_gender_api(name):
    result = get(API_BASE_URL+API_ENDPOINTS['NAME']+f"{name}")
    return result.json()