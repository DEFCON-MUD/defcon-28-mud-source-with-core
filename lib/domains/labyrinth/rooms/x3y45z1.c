inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 45, 1 }));
  set_short( "Passage - x3y45z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y46z1.c",
  "south" : DIR+"/rooms/x3y44z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
