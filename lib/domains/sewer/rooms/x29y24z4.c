inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 4 }));
  set_short( "Hallway - x29y24z4" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y24z4.c",
  "south" : DIR+"/rooms/x29y23z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
