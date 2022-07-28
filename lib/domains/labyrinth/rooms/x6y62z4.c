inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 4 }));
  set_short( "Hallway - x6y62z4" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z4.c",
  "east" : DIR+"/rooms/x7y62z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
