
from PIL import Image, ImageFilter

before = Image.open("tower.bmp")
after = before.filter(ImageFilter.BoxBlur(50))
after.save("tower_blur.bmp")