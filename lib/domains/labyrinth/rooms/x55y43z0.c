inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 43, 0 }));
  set_short( "Hallway - x55y43z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y44z0.c",
  "south" : DIR+"/rooms/x55y42z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
