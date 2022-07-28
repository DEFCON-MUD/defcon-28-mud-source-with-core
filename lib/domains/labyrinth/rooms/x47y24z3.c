inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 3 }));
  set_short( "Corridor - x47y24z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z3.c",
  "north" : DIR+"/rooms/x47y25z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
