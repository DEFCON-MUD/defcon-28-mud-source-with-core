inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 5 }));
  set_short( "Hallway - x21y43z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z5.c",
  "south" : DIR+"/rooms/x21y42z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
