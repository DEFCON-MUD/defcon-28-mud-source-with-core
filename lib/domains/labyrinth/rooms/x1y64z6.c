inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 6 }));
  set_short( "Corridor - x1y64z6" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y64z6.c",
  "south" : DIR+"/rooms/x1y63z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
