from junitparser import JUnitXml
import sys

xml = JUnitXml.fromfile(sys.argv[1])
print(f"Total tests: {xml.tests}\nFailures:{xml.failures}")
exit(xml.failures)
