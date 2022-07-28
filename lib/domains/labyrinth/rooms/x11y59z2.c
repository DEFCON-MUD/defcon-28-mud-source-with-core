inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 2 }));
  set_short( "Passage - x11y59z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z2.c",
  "south" : DIR+"/rooms/x11y58z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
