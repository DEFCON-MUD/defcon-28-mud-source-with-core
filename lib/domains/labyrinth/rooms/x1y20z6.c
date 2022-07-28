inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 6 }));
  set_short( "Corridor - x1y20z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y21z6.c",
  "south" : DIR+"/rooms/x1y19z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
