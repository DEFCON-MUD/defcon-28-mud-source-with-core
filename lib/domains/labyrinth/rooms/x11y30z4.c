inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 4 }));
  set_short( "Passage - x11y30z4" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y30z4.c",
  "east" : DIR+"/rooms/x12y30z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
