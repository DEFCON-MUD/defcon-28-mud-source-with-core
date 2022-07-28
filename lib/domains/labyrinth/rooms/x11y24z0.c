inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 0 }));
  set_short( "Hallway - x11y24z0" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y25z0.c",
  "south" : DIR+"/rooms/x11y23z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
