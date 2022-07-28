inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 62, 3 }));
  set_short( "Passage - x46y62z3" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y62z3.c",
  "east" : DIR+"/rooms/x47y62z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
