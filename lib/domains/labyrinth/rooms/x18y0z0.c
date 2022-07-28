inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 0 }));
  set_short( "Hallway - x18y0z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z0.c",
  "east" : DIR+"/rooms/x19y0z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
