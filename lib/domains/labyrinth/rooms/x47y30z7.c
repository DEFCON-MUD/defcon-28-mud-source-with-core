inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 30, 7 }));
  set_short( "Passage - x47y30z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y31z7.c",
  "south" : DIR+"/rooms/x47y29z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
