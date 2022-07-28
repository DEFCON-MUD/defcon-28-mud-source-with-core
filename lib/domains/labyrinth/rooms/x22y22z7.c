inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 22, 7 }));
  set_short( "Passage - x22y22z7" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y22z7.c",
  "east" : DIR+"/rooms/x23y22z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
