inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 34, 6 }));
  set_short( "Corridor - x45y34z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y34z6.c",
  "north" : DIR+"/rooms/x45y35z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
