inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 7 }));
  set_short( "Hallway - x25y48z7" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y48z7.c",
  "north" : DIR+"/rooms/x25y49z7.c",
  "south" : DIR+"/rooms/x25y47z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
