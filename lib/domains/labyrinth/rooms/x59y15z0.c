inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 0 }));
  set_short( "Corridor - x59y15z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z0.c",
  "south" : DIR+"/rooms/x59y14z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
