inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 8 }));
  set_short( "Corridor - x33y54z8" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y54z8.c",
  "north" : DIR+"/rooms/x33y55z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
