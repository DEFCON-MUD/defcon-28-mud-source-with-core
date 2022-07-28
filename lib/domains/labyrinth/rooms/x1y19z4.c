inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 19, 4 }));
  set_short( "Passage - x1y19z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y20z4.c",
  "south" : DIR+"/rooms/x1y18z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
