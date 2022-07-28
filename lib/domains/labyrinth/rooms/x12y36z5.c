inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 36, 5 }));
  set_short( "Hallway - x12y36z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y36z5.c",
  "east" : DIR+"/rooms/x13y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
