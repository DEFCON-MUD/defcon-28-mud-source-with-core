inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 6 }));
  set_short( "Corridor - x8y22z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z6.c",
  "east" : DIR+"/rooms/x9y22z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
