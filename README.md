Justified view
============

![Screenshot: Launch image](https://raw.github.com/cyndibaby905/JustifiedView/master/JustifiedView/JustifiedView/photolism.png)
![Screenshot: Launch image](https://raw.github.com/cyndibaby905/JustifiedView/master/JustifiedView/JustifiedView/demo.png)

About
-----

It's a justified layout view, like what the flickr for iOS 2.0 did.

* Each cell in justified view has been optimized for reusing;  
* Smart algorithm to speed up the calculation;
* Supporting both iPad and iPhone;
* I used this justified view in an app named "photolism"(https://itunes.apple.com/us/app/photolism/id584688171), so it's a proven technology.

Usage
-----

It's usage is just like a `UItableView`, you should implement the `CHStylizedViewDelegate` in your `viewcontroller`:
 
    - (NSInteger)numberOfCellsInStylizedView:(CHStylizedView *)stylizedView;
    - (UIView<CHResusableCell> *)stylizedView:(CHStylizedView *)stylizedView cellAtIndex:(NSInteger)index;
    - (CGSize)stylizedView:(CHStylizedView *)stylizedView sizeForCellAtIndex:(NSInteger)index;
    
License
-------

Created by Hang Chen on 1/12/13.
Copyright (c) 2013 Hang Chen. 

Permission is hereby granted, free of charge, to any person obtaining 
a copy of this software and associated documentation files (the 
"Software"), to deal in the Software without restriction, including 
without limitation the rights to use, copy, modify, merge, publish, 
distribute, sublicense, and/or sell copies of the Software, and to 
permit persons to whom the Software is furnished to do so, subject 
to the following conditions:

The above copyright notice and this permission notice shall be 
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT 
WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
MERCHANTABILITY, FITNESS FOR A PARTICULAR 
PURPOSE AND NONINFRINGEMENT. IN NO EVENT 
SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE 
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
IN CONNECTION WITH THE SOFTWARE OR 
THE USE OR OTHER DEALINGS IN THE SOFTWARE.

@author 		Hang Chen <cyndibaby905@yahoo.com.cn>
@copyright	2013	Hang Chen
@version
