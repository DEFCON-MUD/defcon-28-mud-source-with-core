inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 4 }));
  set_short( "Hallway - x53y42z4" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y42z4.c",
  "south" : DIR+"/rooms/x53y41z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
