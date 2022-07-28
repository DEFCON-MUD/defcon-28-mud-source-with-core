inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 4 }));
  set_short( "Hallway - x10y0z4" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z4.c",
  "east" : DIR+"/rooms/x11y0z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
