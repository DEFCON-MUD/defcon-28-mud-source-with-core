inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 55, 3 }));
  set_short( "Passage - x53y55z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y56z3.c",
  "south" : DIR+"/rooms/x53y54z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
