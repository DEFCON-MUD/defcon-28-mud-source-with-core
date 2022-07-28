inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 7 }));
  set_short( "Corridor - x17y50z7" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y51z7.c",
  "south" : DIR+"/rooms/x17y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
