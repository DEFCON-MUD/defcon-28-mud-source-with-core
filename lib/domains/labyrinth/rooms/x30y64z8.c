inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 8 }));
  set_short( "Corridor - x30y64z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z8.c",
  "east" : DIR+"/rooms/x31y64z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
