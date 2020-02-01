# Baseline JPEG optimizer

## DESCRIPTION

JPEG lossy optimization by changing the quantization matrix.

## BUILD

Type:
```
make
```

## USAGE

```sh
jpegtran -copy none -optimize -outfile input.jpg you_image.jpg
jpegbaseopt input.jpg output.jpg [qscale=1]
jpegtran -progressive -copy none -optimize -outfile you_image.jpg output.jpg
```

## See also

* https://github.com/kud/jpegrescan
* https://github.com/ImageProcessing-ElectronicPublications/jpeg-recompress

## Authors

Copyright (C) 2014, Fang520  
Modify 2019-2020, zvezdochiot  
Public Domain Mark 1.0

## HomePage

https://github.com/Fang520/jpeg_optimizer

2020
