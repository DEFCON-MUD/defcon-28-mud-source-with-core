inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 10, 9 }));
  set_short( "Hallway - x48y10z9" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y10z9.c",
  "east" : DIR+"/rooms/x49y10z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
