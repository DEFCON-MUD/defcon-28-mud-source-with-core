inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 24, 8 }));
  set_short( "Passage - x58y24z8" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y24z8.c",
  "east" : DIR+"/rooms/x59y24z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
