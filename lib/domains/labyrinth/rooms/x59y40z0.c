inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 0 }));
  set_short( "Hallway - x59y40z0" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y41z0.c",
  "south" : DIR+"/rooms/x59y39z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
