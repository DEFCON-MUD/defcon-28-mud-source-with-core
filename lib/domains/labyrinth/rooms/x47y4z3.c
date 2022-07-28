inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 3 }));
  set_short( "Corridor - x47y4z3" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y4z3.c",
  "east" : DIR+"/rooms/x48y4z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
