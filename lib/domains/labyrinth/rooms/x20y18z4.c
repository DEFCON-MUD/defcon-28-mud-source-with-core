inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 18, 4 }));
  set_short( "Passage - x20y18z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y18z4.c",
  "east" : DIR+"/rooms/x21y18z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
