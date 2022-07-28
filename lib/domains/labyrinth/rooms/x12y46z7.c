inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 46, 7 }));
  set_short( "Passage - x12y46z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y46z7.c",
  "east" : DIR+"/rooms/x13y46z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
