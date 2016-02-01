#include<iostream>
#include"xml_writer.h"

int main() {
	xml_writer xml = xml_writer("test.xml", u8"root");
	xml.xml_write_string_data(u8"child", u8"ありきたりな世界♡", 4);
	return 0;
}