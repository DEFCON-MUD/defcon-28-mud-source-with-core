inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 14, 6 }));
  set_short( "Hallway - x30y14z6" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y14z6.c",
  "east" : DIR+"/rooms/x31y14z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
