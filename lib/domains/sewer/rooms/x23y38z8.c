inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 8 }));
  set_short( "Passage - x23y38z8" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z8.c",
  "east" : DIR+"/rooms/x24y38z8.c",
  "south" : DIR+"/rooms/x23y37z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
