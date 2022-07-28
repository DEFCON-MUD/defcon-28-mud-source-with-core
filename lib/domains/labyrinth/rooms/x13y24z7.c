inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 7 }));
  set_short( "Hallway - x13y24z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y24z7.c",
  "south" : DIR+"/rooms/x13y23z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
