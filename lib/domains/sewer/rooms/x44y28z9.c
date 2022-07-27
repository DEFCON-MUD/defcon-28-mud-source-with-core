inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 28, 9 }));
  set_short( "Passage - x44y28z9" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y28z9.c",
  "east" : DIR+"/rooms/x45y28z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
