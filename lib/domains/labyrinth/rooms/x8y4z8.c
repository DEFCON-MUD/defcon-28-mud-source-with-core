inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 4, 8 }));
  set_short( "Corridor - x8y4z8" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y4z8.c",
  "east" : DIR+"/rooms/x9y4z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
