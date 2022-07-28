inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 4 }));
  set_short( "Passage - x31y22z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y22z4.c",
  "north" : DIR+"/rooms/x31y23z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
