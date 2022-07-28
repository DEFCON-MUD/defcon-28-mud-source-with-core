inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 5 }));
  set_short( "Passage - x1y14z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z5.c",
  "south" : DIR+"/rooms/x1y13z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
