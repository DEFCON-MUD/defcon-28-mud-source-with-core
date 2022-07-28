inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 4 }));
  set_short( "Passage - x13y14z4" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z4.c",
  "north" : DIR+"/rooms/x13y15z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
