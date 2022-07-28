inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 30, 1 }));
  set_short( "Passage - x41y30z1" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y30z1.c",
  "north" : DIR+"/rooms/x41y31z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
