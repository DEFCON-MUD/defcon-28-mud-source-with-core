inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 34, 4 }));
  set_short( "Hallway - x8y34z4" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y34z4.c",
  "east" : DIR+"/rooms/x9y34z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
