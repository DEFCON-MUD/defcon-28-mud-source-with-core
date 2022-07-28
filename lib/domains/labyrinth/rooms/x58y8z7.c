inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 8, 7 }));
  set_short( "Hallway - x58y8z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y8z7.c",
  "east" : DIR+"/rooms/x59y8z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
