inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 4 }));
  set_short( "Corridor - x27y6z4" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y6z4.c",
  "south" : DIR+"/rooms/x27y5z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
