inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 9 }));
  set_short( "Hallway - x21y6z9" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y6z9.c",
  "south" : DIR+"/rooms/x21y5z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
