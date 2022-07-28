inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 1 }));
  set_short( "Corridor - x15y56z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y56z1.c",
  "south" : DIR+"/rooms/x15y55z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
