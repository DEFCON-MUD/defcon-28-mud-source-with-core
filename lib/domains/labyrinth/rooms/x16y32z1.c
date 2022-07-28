inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 32, 1 }));
  set_short( "Passage - x16y32z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y32z1.c",
  "east" : DIR+"/rooms/x17y32z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
