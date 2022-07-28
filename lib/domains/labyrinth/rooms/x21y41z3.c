inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 41, 3 }));
  set_short( "Corridor - x21y41z3" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y42z3.c",
  "south" : DIR+"/rooms/x21y40z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
