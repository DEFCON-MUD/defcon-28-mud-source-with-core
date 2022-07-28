inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 5, 7 }));
  set_short( "Passage - x53y5z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y6z7.c",
  "south" : DIR+"/rooms/x53y4z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
