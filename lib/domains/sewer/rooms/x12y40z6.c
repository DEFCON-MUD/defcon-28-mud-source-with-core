inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 6 }));
  set_short( "Corridor - x12y40z6" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z6.c",
  "east" : DIR+"/rooms/x13y40z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
