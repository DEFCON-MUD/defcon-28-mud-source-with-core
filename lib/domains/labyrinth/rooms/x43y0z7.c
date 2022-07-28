inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 7 }));
  set_short( "Corridor - x43y0z7" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z7.c",
  "east" : DIR+"/rooms/x44y0z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
