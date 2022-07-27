inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 4 }));
  set_short( "Corridor - x51y37z4" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z4.c",
  "south" : DIR+"/rooms/x51y36z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
