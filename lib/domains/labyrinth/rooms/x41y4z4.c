inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 4 }));
  set_short( "Passage - x41y4z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y4z4.c",
  "east" : DIR+"/rooms/x42y4z4.c",
  "north" : DIR+"/rooms/x41y5z4.c",
  "south" : DIR+"/rooms/x41y3z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
