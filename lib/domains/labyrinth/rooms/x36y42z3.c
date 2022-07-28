inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 3 }));
  set_short( "Corridor - x36y42z3" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z3.c",
  "east" : DIR+"/rooms/x37y42z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
