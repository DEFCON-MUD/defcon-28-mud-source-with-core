inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 2 }));
  set_short( "Passage - x19y48z2" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "south" : DIR+"/rooms/x19y47z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
