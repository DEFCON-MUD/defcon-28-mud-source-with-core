inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 27, 8 }));
  set_short( "Hallway - x37y27z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y28z8.c",
  "south" : DIR+"/rooms/x37y26z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
