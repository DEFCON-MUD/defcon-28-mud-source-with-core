inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 7 }));
  set_short( "Hallway - x44y0z7" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z7.c",
  "east" : DIR+"/rooms/x45y0z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
