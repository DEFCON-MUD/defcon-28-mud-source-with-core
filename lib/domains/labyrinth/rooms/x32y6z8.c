inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 6, 8 }));
  set_short( "Hallway - x32y6z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y6z8.c",
  "east" : DIR+"/rooms/x33y6z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
