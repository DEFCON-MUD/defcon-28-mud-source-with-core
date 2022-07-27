inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 2 }));
  set_short( "Passage - x9y34z2" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y34z2.c",
  "south" : DIR+"/rooms/x9y33z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
