inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 2 }));
  set_short( "Hallway - x37y17z2" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z2.c",
  "south" : DIR+"/rooms/x37y16z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
