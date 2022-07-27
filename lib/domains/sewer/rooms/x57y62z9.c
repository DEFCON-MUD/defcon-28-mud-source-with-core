inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 9 }));
  set_short( "Hallway - x57y62z9" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z9.c",
  "east" : DIR+"/rooms/x58y62z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
