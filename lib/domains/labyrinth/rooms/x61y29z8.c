inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 29, 8 }));
  set_short( "Corridor - x61y29z8" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y30z8.c",
  "south" : DIR+"/rooms/x61y28z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
