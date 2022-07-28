inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 1 }));
  set_short( "Passage - x37y64z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z1.c",
  "east" : DIR+"/rooms/x38y64z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
