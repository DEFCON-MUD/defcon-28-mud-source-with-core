inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 5 }));
  set_short( "Passage - x37y14z5" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y14z5.c",
  "north" : DIR+"/rooms/x37y15z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
