inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 2 }));
  set_short( "Passage - x15y52z2" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y52z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
