inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 5, 4 }));
  set_short( "Passage - x11y5z4" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y6z4.c",
  "south" : DIR+"/rooms/x11y4z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
