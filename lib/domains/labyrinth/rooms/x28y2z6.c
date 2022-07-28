inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 6 }));
  set_short( "Passage - x28y2z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z6.c",
  "east" : DIR+"/rooms/x29y2z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
