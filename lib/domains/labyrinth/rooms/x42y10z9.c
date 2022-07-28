inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 10, 9 }));
  set_short( "Passage - x42y10z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y10z9.c",
  "east" : DIR+"/rooms/x43y10z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
