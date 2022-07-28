inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 34, 8 }));
  set_short( "Hallway - x10y34z8" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y34z8.c",
  "east" : DIR+"/rooms/x11y34z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
