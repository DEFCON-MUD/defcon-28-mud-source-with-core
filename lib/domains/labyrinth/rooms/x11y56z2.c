inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 2 }));
  set_short( "Corridor - x11y56z2" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z2.c",
  "east" : DIR+"/rooms/x12y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
