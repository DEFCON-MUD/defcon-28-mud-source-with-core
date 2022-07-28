inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 0 }));
  set_short( "Hallway - x27y35z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z0.c",
  "south" : DIR+"/rooms/x27y34z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
