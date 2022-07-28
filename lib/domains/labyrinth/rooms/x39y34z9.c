inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 9 }));
  set_short( "Corridor - x39y34z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y34z9.c",
  "east" : DIR+"/rooms/x40y34z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
