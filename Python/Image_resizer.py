from PIL import Image
image = Image.open('D:/Python/20221030_124507.jpg')
new_image = image.resize((4000, 3000))
new_image.save('20221030_124507_conv.jpg')
