import requests
class Post:
    def get_posts(self):
        # Logic to retrieve posts from the database or any data source
        posts = requests.get("https://api.npoint.io/85d8e612305a07f7b20c")
        return posts.json()
    def get_posts_by_id(self,id):
        post = requests.get("https://api.npoint.io/85d8e612305a07f7b20c/{}".format(id))
        return post.json()