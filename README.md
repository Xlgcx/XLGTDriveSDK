# XLGTDriveSDK

# 1、校验podspec文件
pod spec lint XLGTDriveSDK.podspec --verbose --allow-warnings --skip-import-validation

# 2、上传podspec文件到私有索引库
pod trunk push XLGTDriveSDK.podspec --verbose --allow-warnings --skip-import-validation

# 3、删除本地仓库索引文件
rm ~/Library/Caches/CocoaPods/search_index.json

# 4、搜索
pod search XLGTDriveSDK

# 5、仓库路径
https://raw.githubusercontent.com/CocoaPods/Specs/93514de73a6bbb00c072c7d8a3d16be43fa62b88/Specs/e/6/b/XLGTDriveSDK/1.0.0/XLGTDriveSDK.podspec.json