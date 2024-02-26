inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 9 }));
  set_short( "Corridor - x15y7z9" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z9.c",
  "south" : DIR+"/rooms/x15y6z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
