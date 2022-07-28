inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 4 }));
  set_short( "Corridor - x27y8z4" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y8z4.c",
  "north" : DIR+"/rooms/x27y9z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
