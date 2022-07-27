inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 19, 7 }));
  set_short( "Corridor - x35y19z7" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y20z7.c",
  "south" : DIR+"/rooms/x35y18z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
