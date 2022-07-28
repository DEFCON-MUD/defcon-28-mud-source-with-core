inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 3 }));
  set_short( "Passage - x37y62z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y62z3.c",
  "east" : DIR+"/rooms/x38y62z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
