inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 6 }));
  set_short( "Hallway - x9y24z6" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y24z6.c",
  "south" : DIR+"/rooms/x9y23z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
