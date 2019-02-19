
# YZwebp      
 
# 让iOSApp显示webp图片            

### 使用方法：     

#### 1.下载该静态库并导入      

<https://github.com/YouZhiZheShiJingCheng/YZwebp>

### 2.配置工程      

TARGETS->Build Settings->Other Linker Flags 添加一个  -ObjC

#### 3.开始应用         

UIImageView* imageUiv=[[UIImageView alloc]initWithFrame:CGRectMake(0, 0,60, 60)];

imageUiv.image = [UIImage imageWithWebP:@"WEBP图片的名字加后缀就可以了"];

[self.imgView addSubview:imageUiv];
    
      
# Demo地址：

# <https://github.com/YouZhiZheShiJingCheng/WebpDemo>    
 


