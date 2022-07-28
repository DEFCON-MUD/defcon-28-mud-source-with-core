inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 36, 1 }));
  set_short( "Hallway - x36y36z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y36z1.c",
  "east" : DIR+"/rooms/x37y36z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
