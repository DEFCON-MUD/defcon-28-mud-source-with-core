inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 9 }));
  set_short( "Hallway - x1y51z9" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z9.c",
  "south" : DIR+"/rooms/x1y50z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
