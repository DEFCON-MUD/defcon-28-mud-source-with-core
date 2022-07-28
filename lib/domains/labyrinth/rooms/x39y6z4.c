inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 4 }));
  set_short( "Hallway - x39y6z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z4.c",
  "north" : DIR+"/rooms/x39y7z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
