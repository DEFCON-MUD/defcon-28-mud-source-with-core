inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 55, 1 }));
  set_short( "Passage - x33y55z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y56z1.c",
  "south" : DIR+"/rooms/x33y54z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
