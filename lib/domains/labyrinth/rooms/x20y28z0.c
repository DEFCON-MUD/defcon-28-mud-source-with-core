inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 28, 0 }));
  set_short( "Passage - x20y28z0" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y28z0.c",
  "east" : DIR+"/rooms/x21y28z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
