inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 4 }));
  set_short( "Corridor - x9y32z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y33z4.c",
  "south" : DIR+"/rooms/x9y31z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
