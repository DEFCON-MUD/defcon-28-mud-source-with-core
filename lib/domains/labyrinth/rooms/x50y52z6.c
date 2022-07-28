inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 52, 6 }));
  set_short( "Hallway - x50y52z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y52z6.c",
  "east" : DIR+"/rooms/x51y52z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
