inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 25, 4 }));
  set_short( "Hallway - x55y25z4" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y26z4.c",
  "south" : DIR+"/rooms/x55y24z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
