inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 6 }));
  set_short( "Hallway - x43y10z6" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y10z6.c",
  "south" : DIR+"/rooms/x43y9z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
