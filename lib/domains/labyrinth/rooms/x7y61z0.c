inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 61, 0 }));
  set_short( "Hallway - x7y61z0" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y62z0.c",
  "south" : DIR+"/rooms/x7y60z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
