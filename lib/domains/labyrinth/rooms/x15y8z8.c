inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 8, 8 }));
  set_short( "Passage - x15y8z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y8z8.c",
  "south" : DIR+"/rooms/x15y7z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
