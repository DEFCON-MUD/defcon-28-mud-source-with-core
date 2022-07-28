inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 9 }));
  set_short( "Hallway - x25y42z9" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z9.c",
  "north" : DIR+"/rooms/x25y43z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
