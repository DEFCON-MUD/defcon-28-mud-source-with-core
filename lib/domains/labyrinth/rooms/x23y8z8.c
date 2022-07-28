inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 8 }));
  set_short( "Corridor - x23y8z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y8z8.c",
  "north" : DIR+"/rooms/x23y9z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
