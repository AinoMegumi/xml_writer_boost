#pragma once
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/xml_parser.hpp>
#include<string>
class xml_writer {
private:
	std::string filepath;
	std::string root;
	void write_text_in_node(boost::property_tree::ptree& p, std::string tag, std::string data);
	void write_int_in_node(boost::property_tree::ptree& p, std::string tag, int data);
public:
	xml_writer(std::string filepath, std::string root) {
		this->filepath = filepath;
		this->root = root;
	}
	void xml_write_string_data(const std::string child, const std::string data, int idata);
};