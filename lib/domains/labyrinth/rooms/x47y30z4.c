inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 30, 4 }));
  set_short( "Corridor - x47y30z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y30z4.c",
  "south" : DIR+"/rooms/x47y29z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
