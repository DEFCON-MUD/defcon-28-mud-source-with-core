inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 2 }));
  set_short( "Hallway - x33y4z2" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z2.c",
  "east" : DIR+"/rooms/x34y4z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
