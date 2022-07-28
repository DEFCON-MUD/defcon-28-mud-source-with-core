inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 0 }));
  set_short( "Corridor - x29y48z0" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y49z0.c",
  "south" : DIR+"/rooms/x29y47z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
