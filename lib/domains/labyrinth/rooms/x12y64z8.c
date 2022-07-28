inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 8 }));
  set_short( "Hallway - x12y64z8" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z8.c",
  "east" : DIR+"/rooms/x13y64z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
