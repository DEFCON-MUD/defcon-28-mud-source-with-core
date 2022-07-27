inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 2 }));
  set_short( "Passage - x9y47z2" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z2.c",
  "south" : DIR+"/rooms/x9y46z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
