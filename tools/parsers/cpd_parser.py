import sys
import json
import xml.etree.ElementTree as ET

def convert(xml_file, json_file):
    tree = ET.parse(xml_file)
    root = tree.getroot()

    count = 0
    for child in root:
        if child.tag == 'duplication':
            count += 1

    d = {'duplications': count}

    json.dump(d, open(json_file, 'w'))

if __name__ == "__main__":
    convert(sys.argv[1], sys.argv[2])
