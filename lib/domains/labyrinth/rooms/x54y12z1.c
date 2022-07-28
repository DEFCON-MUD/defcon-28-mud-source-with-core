inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 12, 1 }));
  set_short( "Passage - x54y12z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y12z1.c",
  "east" : DIR+"/rooms/x55y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
