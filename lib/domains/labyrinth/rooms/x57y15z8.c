inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 15, 8 }));
  set_short( "Passage - x57y15z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y16z8.c",
  "south" : DIR+"/rooms/x57y14z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
