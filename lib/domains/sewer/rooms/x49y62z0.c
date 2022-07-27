inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 0 }));
  set_short( "Hallway - x49y62z0" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y62z0.c",
  "south" : DIR+"/rooms/x49y61z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
