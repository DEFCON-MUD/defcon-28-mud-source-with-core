inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 5 }));
  set_short( "Passage - x41y40z5" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z5.c",
  "north" : DIR+"/rooms/x41y41z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
