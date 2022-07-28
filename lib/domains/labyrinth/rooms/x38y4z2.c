inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 4, 2 }));
  set_short( "Hallway - x38y4z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y4z2.c",
  "east" : DIR+"/rooms/x39y4z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
