inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 9 }));
  set_short( "Passage - x47y8z9" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y8z9.c",
  "east" : DIR+"/rooms/x48y8z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
