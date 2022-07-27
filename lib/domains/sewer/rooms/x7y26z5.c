inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 5 }));
  set_short( "Corridor - x7y26z5" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y25z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
