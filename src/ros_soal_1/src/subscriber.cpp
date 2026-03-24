#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class subscriberNode : public rclcpp::Node
{
public:
    subscriberNode() : Node("my_subscriber") {
        subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "my_topic",
            10,
            std::bind(&subscriberNode::topic_callback, this, std::placeholders::_1)
        );
    }

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
    
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Receiving: '%s", msg->data.c_str());
   } 
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<subscriberNode>());
    rclcpp::shutdown();
    return 0;
}