inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 4 }));
  set_short( "Hallway - x53y24z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y25z4.c",
  "south" : DIR+"/rooms/x53y23z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
