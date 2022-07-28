inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 49, 5 }));
  set_short( "Hallway - x3y49z5" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y50z5.c",
  "south" : DIR+"/rooms/x3y48z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
