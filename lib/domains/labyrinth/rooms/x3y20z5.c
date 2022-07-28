inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 5 }));
  set_short( "Corridor - x3y20z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y20z5.c",
  "south" : DIR+"/rooms/x3y19z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
