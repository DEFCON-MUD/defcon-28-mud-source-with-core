inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 0 }));
  set_short( "Corridor - x61y23z0" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z0.c",
  "south" : DIR+"/rooms/x61y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
