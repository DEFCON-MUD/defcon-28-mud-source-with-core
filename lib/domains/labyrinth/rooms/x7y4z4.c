inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 4 }));
  set_short( "Corridor - x7y4z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y4z4.c",
  "north" : DIR+"/rooms/x7y5z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
