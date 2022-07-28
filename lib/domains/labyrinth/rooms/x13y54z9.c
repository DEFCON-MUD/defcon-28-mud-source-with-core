inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 9 }));
  set_short( "Hallway - x13y54z9" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y54z9.c",
  "east" : DIR+"/rooms/x14y54z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
