inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 51, 8 }));
  set_short( "Hallway - x15y51z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y52z8.c",
  "south" : DIR+"/rooms/x15y50z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
