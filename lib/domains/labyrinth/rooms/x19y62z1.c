inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 1 }));
  set_short( "Hallway - x19y62z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y62z1.c",
  "south" : DIR+"/rooms/x19y61z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
