inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 4, 4 }));
  set_short( "Passage - x46y4z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y4z4.c",
  "east" : DIR+"/rooms/x47y4z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
