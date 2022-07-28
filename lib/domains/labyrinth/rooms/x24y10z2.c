inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 10, 2 }));
  set_short( "Corridor - x24y10z2" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y10z2.c",
  "east" : DIR+"/rooms/x25y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
