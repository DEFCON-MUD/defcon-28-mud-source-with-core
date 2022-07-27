inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 2 }));
  set_short( "Corridor - x15y6z2" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y6z2.c",
  "south" : DIR+"/rooms/x15y5z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
