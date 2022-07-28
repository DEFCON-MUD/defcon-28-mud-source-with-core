inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 8 }));
  set_short( "Hallway - x21y16z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y17z8.c",
  "south" : DIR+"/rooms/x21y15z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
