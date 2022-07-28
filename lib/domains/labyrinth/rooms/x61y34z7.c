inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 7 }));
  set_short( "Corridor - x61y34z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z7.c",
  "south" : DIR+"/rooms/x61y33z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
