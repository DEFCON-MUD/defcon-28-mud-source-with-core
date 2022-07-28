inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 19, 8 }));
  set_short( "Hallway - x55y19z8" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y20z8.c",
  "south" : DIR+"/rooms/x55y18z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
