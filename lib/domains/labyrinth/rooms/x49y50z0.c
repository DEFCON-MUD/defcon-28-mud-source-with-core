inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 0 }));
  set_short( "Passage - x49y50z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z0.c",
  "south" : DIR+"/rooms/x49y49z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
