inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 5, 5 }));
  set_short( "Corridor - x17y5z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y6z5.c",
  "south" : DIR+"/rooms/x17y4z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
