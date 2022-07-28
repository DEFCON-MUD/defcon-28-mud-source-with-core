inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 54, 0 }));
  set_short( "Hallway - x30y54z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y54z0.c",
  "east" : DIR+"/rooms/x31y54z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
