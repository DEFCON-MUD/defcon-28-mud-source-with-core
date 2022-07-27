inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 1 }));
  set_short( "Hallway - x17y46z1" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y47z1.c",
  "south" : DIR+"/rooms/x17y45z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
