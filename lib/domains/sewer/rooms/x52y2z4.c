inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 2, 4 }));
  set_short( "Corridor - x52y2z4" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y2z4.c",
  "east" : DIR+"/rooms/x53y2z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
