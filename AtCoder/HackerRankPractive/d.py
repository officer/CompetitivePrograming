
import csv

import sys

def main():
    reader = csv.DictReader(sys.stdin)
    results = [row for row in reader]
    num_result = reader.line_num - 1

    totals = {}
    averages = {}
    
    for result in results:
        for category, point in result.items():
            if category not in totals:
                totals[category] = int(point)
            else:
                totals[category] += int(point)
    else:
        for category, total in totals.items():
            averages[category] = round( totals[category] / num_result)

    writer = csv.DictWriter(sys.stdout, fieldnames=reader.fieldnames)
    writer.writeheader()
    writer.writerow(averages)



if __name__ == "__main__":
    main()