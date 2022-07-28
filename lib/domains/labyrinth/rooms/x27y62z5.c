inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 62, 5 }));
  set_short( "Passage - x27y62z5" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y62z5.c",
  "south" : DIR+"/rooms/x27y61z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
