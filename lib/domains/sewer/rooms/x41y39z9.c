inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 39, 9 }));
  set_short( "Corridor - x41y39z9" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y40z9.c",
  "south" : DIR+"/rooms/x41y38z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
