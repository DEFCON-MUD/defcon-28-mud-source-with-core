inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 2 }));
  set_short( "Passage - x29y50z2" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y50z2.c",
  "north" : DIR+"/rooms/x29y51z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
