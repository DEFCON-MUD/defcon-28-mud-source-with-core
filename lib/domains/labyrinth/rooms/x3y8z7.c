inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 7 }));
  set_short( "Passage - x3y8z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y8z7.c",
  "north" : DIR+"/rooms/x3y9z7.c",
  "south" : DIR+"/rooms/x3y7z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
