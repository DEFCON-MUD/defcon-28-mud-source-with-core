inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 6 }));
  set_short( "Corridor - x43y44z6" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y44z6.c",
  "south" : DIR+"/rooms/x43y43z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
