inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 7 }));
  set_short( "Passage - x1y27z7" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z7.c",
  "south" : DIR+"/rooms/x1y26z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
