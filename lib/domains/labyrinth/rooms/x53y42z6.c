inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 6 }));
  set_short( "Hallway - x53y42z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y43z6.c",
  "south" : DIR+"/rooms/x53y41z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
