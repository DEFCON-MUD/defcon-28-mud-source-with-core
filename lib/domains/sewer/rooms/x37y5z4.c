inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 5, 4 }));
  set_short( "Corridor - x37y5z4" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y6z4.c",
  "south" : DIR+"/rooms/x37y4z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
