inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 2, 6 }));
  set_short( "Corridor - x4y2z6" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y2z6.c",
  "east" : DIR+"/rooms/x5y2z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
