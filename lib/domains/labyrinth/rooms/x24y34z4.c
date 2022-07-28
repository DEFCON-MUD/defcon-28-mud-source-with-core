inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 34, 4 }));
  set_short( "Passage - x24y34z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y34z4.c",
  "east" : DIR+"/rooms/x25y34z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
