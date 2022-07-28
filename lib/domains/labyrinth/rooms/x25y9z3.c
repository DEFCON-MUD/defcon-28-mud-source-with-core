inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 9, 3 }));
  set_short( "Corridor - x25y9z3" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y10z3.c",
  "south" : DIR+"/rooms/x25y8z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
