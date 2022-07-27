inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 1 }));
  set_short( "Passage - x41y32z1" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y32z1.c",
  "south" : DIR+"/rooms/x41y31z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
