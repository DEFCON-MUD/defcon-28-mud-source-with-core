inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 6 }));
  set_short( "Corridor - x13y36z6" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y36z6.c",
  "north" : DIR+"/rooms/x13y37z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
