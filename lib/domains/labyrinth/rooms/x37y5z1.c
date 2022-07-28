inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 5, 1 }));
  set_short( "Hallway - x37y5z1" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y6z1.c",
  "south" : DIR+"/rooms/x37y4z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
