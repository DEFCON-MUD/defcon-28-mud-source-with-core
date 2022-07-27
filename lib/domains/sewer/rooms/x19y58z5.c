inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 5 }));
  set_short( "Corridor - x19y58z5" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y59z5.c",
  "south" : DIR+"/rooms/x19y57z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
