inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 7 }));
  set_short( "Corridor - x41y31z7" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z7.c",
  "south" : DIR+"/rooms/x41y30z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
