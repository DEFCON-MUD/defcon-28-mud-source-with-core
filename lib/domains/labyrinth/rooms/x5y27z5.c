inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 27, 5 }));
  set_short( "Corridor - x5y27z5" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y28z5.c",
  "south" : DIR+"/rooms/x5y26z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
