inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 9 }));
  set_short( "Passage - x12y22z9" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z9.c",
  "east" : DIR+"/rooms/x13y22z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
