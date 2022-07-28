inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 9 }));
  set_short( "Hallway - x61y16z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z9.c",
  "south" : DIR+"/rooms/x61y15z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
