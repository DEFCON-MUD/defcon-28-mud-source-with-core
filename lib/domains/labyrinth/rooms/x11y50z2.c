inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 50, 2 }));
  set_short( "Hallway - x11y50z2" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y51z2.c",
  "south" : DIR+"/rooms/x11y49z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
