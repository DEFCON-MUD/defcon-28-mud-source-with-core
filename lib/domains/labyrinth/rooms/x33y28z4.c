inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 28, 4 }));
  set_short( "Corridor - x33y28z4" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y28z4.c",
  "south" : DIR+"/rooms/x33y27z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
