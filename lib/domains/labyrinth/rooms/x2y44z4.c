inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 44, 4 }));
  set_short( "Hallway - x2y44z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y44z4.c",
  "east" : DIR+"/rooms/x3y44z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
