inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 9 }));
  set_short( "Passage - x61y23z9" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z9.c",
  "south" : DIR+"/rooms/x61y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
