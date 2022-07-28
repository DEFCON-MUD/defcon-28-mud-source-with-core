inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 44, 5 }));
  set_short( "Corridor - x30y44z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y44z5.c",
  "east" : DIR+"/rooms/x31y44z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
