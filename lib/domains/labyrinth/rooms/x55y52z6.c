inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 6 }));
  set_short( "Passage - x55y52z6" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y52z6.c",
  "south" : DIR+"/rooms/x55y51z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
