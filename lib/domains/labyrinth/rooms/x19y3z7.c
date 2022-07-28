inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 3, 7 }));
  set_short( "Passage - x19y3z7" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y4z7.c",
  "south" : DIR+"/rooms/x19y2z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
