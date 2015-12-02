#include<iostream>
#include"xml_writer.h"

int main() {
	xml_writer xml = xml_writer("test.xml", "root");
	xml.xml_write_string_data("child", "‚ ‚¢‚¤‚¦‚¨", 4);
	return 0;
}