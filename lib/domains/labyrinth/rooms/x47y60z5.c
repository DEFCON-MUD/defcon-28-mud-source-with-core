inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 5 }));
  set_short( "Corridor - x47y60z5" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z5.c",
  "east" : DIR+"/rooms/x48y60z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
