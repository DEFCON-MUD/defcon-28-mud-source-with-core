inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 33, 0 }));
  set_short( "Corridor - x55y33z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y34z0.c",
  "south" : DIR+"/rooms/x55y32z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
