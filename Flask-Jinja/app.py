from flask import Flask, render_template
from services import gender_service,age_service 

app = Flask(__name__)


@app.route("/guess/<string:name>")
def render_message(name):

    gender_information = gender_service.call_gender_api(name=name)
    age_information = age_service.get_age_information(name=name)

    gender, age = gender_information.get("gender"), age_information.get("age")
    print(age_information,gender_information)
    return render_template("render.html", name = name, gender = gender, age = age)

if __name__ == '__main__':
    app.run(debug=True)
    
