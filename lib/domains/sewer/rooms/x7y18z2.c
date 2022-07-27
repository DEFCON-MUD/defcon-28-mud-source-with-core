inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 2 }));
  set_short( "Hallway - x7y18z2" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y18z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
