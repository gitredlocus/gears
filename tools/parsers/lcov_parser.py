import sys
import json
from HTMLParser import HTMLParser

class MyHTMLParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.lines_flag = False
        self.lines_next = 0
        self.lines_pct = 0

    def handle_data(self, data):
        if self.lines_flag == True:
            self.lines_next += 1
            if self.lines_next == 6:
                self.lines_pct = data
                self.lines_flag = False

        if data == 'Lines:':
            self.lines_flag = True

    def get_lines_pct(self):
        return self.lines_pct


def convert(html_file, json_file):
    p = MyHTMLParser()
    p.feed(open(html_file, 'r').read())

    pct = p.get_lines_pct()
    d = {'Lines': pct}

    json.dump(d, open(json_file, 'w'))


if __name__ == "__main__":
    convert(sys.argv[1], sys.argv[2])
