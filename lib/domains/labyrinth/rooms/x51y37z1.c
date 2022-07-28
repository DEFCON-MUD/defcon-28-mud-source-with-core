inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 1 }));
  set_short( "Corridor - x51y37z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z1.c",
  "south" : DIR+"/rooms/x51y36z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
