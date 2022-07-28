inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 20, 8 }));
  set_short( "Passage - x50y20z8" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y20z8.c",
  "east" : DIR+"/rooms/x51y20z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
