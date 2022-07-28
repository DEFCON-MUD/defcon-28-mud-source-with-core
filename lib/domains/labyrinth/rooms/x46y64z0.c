inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 0 }));
  set_short( "Passage - x46y64z0" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z0.c",
  "east" : DIR+"/rooms/x47y64z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
