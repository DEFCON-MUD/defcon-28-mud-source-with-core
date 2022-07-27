inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 44, 5 }));
  set_short( "Corridor - x48y44z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y44z5.c",
  "east" : DIR+"/rooms/x49y44z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
