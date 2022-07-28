inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 50, 8 }));
  set_short( "Corridor - x30y50z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y50z8.c",
  "east" : DIR+"/rooms/x31y50z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
