inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 7 }));
  set_short( "Passage - x23y30z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y30z7.c",
  "south" : DIR+"/rooms/x23y29z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
