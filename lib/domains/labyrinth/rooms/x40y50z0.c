inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 50, 0 }));
  set_short( "Hallway - x40y50z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y50z0.c",
  "east" : DIR+"/rooms/x41y50z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
