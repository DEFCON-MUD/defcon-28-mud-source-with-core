inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 42, 3 }));
  set_short( "Passage - x50y42z3" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y42z3.c",
  "east" : DIR+"/rooms/x51y42z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
