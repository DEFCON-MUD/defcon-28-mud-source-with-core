inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 3 }));
  set_short( "Corridor - x37y64z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z3.c",
  "east" : DIR+"/rooms/x38y64z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
