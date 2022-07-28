inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 9 }));
  set_short( "Passage - x1y32z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y32z9.c",
  "north" : DIR+"/rooms/x1y33z9.c",
  "south" : DIR+"/rooms/x1y31z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
