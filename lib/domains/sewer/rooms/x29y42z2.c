inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 2 }));
  set_short( "Hallway - x29y42z2" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y42z2.c",
  "north" : DIR+"/rooms/x29y43z2.c",
  "south" : DIR+"/rooms/x29y41z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
