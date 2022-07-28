inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 60, 6 }));
  set_short( "Passage - x30y60z6" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y60z6.c",
  "east" : DIR+"/rooms/x31y60z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
