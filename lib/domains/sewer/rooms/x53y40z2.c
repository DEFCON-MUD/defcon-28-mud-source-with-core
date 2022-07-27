inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 2 }));
  set_short( "Hallway - x53y40z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y40z2.c",
  "north" : DIR+"/rooms/x53y41z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
