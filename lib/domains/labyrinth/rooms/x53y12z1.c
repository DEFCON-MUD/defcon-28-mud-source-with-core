inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 1 }));
  set_short( "Passage - x53y12z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y12z1.c",
  "north" : DIR+"/rooms/x53y13z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
