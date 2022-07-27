inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 10, 9 }));
  set_short( "Hallway - x22y10z9" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y10z9.c",
  "east" : DIR+"/rooms/x23y10z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
