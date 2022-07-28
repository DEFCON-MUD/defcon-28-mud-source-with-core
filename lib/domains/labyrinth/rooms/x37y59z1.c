inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 1 }));
  set_short( "Corridor - x37y59z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z1.c",
  "south" : DIR+"/rooms/x37y58z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
