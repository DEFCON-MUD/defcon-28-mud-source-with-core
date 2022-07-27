inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 6 }));
  set_short( "Hallway - x33y10z6" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y10z6.c",
  "south" : DIR+"/rooms/x33y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
