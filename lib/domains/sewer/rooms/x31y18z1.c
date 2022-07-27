inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 18, 1 }));
  set_short( "Hallway - x31y18z1" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y18z1.c",
  "east" : DIR+"/rooms/x32y18z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
