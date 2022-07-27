inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 6 }));
  set_short( "Corridor - x57y37z6" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z6.c",
  "south" : DIR+"/rooms/x57y36z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
