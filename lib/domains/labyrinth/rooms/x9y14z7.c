inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 14, 7 }));
  set_short( "Hallway - x9y14z7" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y14z7.c",
  "east" : DIR+"/rooms/x10y14z7.c",
  "north" : DIR+"/rooms/x9y15z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
