inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 7 }));
  set_short( "Hallway - x11y23z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z7.c",
  "south" : DIR+"/rooms/x11y22z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
