inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 50, 9 }));
  set_short( "Hallway - x9y50z9" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y50z9.c",
  "north" : DIR+"/rooms/x9y51z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
