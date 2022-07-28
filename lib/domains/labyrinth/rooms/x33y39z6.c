inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 39, 6 }));
  set_short( "Passage - x33y39z6" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y40z6.c",
  "south" : DIR+"/rooms/x33y38z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
