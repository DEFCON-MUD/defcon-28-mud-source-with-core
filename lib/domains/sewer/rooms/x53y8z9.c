inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 9 }));
  set_short( "Passage - x53y8z9" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z9.c",
  "east" : DIR+"/rooms/x54y8z9.c",
  "north" : DIR+"/rooms/x53y9z9.c",
  "south" : DIR+"/rooms/x53y7z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
