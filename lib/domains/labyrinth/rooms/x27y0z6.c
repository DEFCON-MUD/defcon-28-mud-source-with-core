inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 6 }));
  set_short( "Corridor - x27y0z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z6.c",
  "east" : DIR+"/rooms/x28y0z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
