inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 7 }));
  set_short( "Corridor - x15y44z7" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z7.c",
  "north" : DIR+"/rooms/x15y45z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
