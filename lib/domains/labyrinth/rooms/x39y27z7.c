inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 27, 7 }));
  set_short( "Corridor - x39y27z7" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y28z7.c",
  "south" : DIR+"/rooms/x39y26z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
