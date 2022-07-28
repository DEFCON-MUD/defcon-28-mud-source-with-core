inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 0 }));
  set_short( "Corridor - x39y43z0" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z0.c",
  "south" : DIR+"/rooms/x39y42z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
