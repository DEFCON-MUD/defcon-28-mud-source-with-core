inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 41, 0 }));
  set_short( "Hallway - x7y41z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y42z0.c",
  "south" : DIR+"/rooms/x7y40z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
