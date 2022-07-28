inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 4 }));
  set_short( "Passage - x59y18z4" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z4.c",
  "north" : DIR+"/rooms/x59y19z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
