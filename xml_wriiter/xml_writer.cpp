#include"xml_writer.h"

void xml_writer::write_text_in_node(boost::property_tree::ptree& p, std::string tag, std::string data) {
	p.put(tag, data);
}

void xml_writer::write_int_in_node(boost::property_tree::ptree& p, std::string tag, int data) {
	p.put(tag, std::to_string(data));
}

void xml_writer::xml_write_string_data(const std::string child, const std::string data, int idata) {
	boost::property_tree::ptree pt;
	auto& rt = pt.put(this->root, u8"");
	auto& children = rt.add(child, u8"");
	this->write_text_in_node(children, u8"test1", data);
	this->write_int_in_node(children, u8"test2", idata);
	write_xml(this->filepath, pt);
}