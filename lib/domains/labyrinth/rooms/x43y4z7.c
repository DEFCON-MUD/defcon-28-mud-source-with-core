inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 7 }));
  set_short( "Corridor - x43y4z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y5z7.c",
  "south" : DIR+"/rooms/x43y3z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
