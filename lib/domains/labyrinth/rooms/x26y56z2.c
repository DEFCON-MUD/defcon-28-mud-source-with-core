inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 2 }));
  set_short( "Corridor - x26y56z2" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z2.c",
  "east" : DIR+"/rooms/x27y56z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
