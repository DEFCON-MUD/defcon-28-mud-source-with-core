inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 25, 7 }));
  set_short( "Passage - x59y25z7" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y26z7.c",
  "south" : DIR+"/rooms/x59y24z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
