inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 41, 1 }));
  set_short( "Corridor - x7y41z1" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y42z1.c",
  "south" : DIR+"/rooms/x7y40z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
