inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 6 }));
  set_short( "Corridor - x11y2z6" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y2z6.c",
  "east" : DIR+"/rooms/x12y2z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
