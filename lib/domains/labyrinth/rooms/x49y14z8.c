inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 8 }));
  set_short( "Passage - x49y14z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y14z8.c",
  "north" : DIR+"/rooms/x49y15z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
