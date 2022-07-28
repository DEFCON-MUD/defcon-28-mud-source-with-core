inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 64, 7 }));
  set_short( "Passage - x38y64z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y64z7.c",
  "east" : DIR+"/rooms/x39y64z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
