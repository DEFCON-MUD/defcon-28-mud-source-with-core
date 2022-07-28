inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 4 }));
  set_short( "Hallway - x33y44z4" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y44z4.c",
  "north" : DIR+"/rooms/x33y45z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
