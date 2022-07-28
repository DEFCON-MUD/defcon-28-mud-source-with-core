inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 4 }));
  set_short( "Corridor - x11y13z4" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z4.c",
  "south" : DIR+"/rooms/x11y12z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
