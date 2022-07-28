inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 1 }));
  set_short( "Hallway - x13y52z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z1.c",
  "east" : DIR+"/rooms/x14y52z1.c",
  "north" : DIR+"/rooms/x13y53z1.c",
  "south" : DIR+"/rooms/x13y51z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
