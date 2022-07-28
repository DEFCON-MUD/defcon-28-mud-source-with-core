inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 9 }));
  set_short( "Corridor - x59y52z9" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z9.c",
  "south" : DIR+"/rooms/x59y51z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
