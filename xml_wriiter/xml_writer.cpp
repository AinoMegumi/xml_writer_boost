#include"xml_writer.h"

void xml_writer::write_text_in_node(boost::property_tree::ptree& p, std::string tag, std::string data) {
	p.put(tag, data);
}

void xml_writer::write_int_in_node(boost::property_tree::ptree& p, std::string tag, int data) {
	p.put(tag, std::to_string(data));
}

void xml_writer::xml_write_string_data(const std::string child, const std::string data, int idata) {
	boost::property_tree::ptree pt;
	auto& rt = pt.put(this->root, "");
	auto& children = rt.add(child, "");
	this->write_text_in_node(children, "test1", data);
	this->write_int_in_node(children, "test2", idata);
	boost::property_tree::write_xml(this->filepath, pt, std::locale(), boost::property_tree::xml_writer_make_settings<std::string>(' ', 2));
}