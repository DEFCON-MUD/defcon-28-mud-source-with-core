inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 28, 1 }));
  set_short( "Passage - x44y28z1" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y28z1.c",
  "east" : DIR+"/rooms/x45y28z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
