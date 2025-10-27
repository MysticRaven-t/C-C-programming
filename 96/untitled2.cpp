#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <iomanip>

// 定义时区差异
std::unordered_map<std::string, double> time_zones = {
    {"UTC", 0}, {"GMT", 0}, {"BST", 1}, {"IST", 1},
    {"WET", 0}, {"WEST", 1}, {"CET", 1}, {"CEST", 2},
    {"EET", 2}, {"EEST", 3}, {"MSK", 3}, {"MSD", 4},
    {"AST", -4}, {"ADT", -3}, {"NST", -3.5}, {"NDT", -2.5},
    {"EST", -5}, {"EDT", -4}, {"CST", -6}, {"CDT", -5},
    {"MST", -7}, {"MDT", -6}, {"PST", -8}, {"PDT", -7},
    {"HST", -10}, {"AKST", -9}, {"AKDT", -8}, 
    {"AEST", 10}, {"AEDT", 11}, {"ACST", 9.5}, {"ACDT", 10.5},
    {"AWST", 8}
};

// 解析时间字符串
std::tm parse_time(const std::string& time_str) {
    std::tm tm = {};
    if (time_str == "midnight") {
        tm.tm_hour = 0;
        tm.tm_min = 0;
    } else if (time_str == "noon") {
        tm.tm_hour = 12;
        tm.tm_min = 0;
    } else {
        std::istringstream ss(time_str);
        ss >> std::get_time(&tm, "%I:%M %p");
    }
    return tm;
}

// 格式化时间字符串
std::string format_time(const std::tm& tm) {
    std::ostringstream oss;
    if (tm.tm_hour == 0 && tm.tm_min == 0) {
        return "midnight";
    } else if (tm.tm_hour == 12 && tm.tm_min == 0) {
        return "noon";
    } else {
        oss << std::put_time(&tm, "%I:%M %p");
        std::string formatted_time = oss.str();
        if (formatted_time[0] == '0') {
            formatted_time.erase(0, 1); // 删除前导零
        }
        return formatted_time;
    }
}

// 处理每组测试数据
std::string convert_time(const std::string& input_time, const std::string& from_tz, const std::string& to_tz) {
    std::tm tm = parse_time(input_time);
    double from_offset = time_zones[from_tz];
    double to_offset = time_zones[to_tz];
    double time_diff = to_offset - from_offset;
    int total_minutes = static_cast<int>(time_diff * 60);

    // 调整时间
    tm.tm_min += total_minutes;
    std::mktime(&tm); // 规范化时间结构

    return format_time(tm);
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // 忽略换行符

    for (int i = 0; i < n; ++i) {
        std::string input_line;
        std::getline(std::cin, input_line);
        std::istringstream iss(input_line);
        std::string input_time, from_tz, to_tz;
        std::getline(iss, input_time, ' ');
        std::getline(iss, from_tz, ' ');
        std::getline(iss, to_tz, ' ');

        std::string result = convert_time(input_time, from_tz, to_tz);
        std::cout << result << std::endl;
    }

    return 0;
}
