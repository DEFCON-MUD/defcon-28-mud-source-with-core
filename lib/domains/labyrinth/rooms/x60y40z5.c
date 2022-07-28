inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 40, 5 }));
  set_short( "Corridor - x60y40z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y40z5.c",
  "east" : DIR+"/rooms/x61y40z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
