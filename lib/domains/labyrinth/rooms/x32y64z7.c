inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 64, 7 }));
  set_short( "Passage - x32y64z7" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y64z7.c",
  "east" : DIR+"/rooms/x33y64z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
