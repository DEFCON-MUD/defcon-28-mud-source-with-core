inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 50, 1 }));
  set_short( "Corridor - x16y50z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y50z1.c",
  "east" : DIR+"/rooms/x17y50z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
