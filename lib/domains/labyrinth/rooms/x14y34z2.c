inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 34, 2 }));
  set_short( "Hallway - x14y34z2" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y34z2.c",
  "east" : DIR+"/rooms/x15y34z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
