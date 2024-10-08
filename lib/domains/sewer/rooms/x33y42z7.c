inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 7 }));
  set_short( "Passage - x33y42z7" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y43z7.c",
  "south" : DIR+"/rooms/x33y41z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
