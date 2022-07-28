inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 3 }));
  set_short( "Hallway - x31y48z3" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y49z3.c",
  "south" : DIR+"/rooms/x31y47z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
