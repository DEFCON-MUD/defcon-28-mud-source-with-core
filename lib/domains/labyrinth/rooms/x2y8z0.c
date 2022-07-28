inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 8, 0 }));
  set_short( "Corridor - x2y8z0" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y8z0.c",
  "east" : DIR+"/rooms/x3y8z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
