inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 2 }));
  set_short( "Passage - x29y60z2" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z2.c",
  "north" : DIR+"/rooms/x29y61z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
