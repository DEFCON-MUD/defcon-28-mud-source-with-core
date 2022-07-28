inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 3 }));
  set_short( "Passage - x23y36z3" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y36z3.c",
  "north" : DIR+"/rooms/x23y37z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
