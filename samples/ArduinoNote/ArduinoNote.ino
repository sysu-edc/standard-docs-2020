// 这是一份伪代码，仅用于解剖代码结构，说明怎么写注释

// 头文件
#include "lib/customHeader"
#include <libraryHeader>

// 预定义
const int ExtIntPin = 5;        //! 外部中断端口
const int DELAY_PERIOD = 100;   //! 延时周期
LedDevice* led_device = null;   //! LED设备指针变量

enum MoveState { FORWARD, BACKWARD };

/**
 * 尝试行走函数（第一行是名字）
 * 这里只是演示怎么注释，实际上setup和loop是可以不用注释的。（第二行是具体说明）
 * @param state: 指示前进或后退的状态
 * @param velo: 指使速度（范围0-255）
 * @return 命令执行是否成功
 */
bool tryMove(const MoveState &state, int velo) {
    int factor;
    
    switch(state) {
      case FORWARD:
        factor = 1;
        break;
      case BACKWARD:
        factor = -1;
        break;
      default:
        return false;
    }

    Motor.run(velo * factor, velo * factor);
    return true;
}
