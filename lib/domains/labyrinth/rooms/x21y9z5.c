inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 9, 5 }));
  set_short( "Hallway - x21y9z5" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y10z5.c",
  "south" : DIR+"/rooms/x21y8z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
