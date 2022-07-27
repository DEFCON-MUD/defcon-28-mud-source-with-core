inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 8 }));
  set_short( "Corridor - x7y19z8" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z8.c",
  "south" : DIR+"/rooms/x7y18z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
