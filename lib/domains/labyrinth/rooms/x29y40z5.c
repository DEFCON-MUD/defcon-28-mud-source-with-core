inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 5 }));
  set_short( "Passage - x29y40z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z5.c",
  "east" : DIR+"/rooms/x30y40z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
