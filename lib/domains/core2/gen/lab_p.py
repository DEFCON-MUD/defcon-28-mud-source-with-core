import argparse
import random

syspath = "/home/git/gurba/lib/domains/sewer/rooms/"
domain = "../domain.h"

floors = ['stone', 'jade', 'marble', 'obsidian', 'limestone', 'quartz', 'basalt']
walls = ['slime', 'blood', 'oil', 'mud', 'dust', 'liquid']
colors = ['red', 'green', 'purple', 'blue', 'orange', 'iridium']
mobs = ["average_eel_6"]

l_desc_option_list_1a = ['broad', 'narrow', 'wide', 'cramped']
l_desc_option_list_1b = ['corridor', 'hallway', 'tunnel']
l_desc_option_list_1c = ['red', 'green', 'purple', 'blue', 'orange', 'iridium']
l_desc_option_list_1d = ['gunk', 'sludge', 'muck', 'crud', 'crap', 'radioactive waste', 'crappy sales material', 'random junk evilmog thought up', 'glorzo', 'pile of put kevin back stickers', 'pile of GPU\s' that burned so bright they went radioactive']
l_desc_option_list_1e = ['area', 'hellhole', 'stink-pit', 'sty', 'dump', 'joint']
l_desc_option_list_1f = [1, 2, 3, 4, 5, 6, 7, 8]
l_option_1f = random.choice(l_desc_option_list_1f)
if l_option_1f == 1:
    l_desc_option_f = 'The air is rather stagnant'
if l_option_1f == 2:
    l_desc_option_f = 'Musty air that doesn\'t seem to have been ventilated for a while brushes up against you as you move around here'
if l_option_1f == 3:
    l_desc_option_f = 'To add to that, the smell here isn\'t exactly perfumy either'
if l_option_1f == 4:
    l_desc_option_f = 'It smells like a hacker convention in here'
if l_option_1f == 5:
    l_desc_option_f = 'The smell is outright dreadful'
if l_option_1f == 6:
    l_desc_option_f = 'It smells like a combination of diesel fuel, dirt and decay'
if l_option_1f == 7:
    l_desc_option_f = 'The air smells like it hasn\'t been cycled in a while, you are getting dizzy'
if l_option_1f == 8:
    l_desc_option_f = 'The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON'


ldesc = "This is a " + random.choice(l_desc_option_list_1a) + " " + random.choice(
    l_desc_option_list_1b) + ", illuminated only by the " + random.choice(
    l_desc_option_list_1c) + " glow of the " + random.choice(l_desc_option_list_1d) + " in this " + random.choice(
    l_desc_option_list_1e) + ". The walls and floors are covered with " + random.choice(
    walls) + ". " + l_desc_option_f + ".%^RESET%^"

parser = argparse.ArgumentParser()
parser.add_argument('--name', help='room name', required=True)
parser.add_argument('--area', help='area', required=True)
parser.add_argument('--north', help='path to north exit', required=False)
parser.add_argument('--south', help='path to south exit', required=False)
parser.add_argument('--east', help='path to east exit', required=False)
parser.add_argument('--west', help='path to west exit', required=False)
parser.add_argument('--northeast', help='path to northeast exit', required=False)
parser.add_argument('--northwest', help='path to northwest exit', required=False)
parser.add_argument('--southeast', help='path to southeast exit', required=False)
parser.add_argument('--southwest', help='path to southwest exit', required=False)
parser.add_argument('--up', help='path to up exit', required=False)
parser.add_argument('--down', help='path to down exit', required=False)
parser.add_argument('--x', help='x coords', required=True)
parser.add_argument('--y', help='y coords', required=True)
parser.add_argument('--z', help='z coords', required=True)

args = parser.parse_args()

s_desc_option = [1, 2, 3]
s_desc_choice = random.choice(s_desc_option)
if s_desc_choice == 1:
    s_desc = 'Corridor - ' + args.name
if s_desc_choice == 2:
    s_desc = 'Hallway - ' + args.name
if s_desc_choice == 3:
    s_desc = 'Passage - ' + args.name

roomfile = open(syspath + args.name + ".c", "w")
print syspath + args.name + ".c"
coords = [args.x, args.y, args.z]

roomfile.write('inherit "/std/room";\n\n')
roomfile.write('#include "' + domain + '"\n\n')

roomfile.write('void setup( void ) {\n')
roomfile.write('  add_area( "' + args.area + '" );\n')
roomfile.write('  set_coords(({ ' + coords[0] + ', ' + coords[1] + ', ' + coords[2] + ' }));\n')
roomfile.write('  set_short( "' + s_desc + '" );\n')

# exits code here
exits = []
exit_list = []

if args.west is not None:
    print int(coords[0]) - 1
    exits.append(["west", "x" + str(int(coords[0]) - 1) + "y" + coords[1] + "z" + coords[2]])
    exit_list.append(["west"])
if args.east is not None:
    exits.append(["east", "x" + str(int(coords[0]) + 1) + "y" + coords[1] + "z" + coords[2]])
    exit_list.append(["east"])
if args.north is not None:
    exits.append(["north", "x" + coords[0] + "y" + str(int(coords[1]) + 1) + "z" + coords[2]])
    exit_list.append(["north"])
if args.south is not None:
    exits.append(["north", "x" + coords[0] + "y" + str(int(coords[1]) - 1) + "z" + coords[2]])
    exit_list.append(["west"])
if args.northeast is not None:
    exits.append(["northeast", "x" + str(int(coords[0]) + 1) + "y" + str(int(coords[1]) + 1) + "z" + coords[2]])
    exit_list.append(["northeast"])
if args.northwest is not None:
    exits.append(["northwest", "x" + str(int(coords[0]) - 1) + "y" + str(int(coords[1]) + 1) + "z" + coords[2]])
    exit_list.append(["northwest"])
if args.southeast is not None:
    exits.append(["southeast", "x" + str(int(coords[0]) + 1) + "y" + str(int(coords[1]) - 1) + "z" + coords[2]])
    exit_list.append(["southeast"])
if args.southwest is not None:
    exits.append(["southwest", "x" + str(int(coords[0]) - 1) + "y" + str(int(coords[1]) - 1) + "z" + coords[2]])
    exit_list.append(["southwest"])
if args.up is not None:
    exits.append(["up", "x" + coords[0] + "y" + coords[1] + "z" + str(int(coords[2]) + 1)])
    exit_list.append(["up"])
if args.down is not None:
    exits.append(["up", "x" + coords[0] + "y" + coords[1] + "z" + str(int(coords[2]) - 1)])
    exit_list.append(["down"])

roomfile.write('set_objects( DIR+"/monsters/' + random.choice(mobs) + '.c");\n')

if exits:
    roomfile.write(' set_exits( ([\n')
    exitcount = len(exits)
    exitnum = 0
    for roomexit in exits:
        exitnum += 1
        if exitcount == exitnum:
          roomfile.write('  "' + roomexit[0] + '" : ' + 'DIR+"/rooms/' + roomexit[1] + '.c"\n')
        else:
          roomfile.write('  "' + roomexit[0] + '" : ' + 'DIR+"/rooms/' + roomexit[1] + '.c",\n')

roomfile.write('  ]) );\n')

if args.lcolor is None:
    roomfile.write('  set_long( "' + ldesc)
else:
    roomfile.write('  set_long( "%^' + args.lcolor + '%^' + ldesc)

dexit_array = ['The sewer continues to the', 'Tunnels can be found to the', 'The horror continues to the',
               'You may be able to find escape to the']

if exit_list:
    roomfile.write('\\n\\n' + random.choice(dexit_array) + " ")
    exitcountl = len(exit_list)
    exitl_num = 0
    for exit_l in exit_list:
        exitl_num += 1
        if exitl_num == exitcountl:
            if exitcountl == 1:
                roomfile.write(exit_l[0] + ".%^RESET%^\");\n")
            else:
                roomfile.write("and " + exit_l[0] + ".%^RESET%^\");\n")
        else:
            roomfile.write(exit_l[0] + ", ")

print exit_list

# end code here
roomfile.write('}\n')

roomfile.close
