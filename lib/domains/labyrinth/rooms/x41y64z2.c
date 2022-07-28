inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 2 }));
  set_short( "Passage - x41y64z2" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z2.c",
  "east" : DIR+"/rooms/x42y64z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
