inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 12, 9 }));
  set_short( "Corridor - x6y12z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y12z9.c",
  "east" : DIR+"/rooms/x7y12z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
