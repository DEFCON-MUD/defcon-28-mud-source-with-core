inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 8 }));
  set_short( "Hallway - x19y32z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y33z8.c",
  "south" : DIR+"/rooms/x19y31z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
