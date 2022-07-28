inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 4 }));
  set_short( "Corridor - x59y56z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y56z4.c",
  "south" : DIR+"/rooms/x59y55z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
