inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 16, 2 }));
  set_short( "Corridor - x22y16z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y16z2.c",
  "east" : DIR+"/rooms/x23y16z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
