inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 8 }));
  set_short( "Passage - x37y44z8" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y44z8.c",
  "north" : DIR+"/rooms/x37y45z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
