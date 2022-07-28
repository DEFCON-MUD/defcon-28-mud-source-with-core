inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 32, 2 }));
  set_short( "Passage - x50y32z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y32z2.c",
  "east" : DIR+"/rooms/x51y32z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
