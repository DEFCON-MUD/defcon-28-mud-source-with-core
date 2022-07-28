inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 4 }));
  set_short( "Hallway - x7y14z4" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y14z4.c",
  "north" : DIR+"/rooms/x7y15z4.c",
  "south" : DIR+"/rooms/x7y13z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
