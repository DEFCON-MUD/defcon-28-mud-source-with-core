inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 14, 7 }));
  set_short( "Corridor - x12y14z7" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y14z7.c",
  "east" : DIR+"/rooms/x13y14z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
