inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 42, 3 }));
  set_short( "Corridor - x22y42z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y42z3.c",
  "east" : DIR+"/rooms/x23y42z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
