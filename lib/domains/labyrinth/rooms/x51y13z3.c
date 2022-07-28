inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 13, 3 }));
  set_short( "Hallway - x51y13z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y14z3.c",
  "south" : DIR+"/rooms/x51y12z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
