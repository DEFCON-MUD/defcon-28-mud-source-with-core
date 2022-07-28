inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 40, 7 }));
  set_short( "Hallway - x24y40z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y40z7.c",
  "east" : DIR+"/rooms/x25y40z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
