inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 35, 6 }));
  set_short( "Corridor - x43y35z6" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y36z6.c",
  "south" : DIR+"/rooms/x43y34z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
