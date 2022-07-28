inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 1 }));
  set_short( "Corridor - x33y22z1" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y23z1.c",
  "south" : DIR+"/rooms/x33y21z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
