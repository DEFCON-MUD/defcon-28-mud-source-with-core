inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 4, 4 }));
  set_short( "Passage - x20y4z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y4z4.c",
  "east" : DIR+"/rooms/x21y4z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
