inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 2 }));
  set_short( "Passage - x49y62z2" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y62z2.c",
  "south" : DIR+"/rooms/x49y61z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
