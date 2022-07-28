inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 57, 3 }));
  set_short( "Corridor - x11y57z3" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y58z3.c",
  "south" : DIR+"/rooms/x11y56z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
