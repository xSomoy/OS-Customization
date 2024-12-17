Contrast by kylergs
--**--       --**--
How to change resolution/change the image
1-
Find appropriatly large source image, mine comes from 
'http://hubblesite.org/newscenter/archive/releases/2006/01/image/i/'
which has resolutions well past 4K. Check out some of the other hubble 
images too, they're really cool.
2-
Open up the image in GIMP ('www.gimp.org') create a canvas at the size
you want the skin to be (e.g. 1366*768) downscale and move the image appropriatly
for your background. (Google will help here, but Image->'scale image' is what you're looking for.
3-
Mess about a bit. Save this base image and save a new copy for the colourful image and the soft focus image.
For soft focus, Filters->Blur->Gaussian Blur works well. Adjust the paramaters until the result looks nice.
I would also recomend desaturating it a little.
Set this to your screen Background (If you want, there are way more ways you could match a nice bg)
For colours, Colors->'Color Balance' and have a fiddle until the effect is pretty.
Export both as png's
4- Overlay Colours
New Gimp project, open as layers, the base image you saved earier and the colourful image.
Place the base layer on top, right click on the base layer on the layer toolbox, 'Add layer mask'
Choose 'White (full opacity)'
Then right click again and make sure both 'Show Layer Mask' and 'Edit Layer Mask' are ticked.
You should have a solid white image. With this, black areas will be from the colourful image.
You can fiddle here until you get an effect you want. Check my unticking "Show Layer Mask"
Export the final image when you are happy with it.
5- Generate Bars
Find your Gimp scripts folder from Edit->Preferences->Folders->Scripts. Go to that folder and copy in the "SomeVGuides.scm"
attatched to the skin. Restart GIMP.
Now work out the starting location of the bars. The skin allows for 24 bars on each side with remaining space in the middle taken up by the rms bar.
So work out how to make up 48 even bars with spacing in the centre.
Here we will call the width of the bars 'w' and the gap for rms in the middle 'r'
On your combined image for the bars in GIMP go to Image->Guides->'N Spaced V-Guides'
Run it once with 'Vertical Guide Spacing' = w, 'Start from'=w, and 'Number'=24
Run it again with 'Vertical Guide Spacing' = w, 'Start from'=(24*w+r), and 'Number'=24
You have to evaluate (24*w+c) beforehand
Now Image->Guides->New Guide...    Add two horizontal guides wherever you want the base line to fall.
Write down/remember the px location of these.
Then run Filters->Web->Slice with Path = '@Resources/Bars2', prefix = 'bars', Image format=png
6-Recalibrate skin
Almost done, open the skin ini file.
Set Height = (Height of first Horizontal Guide)
Ser Height2 = (Height of second Horizontal Guide)