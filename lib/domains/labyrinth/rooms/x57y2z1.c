inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 1 }));
  set_short( "Hallway - x57y2z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z1.c",
  "east" : DIR+"/rooms/x58y2z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
