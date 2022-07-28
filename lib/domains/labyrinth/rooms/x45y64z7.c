inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 64, 7 }));
  set_short( "Passage - x45y64z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y64z7.c",
  "east" : DIR+"/rooms/x46y64z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
