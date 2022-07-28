inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 7 }));
  set_short( "Hallway - x35y46z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y46z7.c",
  "east" : DIR+"/rooms/x36y46z7.c",
  "north" : DIR+"/rooms/x35y47z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
