inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 4 }));
  set_short( "Corridor - x21y36z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y36z4.c",
  "north" : DIR+"/rooms/x21y37z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
