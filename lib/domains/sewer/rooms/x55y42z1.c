inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 1 }));
  set_short( "Corridor - x55y42z1" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y43z1.c",
  "south" : DIR+"/rooms/x55y41z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
