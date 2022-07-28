inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 7 }));
  set_short( "Passage - x47y24z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z7.c",
  "south" : DIR+"/rooms/x47y23z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
