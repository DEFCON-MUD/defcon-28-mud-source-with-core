inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 6 }));
  set_short( "Corridor - x7y24z6" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y24z6.c",
  "north" : DIR+"/rooms/x7y25z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
