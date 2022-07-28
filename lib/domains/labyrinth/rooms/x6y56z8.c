inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 56, 8 }));
  set_short( "Passage - x6y56z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y56z8.c",
  "east" : DIR+"/rooms/x7y56z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
