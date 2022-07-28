inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 6 }));
  set_short( "Passage - x43y42z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y43z6.c",
  "south" : DIR+"/rooms/x43y41z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
