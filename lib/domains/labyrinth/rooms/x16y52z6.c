inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 52, 6 }));
  set_short( "Corridor - x16y52z6" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y52z6.c",
  "east" : DIR+"/rooms/x17y52z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
