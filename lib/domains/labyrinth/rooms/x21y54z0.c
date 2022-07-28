inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 0 }));
  set_short( "Hallway - x21y54z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z0.c",
  "east" : DIR+"/rooms/x22y54z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
