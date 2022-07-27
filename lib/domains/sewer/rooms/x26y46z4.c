inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 46, 4 }));
  set_short( "Hallway - x26y46z4" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y46z4.c",
  "east" : DIR+"/rooms/x27y46z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
