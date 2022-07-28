inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 8 }));
  set_short( "Hallway - x61y38z8" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y39z8.c",
  "south" : DIR+"/rooms/x61y37z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
