inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 50, 3 }));
  set_short( "Passage - x12y50z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y50z3.c",
  "east" : DIR+"/rooms/x13y50z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
