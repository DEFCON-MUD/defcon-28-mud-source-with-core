inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 9 }));
  set_short( "Hallway - x17y4z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z9.c",
  "north" : DIR+"/rooms/x17y5z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
