inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 1 }));
  set_short( "Corridor - x17y32z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y32z1.c",
  "south" : DIR+"/rooms/x17y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
