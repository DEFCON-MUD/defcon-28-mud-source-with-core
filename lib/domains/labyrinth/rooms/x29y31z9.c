inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 9 }));
  set_short( "Corridor - x29y31z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z9.c",
  "south" : DIR+"/rooms/x29y30z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
