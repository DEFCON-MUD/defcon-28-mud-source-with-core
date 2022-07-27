inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 9 }));
  set_short( "Corridor - x7y8z9" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z9.c",
  "south" : DIR+"/rooms/x7y7z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
