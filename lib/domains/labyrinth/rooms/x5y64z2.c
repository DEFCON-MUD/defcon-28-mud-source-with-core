inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 2 }));
  set_short( "Hallway - x5y64z2" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z2.c",
  "east" : DIR+"/rooms/x6y64z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
