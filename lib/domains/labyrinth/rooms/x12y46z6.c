inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 46, 6 }));
  set_short( "Hallway - x12y46z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y46z6.c",
  "east" : DIR+"/rooms/x13y46z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
