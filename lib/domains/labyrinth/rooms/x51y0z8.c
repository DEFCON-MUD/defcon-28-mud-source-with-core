inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 8 }));
  set_short( "Corridor - x51y0z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z8.c",
  "east" : DIR+"/rooms/x52y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
