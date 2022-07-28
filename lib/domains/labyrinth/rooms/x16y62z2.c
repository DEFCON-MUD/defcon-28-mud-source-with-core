inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 2 }));
  set_short( "Hallway - x16y62z2" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z2.c",
  "east" : DIR+"/rooms/x17y62z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
