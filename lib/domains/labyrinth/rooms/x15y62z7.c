inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 7 }));
  set_short( "Corridor - x15y62z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z7.c",
  "east" : DIR+"/rooms/x16y62z7.c",
  "south" : DIR+"/rooms/x15y61z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
