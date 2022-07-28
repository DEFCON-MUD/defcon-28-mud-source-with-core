inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 62, 6 }));
  set_short( "Hallway - x52y62z6" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y62z6.c",
  "east" : DIR+"/rooms/x53y62z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
