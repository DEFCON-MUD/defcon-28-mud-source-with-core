inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 0 }));
  set_short( "Passage - x21y15z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z0.c",
  "south" : DIR+"/rooms/x21y14z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
