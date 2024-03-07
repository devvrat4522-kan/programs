# import requests
# from bs4 import BeautifulSoup
# response = requests.get("https://en.wikipedia.org/wiki/Web_scraping")
# bs = BeautifulSoup(response.text,"lxml")
# print(bs.find("p").text)

# import requests
 
# url_to_parse = "https://en.wikipedia.org/wiki/Python_(programming_language)"
# response = requests.get(url_to_parse)
# print(response.text)

# import requests
# from bs4 import BeautifulSoup

# def linkedin_post_comments(url):
#     response = requests.get(url)
#     # print(response.text)
#     print("yes1")
#     if response.status_code == 200:
#         soup = BeautifulSoup(response.text, 'html.parser')
#         comments = soup.find_all('div')
#         print(comments)
#         print("##################################################################")
#         com_tag = soup.find_all('h4')
#         print(com_tag)
#         # for comment in comments:
#         #     comm = comment.find_all('span', dir='Itr').text
#         #     comm_text = comment.find_all('span', dir='Itr').text
#         #     print(comm)
#         #     print("yes3")
#         #     print(f"Commenter: {comm}\nComment: {comm_text}\n")
        
#     else:
#         print("Failed")
                             
# url = "http://127.0.0.1:5500/index.html"
# linkedin_post_comments(url)


# import os
# from linkedin_scraper import Person, actions
# from selenium import webdriver
# driver = webdriver.Chrome("./chromedriver")

# email = os.getenv("LINKEDIN_USER")
# password = os.getenv("LINKEDIN_PASSWORD")
# actions.login(driver, email, password) # if email and password isnt given, it'll prompt in terminal
# person = Person("https://www.linkedin.com/in/devvrat-kannojia-5a27811ba/", driver=driver)



# API

# from apify_client import ApifyClient

# # Initialize the ApifyClient with your API token
# client = ApifyClient("<YOUR_API_TOKEN>")

# # Prepare the Actor input
# run_input = {
#     "postUrl": "https://www.linkedin.com/posts/linkedin_add-job-preferences-activity-6704397478923423745-OR6o",
#     "sortType": "RELEVANCE",
#     "startPage": 1,
#     "minDelay": 2,
#     "maxDelay": 7,
# }

# # Run the Actor and wait for it to finish
# run = client.actor("curious_coder/linkedin-comment-scraper").call(run_input=run_input)

# # Fetch and print Actor results from the run's dataset (if there are any)
# for item in client.dataset(run["defaultDatasetId"]).iterate_items():
#     print(item)


# import requests
# from bs4 import BeautifulSoup

# def get_linkedin_comments(post_url):
#     response = requests.get(post_url)
#     print("yes")
#     soup = BeautifulSoup(response.content, 'html.parser')
#     comments = []
#     comment_tags = soup.find_all('div', class_='update-outlet')
#     for comment_tag in comment_tags:
#         comment_text = comment_tag.find('span').text.strip()
#         comments.append(comment_text)
#     print(comments)
#     return comments

# post_url = 'https://www.linkedin.com/feed/update/urn:li:activity:7166157934387838977/'
# comments = get_linkedin_comments(post_url)
# for idx, comment in enumerate(comments, start=1):
#     print(f"Comment {idx}: {comment}")


import requests

ACCESS_TOKEN = 'your_access_token'
API_BASE_URL = 'https://api.linkedin.com/rest/socialActions/{shareUrn|ugcPostUrn|commentUrn}/comments/ids=List({commentId})'

def fetch_posts():
    url = f"{API_BASE_URL}/v1/newsFeed"
    headers = {'Authorization': f'Bearer {ACCESS_TOKEN}'}
    response = requests.get(url, headers=headers)
    if response.status_code == 200:
        return response.json()
    else:
        print("Error fetching posts:", response.status_code)
        return None

def fetch_comments(post_urn):
    url = f"{API_BASE_URL}/v1/socialActions/{post_urn}/comments"
    headers = {'Authorization': f'Bearer {ACCESS_TOKEN}'}
    response = requests.get(url, headers=headers)

    if response.status_code == 200:
        return response.json()
    else:
        print("Error")
        return None

def comments():    
    posts = fetch_posts()
    if posts:
        for post in posts['values']:
            post_url = post['urn']
            comments = fetch_comments(post_url)
            if comments:
                print("Comments for post:", post_url)
                for comment in comments['values']:
                    print(comment['text'])
comments()