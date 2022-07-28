inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 34, 7 }));
  set_short( "Corridor - x8y34z7" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y34z7.c",
  "east" : DIR+"/rooms/x9y34z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
