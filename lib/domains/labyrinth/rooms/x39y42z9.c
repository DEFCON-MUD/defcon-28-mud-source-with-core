inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 9 }));
  set_short( "Passage - x39y42z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y42z9.c",
  "south" : DIR+"/rooms/x39y41z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
