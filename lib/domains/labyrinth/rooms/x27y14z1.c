inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 1 }));
  set_short( "Passage - x27y14z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y14z1.c",
  "north" : DIR+"/rooms/x27y15z1.c",
  "south" : DIR+"/rooms/x27y13z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
