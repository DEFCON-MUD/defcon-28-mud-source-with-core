inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 1 }));
  set_short( "Passage - x57y10z1" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y10z1.c",
  "south" : DIR+"/rooms/x57y9z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
