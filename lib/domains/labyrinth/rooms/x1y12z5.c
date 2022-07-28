inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 5 }));
  set_short( "Hallway - x1y12z5" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y13z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
