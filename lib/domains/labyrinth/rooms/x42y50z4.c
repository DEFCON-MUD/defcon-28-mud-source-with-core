inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 50, 4 }));
  set_short( "Hallway - x42y50z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y50z4.c",
  "east" : DIR+"/rooms/x43y50z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
