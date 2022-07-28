inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 5 }));
  set_short( "Corridor - x36y0z5" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z5.c",
  "east" : DIR+"/rooms/x37y0z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
