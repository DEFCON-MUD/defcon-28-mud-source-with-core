inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 14, 1 }));
  set_short( "Hallway - x30y14z1" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y14z1.c",
  "east" : DIR+"/rooms/x31y14z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
