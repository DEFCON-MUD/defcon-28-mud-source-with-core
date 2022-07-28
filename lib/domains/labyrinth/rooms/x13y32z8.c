inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 8 }));
  set_short( "Corridor - x13y32z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y32z8.c",
  "north" : DIR+"/rooms/x13y33z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
