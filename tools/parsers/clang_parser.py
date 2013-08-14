import sys
import json
from HTMLParser import HTMLParser

class MyHTMLParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.allbugs_flag = False
        self.allbugs_num = 0

    def handle_data(self, data):
        if self.allbugs_flag == True:
            self.allbugs_num = data
            self.allbugs_flag = False

        if data == 'All Bugs':
            self.allbugs_flag = True

    def get_bugs_num(self):
        return self.allbugs_num


def convert(html_file, json_file):
    p = MyHTMLParser()
    p.feed(open(html_file, 'r').read())

    num = p.get_bugs_num()
    d = {'All Bugs': num}

    json.dump(d, open(json_file, 'w'))


if __name__ == "__main__":
    convert(sys.argv[1], sys.argv[2])
