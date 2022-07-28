inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 5 }));
  set_short( "Corridor - x44y62z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z5.c",
  "east" : DIR+"/rooms/x45y62z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
