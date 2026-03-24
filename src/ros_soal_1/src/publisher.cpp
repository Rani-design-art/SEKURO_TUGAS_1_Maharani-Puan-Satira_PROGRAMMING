#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class publisherNode : public rclcpp::Node
{
public:
    publisherNode() : Node("my_publisher") {
        publisher_ = this->create_publisher<std_msgs::msg::String>("my_topic",10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&publisherNode::timer_callback, this)
        );
    }

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    void timer_callback() {
        auto message = std_msgs::msg::String();
        message.data = "You can dance! You can Jive!";
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s", message.data.c_str());
        publisher_->publish(message);
   } 
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<publisherNode>());
    rclcpp::shutdown();
    return 0;
}