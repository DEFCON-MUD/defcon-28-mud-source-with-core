inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 8 }));
  set_short( "Corridor - x33y34z8" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z8.c",
  "north" : DIR+"/rooms/x33y35z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
