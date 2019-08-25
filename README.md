# XMCoordinator
这是一个模板，只考虑了组件对外提供服务的问题，其它的问题，欢迎各位大神补充
## iOS组件化
本人不喜欢Router的方式组件化，也讨厌使用“字符串”的方式去定位服务和方法，在研究了Casa Taloyum大神（大神的用的“字符串”定位服务和方法，但大神的组件化思想非常到位）和其他大神的一些关于组件化（Router的方式）方式后，得出自己的结论：XMCoordinator组件  
XMCoordinator组件：以protocol的方式对外提供服务；  
优点：所有其它组件只需依赖XMCoordinator组件即可  
缺点：所有其它组件必须依赖XMCoordinator组件，对外提供服务的组件需要把他的protocol文件交给XMCoordinator组件
## 详细介绍
1. 其它组件把对外提供服务的protocol文件都放在[XMCoordinator/Services](/Classes/Services)文件夹下，并且引入到[XMServices.h](/Classes/Services/XMServices.h)文件中，并且自身不保留protocol文件
2. 所有其它组件都通过cocoapods依赖XMCoordinator组件
3. 所有的其它组件外提供服务的protocol都用XMCoordinator类的Category去实现，而且protocol提供的方法都是“+”方法
4. 每个protocol及其方法都要写好详细的注释
5. 具体protocol实现方法和XMCoordinator用法可参考[DemoModule](/DemoModule/Classes/Service)和[AppDelegate.m](/Demo/AppDelegate.m)

## 下载本项目，运行pod install即可查看效果
