inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 9 }));
  set_short( "Corridor - x3y32z9" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y32z9.c",
  "south" : DIR+"/rooms/x3y31z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
