inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 8 }));
  set_short( "Hallway - x13y50z8" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y50z8.c",
  "north" : DIR+"/rooms/x13y51z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
