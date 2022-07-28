inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 5 }));
  set_short( "Corridor - x17y22z5" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y23z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
