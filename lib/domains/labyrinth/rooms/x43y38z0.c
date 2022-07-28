inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 0 }));
  set_short( "Corridor - x43y38z0" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y39z0.c",
  "south" : DIR+"/rooms/x43y37z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
