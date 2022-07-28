inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 8 }));
  set_short( "Corridor - x7y40z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y40z8.c",
  "south" : DIR+"/rooms/x7y39z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
