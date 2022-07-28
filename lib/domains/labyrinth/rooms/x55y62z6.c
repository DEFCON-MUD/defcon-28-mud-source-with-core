inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 6 }));
  set_short( "Hallway - x55y62z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y62z6.c",
  "east" : DIR+"/rooms/x56y62z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
