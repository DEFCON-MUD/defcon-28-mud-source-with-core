inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 5 }));
  set_short( "Corridor - x35y18z5" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y18z5.c",
  "north" : DIR+"/rooms/x35y19z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
