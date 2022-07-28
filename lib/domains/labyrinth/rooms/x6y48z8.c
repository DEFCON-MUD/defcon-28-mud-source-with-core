inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 48, 8 }));
  set_short( "Hallway - x6y48z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y48z8.c",
  "east" : DIR+"/rooms/x7y48z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
