inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 9 }));
  set_short( "Corridor - x19y62z9" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y62z9.c",
  "south" : DIR+"/rooms/x19y61z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
