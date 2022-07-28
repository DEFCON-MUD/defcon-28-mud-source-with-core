inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 42, 3 }));
  set_short( "Corridor - x46y42z3" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y42z3.c",
  "east" : DIR+"/rooms/x47y42z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
