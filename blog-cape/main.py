from flask import Flask, render_template
from post import Post

post = Post()
app = Flask(__name__)

@app.route('/')
def home():
    posts = post.get_posts() 
    return render_template("index.html", posts = posts)

@app.route("/<int:id>")
def get_post(id):
    post_info = post.get_posts_by_id(id)
    print(post_info)
    return render_template("post.html", post=post_info)

if __name__ == "__main__":
    app.run(debug=True)
