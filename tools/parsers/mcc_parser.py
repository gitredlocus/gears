import re
import sys
import json

def convert(src_file, json_file):
    num = re.compile('[0-9]')
    fp = open(src_file, 'r')

    top_mcc = 0
    for line in fp.readlines():
        if num.match(line):
            top_mcc = line.split('\t')[0]
            break

    d = {'Top MCC': top_mcc}

    json.dump(d, open(json_file, 'w'))


if __name__ == "__main__":
    convert(sys.argv[1], sys.argv[2])
