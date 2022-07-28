inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 29, 8 }));
  set_short( "Hallway - x41y29z8" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y30z8.c",
  "south" : DIR+"/rooms/x41y28z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
