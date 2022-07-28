inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 42, 7 }));
  set_short( "Hallway - x16y42z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y42z7.c",
  "east" : DIR+"/rooms/x17y42z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
