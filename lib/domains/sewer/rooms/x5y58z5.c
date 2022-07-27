inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 5 }));
  set_short( "Hallway - x5y58z5" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y59z5.c",
  "south" : DIR+"/rooms/x5y57z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
