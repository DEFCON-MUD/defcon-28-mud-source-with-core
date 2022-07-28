inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 42, 7 }));
  set_short( "Passage - x52y42z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y42z7.c",
  "east" : DIR+"/rooms/x53y42z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
