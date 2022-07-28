inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 62, 8 }));
  set_short( "Hallway - x42y62z8" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y62z8.c",
  "east" : DIR+"/rooms/x43y62z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
