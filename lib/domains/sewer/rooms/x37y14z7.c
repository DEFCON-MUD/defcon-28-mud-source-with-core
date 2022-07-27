inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 7 }));
  set_short( "Corridor - x37y14z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y14z7.c",
  "north" : DIR+"/rooms/x37y15z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
