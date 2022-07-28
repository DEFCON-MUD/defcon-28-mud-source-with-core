inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 6 }));
  set_short( "Hallway - x9y59z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z6.c",
  "south" : DIR+"/rooms/x9y58z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
