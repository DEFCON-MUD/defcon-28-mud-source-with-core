inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 2 }));
  set_short( "Hallway - x19y28z2" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y28z2.c",
  "south" : DIR+"/rooms/x19y27z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
