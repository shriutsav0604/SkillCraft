import requests
from bs4 import BeautifulSoup
import csv

url = "https://books.toscrape.com/"  # Example e-commerce site for books
response = requests.get(url)
soup = BeautifulSoup(response.text, "html.parser")

products = []
for item in soup.find_all("article", class_="product_pod"):
    name = item.h3.a["title"]
    price = item.find("p", class_="price_color").text
    rating = item.p["class"][1]  # star-rating (e.g., "Three")
    products.append([name, price, rating])

# Save to CSV file
with open("products.csv", "w", newline="", encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["Name", "Price", "Rating"])
    writer.writerows(products)

print("Scraped data saved to products.csv")
