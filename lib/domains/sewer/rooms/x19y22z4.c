inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 4 }));
  set_short( "Hallway - x19y22z4" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y22z4.c",
  "north" : DIR+"/rooms/x19y23z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
