inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 9 }));
  set_short( "Hallway - x13y14z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y14z9.c",
  "north" : DIR+"/rooms/x13y15z9.c",
  "south" : DIR+"/rooms/x13y13z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
