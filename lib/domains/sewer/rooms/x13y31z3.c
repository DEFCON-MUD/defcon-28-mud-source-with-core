inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 31, 3 }));
  set_short( "Passage - x13y31z3" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y32z3.c",
  "south" : DIR+"/rooms/x13y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
