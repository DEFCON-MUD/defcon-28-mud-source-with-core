inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 7 }));
  set_short( "Hallway - x53y12z7" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y12z7.c",
  "south" : DIR+"/rooms/x53y11z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
