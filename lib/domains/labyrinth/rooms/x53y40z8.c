inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 8 }));
  set_short( "Corridor - x53y40z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y41z8.c",
  "south" : DIR+"/rooms/x53y39z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
