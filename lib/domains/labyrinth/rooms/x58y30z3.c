inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 3 }));
  set_short( "Hallway - x58y30z3" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z3.c",
  "east" : DIR+"/rooms/x59y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
