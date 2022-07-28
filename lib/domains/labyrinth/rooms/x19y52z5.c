inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 5 }));
  set_short( "Corridor - x19y52z5" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y52z5.c",
  "east" : DIR+"/rooms/x20y52z5.c",
  "north" : DIR+"/rooms/x19y53z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
