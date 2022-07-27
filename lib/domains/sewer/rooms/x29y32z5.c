inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 5 }));
  set_short( "Hallway - x29y32z5" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z5.c",
  "south" : DIR+"/rooms/x29y31z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
