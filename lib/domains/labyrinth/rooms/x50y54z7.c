inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 54, 7 }));
  set_short( "Hallway - x50y54z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y54z7.c",
  "east" : DIR+"/rooms/x51y54z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
