inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 54, 7 }));
  set_short( "Corridor - x42y54z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y54z7.c",
  "east" : DIR+"/rooms/x43y54z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
