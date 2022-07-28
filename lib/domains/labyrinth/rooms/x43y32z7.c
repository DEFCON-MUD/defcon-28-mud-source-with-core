inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 32, 7 }));
  set_short( "Corridor - x43y32z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y32z7.c",
  "south" : DIR+"/rooms/x43y31z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
