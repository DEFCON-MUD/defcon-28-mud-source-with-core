inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 1 }));
  set_short( "Corridor - x45y40z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y40z1.c",
  "east" : DIR+"/rooms/x46y40z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
