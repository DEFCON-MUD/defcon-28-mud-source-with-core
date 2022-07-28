inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 7 }));
  set_short( "Passage - x25y38z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y38z7.c",
  "east" : DIR+"/rooms/x26y38z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
