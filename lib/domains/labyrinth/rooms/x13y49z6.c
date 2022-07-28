inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 49, 6 }));
  set_short( "Hallway - x13y49z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y50z6.c",
  "south" : DIR+"/rooms/x13y48z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
