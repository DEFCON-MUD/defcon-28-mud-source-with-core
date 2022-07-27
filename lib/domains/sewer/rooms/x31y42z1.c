inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 1 }));
  set_short( "Hallway - x31y42z1" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y42z1.c",
  "south" : DIR+"/rooms/x31y41z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
