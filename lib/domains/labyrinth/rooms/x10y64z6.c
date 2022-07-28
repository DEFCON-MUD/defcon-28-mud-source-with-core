inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 6 }));
  set_short( "Passage - x10y64z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z6.c",
  "east" : DIR+"/rooms/x11y64z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
