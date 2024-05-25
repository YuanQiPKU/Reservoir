#include "widget.h"
#include "./ui_widget.h"
#include "pages.h"

Widget::Widget(password *my_password, QWidget *parent)
    : QWidget(parent), my_password(my_password), ui(new Ui::Widget),
      all_page(new QTabWidget), creator(new pages_creator) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  all_page->setParent(this); // 将all_page的父窗口设置为当前的Widget
  all_page->resize(QSize(960, 540));           // 固定标签页大小
  all_page->setTabPosition(QTabWidget::North); // 设置标签页位于窗口的上方
  all_page->setTabsClosable(true);
  QTabBar *tabBar = all_page->tabBar();
  connect(all_page, &QTabWidget::tabCloseRequested, this,
          &Widget::closeTab); // 设置tab可以被关闭
                              // 设置标签页样式
  tabBar->setStyleSheet(
      "QTabBar::tab{color: white;background-color: rgba(61, 203, 255, "
      "175);min-width: 20ex;min-height: 5ex;   font-family: 幼圆; }");
  tabBar->setStyleSheet(tabBar->styleSheet() +
                        "QTabBar::tab:selected{background-color: rgba(255, "
                        "179, 0, 175);margin-top: 2ex;}");
  tabBar->setStyleSheet(
      tabBar->styleSheet() +
      "QTabBar::tab { border-radius: 5px; }"); // 为标签页增加圆角
  tabBar->setStyleSheet(tabBar->styleSheet() +
                        "QTabBar::tab { font: bold 12px; }");

  /*这三行代码展示了如何使用Qt的样式表（Style
Sheet）来设置`QTabBar`控件的样式。下面是对每一行代码的解释：

1. **设置标签页的基本样式**：
 ```cpp
 tabBar->setStyleSheet("QTabBar::tab{color: white;background: #5c8dff;border:
1px solid #73b7ff;min-width: 20ex;min-height: 5ex;   font-family: 幼圆; }");
 ```
 - `QTabBar::tab`：选择器，用于定位`QTabBar`中的每个标签页（tab）。
 - `color: white;`：设置标签页上文本的颜色为白色。
 - `background: #5c8dff;`：设置标签页的背景颜色为指定的蓝色。
 - `border: 1px solid
#73b7ff;`：设置标签页的边框为1像素宽，实线，颜色为另一种蓝色。
 - `min-width:
20ex;`：设置标签页的最小宽度为20个字符的宽度（ex是一个长度单位，通常等于当前字体的x高度）。
 - `min-height: 5ex;`：设置标签页的最小高度为5个字符的高度。
 - `font-family: 幼圆;`：设置标签页的字体为“幼圆”，这是一个中文字体名称。

2. **设置选中标签页的样式**：
 ```cpp
 tabBar->setStyleSheet(tabBar->styleSheet() + "QTabBar::tab:selected{background:
#505cff;margin-top: 2ex;}");
 ```
 - `tabBar->styleSheet()`：获取当前`QTabBar`的样式表字符串。
 - `+`：将新样式添加到现有的样式表字符串中。
 - `QTabBar::tab:selected`：选择器，用于定位`QTabBar`中被选中的标签页。
 - `background: #505cff;`：设置选中的标签页的背景颜色为更深的蓝色。
 - `margin-top:
2ex;`：设置选中的标签页的顶部外边距为2个字符的高度，这会使其相对于其他标签页突出显示。

3. **为所有标签页增加圆角**：
 ```cpp
 tabBar->setStyleSheet(tabBar->styleSheet() + "QTabBar::tab { border-radius:
5px; }");
 ```
 - 这行代码的工作原理与第二行类似，它将新的样式规则添加到现有的样式表中。
 - `border-radius:
5px;`：为所有标签页添加5像素的圆角效果，使得标签页的角落看起来更加平滑。

这种链式设置样式表的方法允许你逐步构建和修改控件的样式，而不必一次性定义所有样式规则。这样做的好处是可以更容易地管理和调整样式，特别是当你需要对特定状态（如选中状态）应用不同的样式时。
*/
  if (password::password_count > 0&&my_password->password_size()>0) {
    QWidget *login_page = pages_creator::login_page(all_page, my_password);
    all_page->addTab(login_page, "登录");
    all_page->setCurrentWidget(login_page); // 跳转新建到的页面
  } else {
    // 如果是第一次使用, 生成“新的开始”页面
    QWidget *first_time_page = creator->first_time_page(all_page, my_password);
    all_page->addTab(first_time_page, "新的开始");
    all_page->setCurrentWidget(first_time_page); // 跳转新建到的页面
  }
}
Widget::~Widget() { delete ui; }

// 用于删除标签页的槽函数
void Widget::closeTab() {
  int cur_index = all_page->currentIndex();
  if (cur_index == 0) {
      all_page->removeTab(cur_index);
      QWidget *main_page = pages_creator::only_main_page(all_page,my_password);
      all_page->addTab(main_page, "主页面");
      all_page->setCurrentWidget(main_page); // 跳转新建到的页面
    // 关闭主页面之后重新加载主页面
    return;
  }
  all_page->removeTab(cur_index);
}
