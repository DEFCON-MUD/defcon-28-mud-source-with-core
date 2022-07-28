inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 5 }));
  set_short( "Corridor - x53y64z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z5.c",
  "east" : DIR+"/rooms/x54y64z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
