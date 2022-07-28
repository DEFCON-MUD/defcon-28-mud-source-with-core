inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 5 }));
  set_short( "Passage - x37y0z5" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z5.c",
  "east" : DIR+"/rooms/x38y0z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
