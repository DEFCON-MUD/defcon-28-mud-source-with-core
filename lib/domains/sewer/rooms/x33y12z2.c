inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 2 }));
  set_short( "Passage - x33y12z2" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y12z2.c",
  "east" : DIR+"/rooms/x34y12z2.c",
  "north" : DIR+"/rooms/x33y13z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
