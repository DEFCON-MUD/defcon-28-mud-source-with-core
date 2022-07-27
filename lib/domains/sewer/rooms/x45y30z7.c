inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 7 }));
  set_short( "Corridor - x45y30z7" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y31z7.c",
  "south" : DIR+"/rooms/x45y29z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
