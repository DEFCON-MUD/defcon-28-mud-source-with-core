inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 49, 7 }));
  set_short( "Hallway - x29y49z7" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y50z7.c",
  "south" : DIR+"/rooms/x29y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
