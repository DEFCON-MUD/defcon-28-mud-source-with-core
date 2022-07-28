inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 9 }));
  set_short( "Corridor - x35y22z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y22z9.c",
  "east" : DIR+"/rooms/x36y22z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
