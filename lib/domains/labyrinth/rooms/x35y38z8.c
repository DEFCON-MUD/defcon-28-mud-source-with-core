inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 8 }));
  set_short( "Passage - x35y38z8" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z8.c",
  "south" : DIR+"/rooms/x35y37z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
