inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 7 }));
  set_short( "Corridor - x21y52z7" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y52z7.c",
  "south" : DIR+"/rooms/x21y51z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
