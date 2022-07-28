inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 33, 4 }));
  set_short( "Hallway - x21y33z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y34z4.c",
  "south" : DIR+"/rooms/x21y32z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
