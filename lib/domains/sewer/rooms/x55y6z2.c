inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 2 }));
  set_short( "Corridor - x55y6z2" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z2.c",
  "north" : DIR+"/rooms/x55y7z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
