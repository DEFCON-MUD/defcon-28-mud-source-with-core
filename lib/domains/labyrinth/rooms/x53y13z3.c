inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 13, 3 }));
  set_short( "Corridor - x53y13z3" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y14z3.c",
  "south" : DIR+"/rooms/x53y12z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
