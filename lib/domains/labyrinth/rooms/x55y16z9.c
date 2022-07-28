inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 9 }));
  set_short( "Passage - x55y16z9" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y17z9.c",
  "south" : DIR+"/rooms/x55y15z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
