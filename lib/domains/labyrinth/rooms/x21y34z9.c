inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 9 }));
  set_short( "Corridor - x21y34z9" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y35z9.c",
  "south" : DIR+"/rooms/x21y33z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
