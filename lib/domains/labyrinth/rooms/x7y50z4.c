inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 4 }));
  set_short( "Corridor - x7y50z4" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y50z4.c",
  "north" : DIR+"/rooms/x7y51z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
