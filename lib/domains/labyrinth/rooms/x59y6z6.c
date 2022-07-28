inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 6 }));
  set_short( "Passage - x59y6z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z6.c",
  "south" : DIR+"/rooms/x59y5z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
