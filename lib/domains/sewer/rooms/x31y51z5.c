inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 5 }));
  set_short( "Corridor - x31y51z5" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z5.c",
  "south" : DIR+"/rooms/x31y50z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
